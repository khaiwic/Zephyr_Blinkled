#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include "blink.h"

#define TIME_SLEEP_MS 1000

#define LED0_NODE DT_ALIAS(led0)

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

int init_Blink(void){
    if(!gpio_is_ready_dt(&led)){
        printk(" Sai roi friend");
        return;
    }

    int ret = gpio_pin_configure_dt(&led, GPIO_ACTIVE_HIGH);
    
    if(ret < 0) return 0;

    return 0;
}

int toggle_Led(void){
    return gpio_pin_toggle_dt(&led);
}

int set_led(bool state){
    return gpio_pin_set_dt(&led, state ? 1 : 0);
}