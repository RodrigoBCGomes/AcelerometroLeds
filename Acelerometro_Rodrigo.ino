#include <MOU6050_tockn.h>
#include <Wire.h>

#define pinLedX 12
#define pinLedY 11
#define pinLedZ 10

#define <MPU6050_ADDR 0x68>

#define DEBUG
MPU6050 mpu6050(Wire);

float anguloX;
float anguloY;
float anguloZ;

unsigned long controleTempo;

void setup() {

}

void loop() {

}
