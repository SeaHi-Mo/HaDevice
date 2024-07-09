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

#include <lwip/tcpip.h>

#include <bl602_glb.h>

#include <bl_sys.h>


void main()
{
    bl_sys_init();
    tcpip_init(NULL, NULL);
    printf("blufi demo test\r\n");
}
