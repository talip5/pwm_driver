/*
 * pwm.h
 *
 *  Created on: Apr 10, 2023
 *      Author: ataha
 */

#ifndef USER_DRIVERS_INC_PWM_H_
#define USER_DRIVERS_INC_PWM_H_

#include <stdint.h>

typedef enum CHANNELS{
	CHANNEL1,
	CHANNEL2,
	CHANNEL3,
	CHANNEL4,
}Channels_e;

void PB4_init(void);
void pwm_init(void);
void pwm_enable(void);
void led_PC8(void);

#endif /* USER_DRIVERS_INC_PWM_H_ */
