#include "Init.h"

void GPIO_Init(void){
    SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN | RCC_AHB1ENR_GPIOCEN); 
}
void GPIO_led_init(void){
    //PB0 - green
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE0_0);  
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_0);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED0_0);
    SET_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR0_0); 
    //PB7 - blue
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE7_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_7);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED7_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR7_0);
    //PB14 - red
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE14_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_14);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED14_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR14_0);    
}

void GPIO_button_input(void){
    //PB12
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR12_0);
    //PB15
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR15_0);
    //PB9
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR9_0);
}

void GPIO_button_output(void){ //PB12, PB15, PB9
    //PB12
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_12);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED12_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR12_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS12);   
    //PB15
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_15);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED15_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR15_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS15);   
    //PB9
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_9);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED9_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR9_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS9);   
}

void button1_output(void){
    //PB12 - output
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_12);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED12_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR12_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS12);
    //PB15 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR15_0);
    //PB9 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR9_0);
}
void button2_output(void){
    //PB15 - output
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_15);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED15_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR15_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS15);
    //PB12 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR12_0);
    //PB9 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR9_0);
}
void button3_output(void){
    //PB9 - output
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_9);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDR_OSPEED9_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR9_0);
    SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS9);
    //PB15 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR15_0);
    //PB12 - input
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR12_0);
}