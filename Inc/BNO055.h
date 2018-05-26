/*
 * BNO055.h
 *
 *  Created on: May 16, 2018
 *      Author: pasindu
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef BNO055_H_
#define BNO055_H_
#endif /* BNO055_H_ */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Struct ------------------------------------------------------------*/
typedef struct Bno {
	int16_t eulerX;
	int16_t eulerY;
	int16_t eulerZ;
}BNO;

/* Functions ------------------------------------------------------------------*/
uint8_t BNO_I2C_Read(uint8_t);
void BNO_I2C_Write(uint8_t, uint8_t*);
void BNO_I2C_Configure(void);
void BnoUpdateEuler(void);
void BnoPrintEuler(void);

