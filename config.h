// Copyright 2023 omzn (@omzn)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_HAS_GHOST

#define LED_CAPS_LOCK_PIN GP0
#define LED_PIN_ON_STATE  0

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

#define OLED_DISPLAY_128X64
#define OLED_DISPLAY_HEIGHT 64
#define OLED_DISPLAY_WIDTH 128
#define OLED_MATRIX_SIZE 1024

#define OLED_FONT_H "keyboards/next_keyboard_v2/glcdfont.c"

#define WS2812_DI_PIN GP8
#define WS2812_PIO_USE_PIO1
#define RGBLED_NUM 84
#define NOP_FUDGE 0.4

#define RGBLIGHT_LIMIT_VAL 0xEE

#define RGBLIGHT_LAYERS
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE



#define RGBLIGHT_EFFECT_KNIGHT_LED_NUM 20
#define RGBLIGHT_EFFECT_KNIGHT_OFFSET 21


//#define ENABLE_COMPILE_KEYCODE
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
