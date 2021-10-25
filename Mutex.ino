// Include Arduino FreeRTOS library
#include <Arduino_FreeRTOS.h>


// Include mutex support
#include <semphr.h>


SemaphoreHandle_t mutex;

int globalCount = 0;

void setup() {

  Serial.begin(9600);

  mutex = xSemaphoreCreateMutex();
  if (mutex != NULL) {
    Serial.println("Mutex created");
  }


  xTaskCreate(TaskMutex, // Task function
              "Task1", // Task name for humans
              128, 
              1000, // Task parameter
              1, // Task priority
              NULL);

  xTaskCreate(TaskMutex, "Task2", 128, 1000, 1, NULL);

}

void loop() {}

void TaskMutex(void *pvParameters)
{
  int delay = *((int*)pvParameters); // Use task parameters to define delay

  for (;;)
  {
   
    if (xSemaphoreTake(mutex, 10) == pdTRUE)
    {
      Serial.print(pcTaskGetName(NULL)); // Get task name
      Serial.print(", Count read value: ");
      Serial.print(globalCount);

      globalCount++;

      Serial.print(", Updated value: ");
      Serial.print(globalCount);
      
      xSemaphoreGive(mutex);
    }

    vTaskDelay(delay / portTICK_PERIOD_MS);
  }
}
