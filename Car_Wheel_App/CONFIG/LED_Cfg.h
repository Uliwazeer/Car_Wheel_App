
#ifndef LED_CFG_H_
#define LED_CFG_H_

#define LED_TOTAL_NUMBERS		4	

/*Led Pin No : PINA0 - PINB0 - state : ACTIVE_LOW - ACTIVE_HIGH */
static const led_t led_arr[LED_TOTAL_NUMBERS] = {
										   {PIND0,ACTIVE_HIGH},
										   {PIND1,ACTIVE_HIGH},
										   {PIND2,ACTIVE_HIGH},
										   {PIND3,ACTIVE_HIGH}
									};


#endif /* LED_CFG_H_ */