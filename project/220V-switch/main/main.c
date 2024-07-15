/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-07-09
 *
 * @copyright Copyright (c) 2024
 *
*/

#include <FreeRTOS.h>
#include <task.h>
#include <timers.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "blog.h"
#include <lwip/tcpip.h>
#include <easyflash.h>
#include <bl602_glb.h>
#include <bl_sys.h>
#include "device_state.h"

void main()
{
    bl_sys_init();

    easyflash_init();

    device_state_init(NULL);
    blog_info("[OS] Starting TCP/IP Stack...");
    tcpip_init(NULL, NULL);
    blog_info("[OS] proc_main_entry task...");


    while (1)
    {
        blog_debug("HeapSize=%d ", xPortGetFreeHeapSize());
        vTaskDelay(pdMS_TO_TICKS(3000));

    }
}
