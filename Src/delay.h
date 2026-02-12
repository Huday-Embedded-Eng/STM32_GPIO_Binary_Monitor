#ifndef DELAY_H_
#define DELAY_H_

#include <stdint.h>   // for uint32_t

void systickdelayms(uint32_t delay_ms);
void systickdelayus(uint32_t delay_us);

#endif /* DELAY_H_ */
