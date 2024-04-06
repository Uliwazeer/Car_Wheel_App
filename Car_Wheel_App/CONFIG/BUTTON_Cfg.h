
#ifndef BUTTON_CFG_H_
#define BUTTON_CFG_H_

#define TOTAL_BUTTONS				4

/*Button Pin - signal input status : SIG_LOW - SIG_HIGH */
static const button_t button_arr[TOTAL_BUTTONS] = {
											{PINC0,SIG_LOW},
											{PINC1,SIG_LOW},
											{PINC2,SIG_LOW},
											{PINC3,SIG_LOW},		
											};



#endif /* BUTTON_CFG_H_ */