/**
 * @file usblight.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-07-10
 *
 * @copyright Copyright (c) 2024
 *
*/
#include <stdio.h>
#include <stdlib.h>
#include <FreeRTOS.h>
#include <task.h>
#include <bl_gpio.h>
#include <blog.h>
#include <device_state.h>
#include "usblight.h"

static TaskHandle_t led_task;

static void led_status_task(void* arg)
{
    uint16_t timer_ms = 500;
    while (1)
    {
        bl_gpio_output_set(NET_WORKER_LED, 0);
        vTaskDelay(pdMS_TO_TICKS(timer_ms));
        bl_gpio_output_set(NET_WORKER_LED, 1);
        vTaskDelay(pdMS_TO_TICKS(timer_ms));
    }
}

void device_led_init(void)
{
    bl_gpio_enable_output(NET_WORKER_LED, true, false);
    // bl_gpio_enable_output(4, 1, 0);
    // bl_gpio_enable_output(3, 1, 0);
    bl_gpio_output_set(NET_WORKER_LED, 0);
    xTaskCreate(led_status_task, "net led task", 1024, NULL, 11, &led_task);
    vTaskSuspend(led_task);
}

void device_led_update_state(int state)
{
    if (state) vTaskResume(led_task);
    else vTaskSuspend(led_task);
}
