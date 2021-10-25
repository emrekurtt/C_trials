#include <Arduino_FreeRTOS.h>
#include <semphr.h>
#define led1 7
#define led2 8
static int i = 0;


void setup() {
xTaskCreate(task1,"t1",128,NULL,2,NULL);
xTaskCreate(task2,"t2",128,NULL,1,NULL);
xTaskCreate(task3,"t3",128,NULL,3,NULL);
Serial.begin(115200);
}


void loop() {}

void task1(){
  
  pinMode(led1,OUTPUT);
  while(1){
  digitalWrite(led1,HIGH);
 vTaskDelay( 500 / portTICK_PERIOD_MS );
  digitalWrite(led1,LOW);
vTaskDelay( 500 / portTICK_PERIOD_MS );}
}
void task2(){
  pinMode(led2,OUTPUT);
  while(1){
  digitalWrite(led2,HIGH);
vTaskDelay( 300 / portTICK_PERIOD_MS );
  digitalWrite(led2,LOW);
vTaskDelay( 300 / portTICK_PERIOD_MS );}
}
void task3(){
  i = i+1;
Serial.println(i);
vTaskDelay( 700 / portTICK_PERIOD_MS );

}
