#ifndef _BLINK_H_
#define _BLINK_H_

#include <stdbool.h>

int init_Blink(void);

int toggle_Led(void);

int set_led(bool state);
#endif