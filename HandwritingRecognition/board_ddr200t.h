// See LICENSE for license details.
#ifndef _BOARD_DDR200T_H_
#define _BOARD_DDR200T_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include "hbird_sdk_soc.h"


// GPIO Bit Offset


#define SOC_SW_5_GPIO_OFS         31
#define SOC_SW_4_GPIO_OFS         30
#define SOC_SW_3_GPIO_OFS         29
#define SOC_SW_2_GPIO_OFS         28
#define SOC_SW_1_GPIO_OFS         27
#define SOC_SW_0_GPIO_OFS         26
#define SOC_LED_5_GPIO_OFS        25
#define SOC_LED_4_GPIO_OFS        24
//#define SOC_LED_3_GPIO_OFS        23
//#define SOC_LED_2_GPIO_OFS        22
//#define SOC_LED_1_GPIO_OFS        21
#define SOC_LED_0_GPIO_OFS        0
#define SOC_LED_21_GPIO_OFS       13
#define SOC_BUTTON_C_GPIO_OFS     7
#define SOC_BUTTON_R_GPIO_OFS     6
#define SOC_BUTTON_L_GPIO_OFS     5
#define SOC_BUTTON_D_GPIO_OFS     3
#define SOC_BUTTON_U_GPIO_OFS     4
#define SOC_LED_BLUE_GPIO_OFS     2
#define SOC_LED_GREEN_GPIO_OFS    1
//#define SOC_LED_RED_GPIO_OFS      20

#define OLED_DC 20
#define OLED_RES 21
#define OLED_D0 22
#define OLED_D1 23

#define  OLED_D1_GPIO_MASK		(1<<OLED_D1)
#define  OLED_D0_GPIO_MASK		(1<<OLED_D0)
#define  OLED_RES_GPIO_MASK		(1<<OLED_RES)
#define  OLED_DC_GPIO_MASK		(1<<OLED_DC)



// GPIO Bit Mask

#define SOC_SW_5_GPIO_MASK        (1<<SOC_SW_5_GPIO_OFS)
#define SOC_SW_4_GPIO_MASK        (1<<SOC_SW_4_GPIO_OFS)
#define SOC_SW_3_GPIO_MASK        (1<<SOC_SW_3_GPIO_OFS)
#define SOC_SW_2_GPIO_MASK        (1<<SOC_SW_2_GPIO_OFS)
#define SOC_SW_1_GPIO_MASK        (1<<SOC_SW_1_GPIO_OFS)
#define SOC_SW_0_GPIO_MASK        (1<<SOC_SW_0_GPIO_OFS)
#define SOC_LED_5_GPIO_MASK       (1<<SOC_LED_5_GPIO_OFS)
#define SOC_LED_4_GPIO_MASK       (1<<SOC_LED_4_GPIO_OFS)
//#define SOC_LED_3_GPIO_MASK       (1<<SOC_LED_3_GPIO_OFS)
//#define SOC_LED_2_GPIO_MASK       (1<<SOC_LED_2_GPIO_OFS)
//#define SOC_LED_1_GPIO_MASK       (1<<SOC_LED_1_GPIO_OFS)
#define SOC_LED_0_GPIO_MASK       (1<<SOC_LED_0_GPIO_OFS)
#define SOC_LED_21_GPIO_MASK      (1<<SOC_LED_21_GPIO_OFS)
#define SOC_BUTTON_C_GPIO_MASK    (1<<SOC_BUTTON_C_GPIO_OFS)
#define SOC_BUTTON_R_GPIO_MASK    (1<<SOC_BUTTON_R_GPIO_OFS)
#define SOC_BUTTON_L_GPIO_MASK    (1<<SOC_BUTTON_L_GPIO_OFS)
#define SOC_BUTTON_D_GPIO_MASK    (1<<SOC_BUTTON_D_GPIO_OFS)
#define SOC_BUTTON_U_GPIO_MASK    (1<<SOC_BUTTON_U_GPIO_OFS)
#define SOC_LED_BLUE_GPIO_MASK    (1<<SOC_LED_BLUE_GPIO_OFS)
#define SOC_LED_GREEN_GPIO_MASK   (1<<SOC_LED_GREEN_GPIO_OFS)
//#define SOC_LED_RED_GPIO_MASK     (1<<SOC_LED_RED_GPIO_OFS)


#define SOC_RGB_GPIO_MASK         (SOC_LED_RED_GPIO_MASK | SOC_LED_GREEN_GPIO_MASK | SOC_LED_BLUE_GPIO_MASK)
#define SOC_BUTTON_GPIO_MASK      (SOC_BUTTON_U_GPIO_MASK | SOC_BUTTON_D_GPIO_MASK | SOC_BUTTON_L_GPIO_MASK | SOC_BUTTON_R_GPIO_MASK | SOC_BUTTON_C_GPIO_MASK)
#define SOC_LED_GPIO_MASK         (SOC_LED_5_GPIO_MASK | SOC_LED_4_GPIO_MASK | SOC_LED_3_GPIO_MASK | SOC_LED_2_GPIO_MASK | SOC_LED_1_GPIO_MASK | SOC_LED_0_GPIO_MASK)
#define SOC_SW_GPIO_MASK          (SOC_SW_0_GPIO_MASK | SOC_SW_1_GPIO_MASK | SOC_SW_2_GPIO_MASK | SOC_SW_3_GPIO_MASK | SOC_SW_4_GPIO_MASK | SOC_SW_5_GPIO_MASK)

#ifdef __cplusplus
}
#endif
#endif
