#include "keypad.h"
#include "FreeRTOS.h"
#include "Task.h"

int row_n;

// Default key layout
static const char DEFAULT_KEYMAP[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

// Initialize GPIO for a keypad
void Keypad_Init(Keypad_TypeDef *keypad)
{

    // Set all rows to LOW
    for (int i = 0; i < 4; i++)
    {
        HAL_GPIO_WritePin(keypad->row_ports[i], keypad->row_pins[i], GPIO_PIN_RESET);
    }

    // (Optional) Copy default keymap if not already set
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (keypad->keymap[i][j] == '\0')
            {
                keypad->keymap[i][j] = DEFAULT_KEYMAP[i][j];
            }
        }
    }
}

// Scan a single keypad
char Keypad_Scan(Keypad_TypeDef *keypad)
{
    for (int row = 0; row < 4; row++)
    {
        // Activate current ROW (set HIGH)
        HAL_GPIO_WritePin(keypad->row_ports[row], keypad->row_pins[row], GPIO_PIN_SET);

        // Small delay for signal stabilization
//        HAL_Delay(1);
        vTaskDelay(pdMS_TO_TICKS(10));  // Non-blocking delay for RTOS

        for (int col = 0; col < 4; col++)
        {

            if (HAL_GPIO_ReadPin(keypad->col_ports[col], keypad->col_pins[col]))
            {
                HAL_GPIO_WritePin(keypad->row_ports[row], keypad->row_pins[row], GPIO_PIN_RESET);
                return keypad->keymap[row][col];
            }
        }

        // Deactivate ROW (set LOW)
        HAL_GPIO_WritePin(keypad->row_ports[row], keypad->row_pins[row], GPIO_PIN_RESET);
    }
    return '\0'; // No key pressed
}
