
//LED Control
// LED 3: PD13 Orange, LED 4: PD12 Green, LED 5: PD14 Red, LED 6: PD15 Blue

//LED 3 Control
#define Orange_LED_ON HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET)
#define Orange_LED_OFF HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET)
#define Orange_LED_Toggle HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13)

//LED 4 Control
#define Green_LED_ON HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET)
#define Green_LED_OFF HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET)
#define Green_LED_Toggle HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12)

//LED 5 Control
#define Red_LED_ON HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET)
#define Red_LED_OFF HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET)
#define Red_LED_Toggle HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14)

//LED 6 Control
#define BLue_LED_ON HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET)
#define Blue_LED_OFF HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET)
#define Blue_LED_Toggle HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15)
