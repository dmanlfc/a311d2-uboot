#ifndef __OSCRING_H__
#define __OSCRING_H__

#define	OSCRING_CTL_REG0		SYSCTRL_OSC_RING_CTRL0
#define OSCRING_CTL_DATA0	0x55555555	/*0:25*/
#define OSCRING_CTL_REG1		SYSCTRL_OSC_RING_CTRL1
#define OSCRING_CTL_DATA1	0x80001555	/*0:13*/
#define OSCRING_CTL_REG2		SYSCTRL_OSC_RING_CTRL2
#define OSCRING_CTL_DATA2	0x55555555	/*0:25*/

#define RING_PWM_VCCK_A		PWM_AO_CD_PWM_B
#define RING_PWM_VCCK_B		PWM_AO_AB_PWM_B
#define RING_PWM_EE		PWM_AO_AB_PWM_A

int ring_msr(int index);
#endif
