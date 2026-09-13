#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include "blink.h"

// #define SLEEP_TIME_MS 1000

// /* Lấy định danh Node từ bí danh "led0" trong Devicetree */
// #define LED0_NODE DT_ALIAS(led0)

// /* Trích xuất cấu hình GPIO (port, pin, flags) từ Devicetree */
// static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

// int main(void)
// {
//     int ret;
//     bool led_state = true;

//     if(!gpio_is_ready_dt(&led)){
//         printk("Sai roi friend");
//     }

//     ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
//     if(ret < 0){
//         printk("Khong thim thay chan cam");
//         return 0;
//     }

//     printk("Khoi dong chan cam blink thanh cong");

//     while(true){
//         ret = gpio_pin_toggle_dt(&led);
//         if(ret < 0){
//             return 0;
//         }

//         led_state = !led_state;

//         printk("LED State: %s\n", led_state ? "ON" : "OFF");

//         k_msleep(1000);
//     }
//     return 0;
// }   

int app_main(void){
    printk("Khoi dong lai chuong trinh");

    init_Blink();

    printk("Cau hinh Blink thanh cong");

    bool state = false;

    while(true){
        toggle_Led();

        set_led(!state);
        printk("[Tick] Trang thai LED: %s\n", state ? "BAT" : "TAT");
        k_msleep(1000);
    }
    return 0;
}