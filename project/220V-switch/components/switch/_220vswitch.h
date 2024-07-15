/**
 * @file usblight.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-07-10
 *
 * @copyright Copyright (c) 2024
 *
*/
/**
 * @file led.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-06-14
 *
 * @copyright Copyright (c) 2024
 *
*/
#ifndef  _220VSWITCH_H
#define  _220VSWITCH_H

#define NET_WORKER_LED 0

void device_led_init(void);
void device_led_update_state(int state);
#endif