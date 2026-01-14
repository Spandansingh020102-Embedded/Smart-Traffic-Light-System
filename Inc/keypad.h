#pragma once
#include "stm32f4xx_hal.h"  // Adjust for your MCU


typedef struct {
    // ROWS
    GPIO_TypeDef* row_ports[4];
    uint16_t row_pins[4];

    // COLS
    GPIO_TypeDef* col_ports[4];
    uint16_t col_pins[4];

    // Key layout
    char keymap[4][4];
} Keypad_TypeDef;


void Keypad_Init(Keypad_TypeDef *keypad);
char Keypad_Scan(Keypad_TypeDef *keypad);
