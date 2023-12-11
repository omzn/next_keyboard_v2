// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <stdio.h>

enum {_BASE, _L1, _L2, _L3};

#define CM_LNG2 LCMD_T(KC_LNG2)
#define CM_LNG1 RCMD_T(KC_LNG1)
#define FN      MO(_L1)
#define FN_LOCK TG(_L2)
#define L3_LOCK TG(_L3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
//     +-------+-------+-------+-------+-------+-------+-------+-------+
        QK_GESC,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U, 
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_SPC, KC_N,   KC_M, 
                KC_ENT, KC_QUOT,KC_SCLN,KC_L,   KC_SLSH,KC_DOT, KC_COMM,
        KC_P7,  KC_P8,  KC_P9,  KC_PMNS,KC_PAST,KC_PSLS,KC_BSLS,KC_GRV,
        KC_HOME,KC_PGUP,KC_BSPC,KC_EQL, KC_MINS,KC_0,   KC_9,   KC_8,
        KC_P1,  KC_P4,  KC_P6,  KC_P3,  KC_PPLS,KC_P5,  KC_P2,  KC_UP, 
        KC_LEFT,        KC_P0,  KC_PDOT,KC_PENT,KC_RGHT,KC_DOWN,   
        KC_END, KC_PGDN,         KC_RBRC,KC_LBRC,KC_P,   KC_O,   KC_I,
        CM_LNG1,CM_LNG2,KC_RSFT,KC_LSFT,KC_LCTL,KC_LALT,KC_RALT,FN
    ),
    [_L1] = LAYOUT(
//     +-------+-------+-------+-------+-------+-------+-------+-------+
        QK_BOOT,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,_______,_______,_______,_______,_______,
        _______,KC_UP,  _______,_______,_______,_______,_______,_______,
        KC_BRIU,KC_VOLU,QK_RBT ,KC_F12 ,KC_F11 ,KC_F10 ,KC_F9  ,KC_F8,
        _______,KC_LEFT,KC_RGHT,_______,_______,KC_DOWN,KC_DOWN,FN_LOCK,
        _______,        KC_INS ,KC_DEL ,_______,_______,L3_LOCK,
        KC_BRID,KC_VOLD,        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,KC_CAPS,_______,_______,_______
    ),
    [_L2] = LAYOUT(
//    +-------+-------+-------+-------+-------+-------+-------+-------+
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,_______,_______,_______,_______,_______,
        KC_PGUP,KC_UP  ,KC_HOME,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        KC_PGUP,KC_LEFT,KC_RGHT,KC_END ,_______,KC_DOWN,KC_DOWN,_______,
        _______,        KC_INS ,KC_DEL ,_______,_______,_______,
        _______,_______,        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______
    ),
    [_L3] = LAYOUT(
//     +-------+-------+-------+-------+-------+-------+-------+-------+
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
                _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,
        RGB_HUI,_______,_______,RGB_VAI,_______,_______,RGB_SAI,_______,
        _______,        RGB_TOG,RGB_MOD,_______,_______,_______,
        _______,_______,        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______
    )

};

#ifdef RGBLIGHT_LAYERS

#define RGBLIGHT_VAL_STEP 17

const rgblight_segment_t PROGMEM rgb_default_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 84, HSV_CYAN}
);

const rgblight_segment_t PROGMEM rgb_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,1, HSV_RED},       
    {1,10, HSV_YELLOW},   
    {13,1, HSV_RED},      
    {15, 4, HSV_GREEN},   
    {25, 1, HSV_GREEN},    
    {41, 1, HSV_GREEN},    
    {60, 1, HSV_GREEN},    
    {79, 1, HSV_GREEN},    
    {22, 3, HSV_MAGENTA},  
    {53, 3, HSV_MAGENTA},  
    {57, 3, HSV_MAGENTA},  
    {81, 1, HSV_MAGENTA}  
);

const rgblight_segment_t PROGMEM rgb_fnlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {22, 3, HSV_MAGENTA},  
    {53, 3, HSV_MAGENTA},  
    {57, 3, HSV_MAGENTA},  
    {81, 2, HSV_MAGENTA}  
);

const rgblight_segment_t PROGMEM rgb_l3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {21, 4, HSV_RED},  
    {53, 4, HSV_YELLOW},  
    {57, 3, HSV_GREEN},  
    {81, 3, HSV_MAGENTA}  
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_default_layer,
    rgb_fn_layer,
    rgb_fnlock_layer,
    rgb_l3_layer
);

layer_state_t layer_state_set_user(layer_state_t state) {
//    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3));
    return state;
}

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

#endif

#define ANIM_INVERT false
#define ANIM_RENDER_WPM true
#define FAST_TYPE_WPM 30 //Switch to fast animation when over words per minute

#ifdef OLED_ENABLE
#include "aquatan.c"

void render_logo(void) {
    static const char NeXT_logo [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 
	0x20, 0x20, 0x10, 0x90, 0x98, 0x98, 0x9c, 0x3c, 0x3e, 0x7c, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 
	0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xe4, 0x84, 0x1e, 0x3e, 0xff, 0xff, 0x03, 0x00, 0x38, 
	0x1e, 0x9f, 0x8f, 0xcf, 0xc7, 0xe7, 0xe3, 0xf3, 0xf9, 0xf8, 0x1c, 0x0d, 0x8f, 0xfc, 0xf0, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe2, 0x8e, 0x3b, 0x73, 0xc3, 0x03, 
	0x23, 0x67, 0xe7, 0xc7, 0xcf, 0xcf, 0xcf, 0x8f, 0x9f, 0x9e, 0x98, 0x00, 0x03, 0x0f, 0x3c, 0xf8, 
	0xf1, 0xf3, 0xe3, 0xe7, 0xe7, 0x67, 0x63, 0x33, 0x11, 0x18, 0x0c, 0x4e, 0xc7, 0xe7, 0xe3, 0xf3, 
	0xf3, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe1, 0x87, 
	0x1c, 0x70, 0xc1, 0x87, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0x07, 
	0x83, 0xf3, 0xff, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xe1, 0x87, 0x1f, 0x3f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfe, 0xfc, 0xf1, 0xc7, 0x1f, 0x3c, 0xfc, 0xf8, 0xf9, 0xf9, 0xf1, 0xf3, 0x13, 0x03, 0xc0, 0xe0, 
	0xe7, 0xc7, 0xcf, 0xcf, 0xcf, 0x8f, 0x9f, 0x9f, 0xff, 0x7f, 0x7f, 0x3f, 0xbf, 0x9f, 0xde, 0xc8, 
	0xe4, 0xe7, 0xf3, 0xf3, 0xf9, 0xf9, 0x7c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x3f, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0xc3, 0x0f, 0x3f, 0x67, 0x60, 0x20, 0xbe, 0x9f, 0xdf, 
	0xcf, 0xe7, 0xe7, 0xf3, 0xf3, 0xf9, 0xf9, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0x1f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
	0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x03, 0xe0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x07, 0x1f, 0x1f, 0x03, 0x20, 0x3e, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 
	0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    for (int i = 0; i < 64 * 8; i += 64) { 
        oled_set_cursor(6, i / 64);
        oled_write_raw_P(NeXT_logo + i, 64);
    }
}

#endif

// -- Probably some other stuff and then --

#ifdef OLED_ENABLE

bool first_call = true;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (first_call) {
    oled_clear();
    oled_render();
    first_call = false;
  }
  switch (keycode) {
    case CM_LNG1:
    case CM_LNG2:
      if (record->event.pressed) {
        oled_set_cursor(17,7);
        oled_write_char(0x1E, false);
      } else {
        oled_set_cursor(17,7);
        oled_write_char(' ', false);
      }
      return true; 
    case KC_LALT:
    case KC_RALT:
      if (record->event.pressed) {
        oled_set_cursor(18,7);
        oled_write_char(0x1F, false);
      } else {
        oled_set_cursor(18,7);
        oled_write_char(' ', false);
      }
      return true; 
    case KC_LCTL:
      if (record->event.pressed) {
        oled_set_cursor(19,7);
        oled_write_char('^', false);
      } else {
        oled_set_cursor(19,7);
        oled_write_char(' ', false);
      }
      return true; 
    case KC_LSFT:
    case KC_RSFT:
      if (record->event.pressed) {
        oled_set_cursor(20,7);
        oled_write_char(0x18, false);
      } else {
        oled_set_cursor(20,7);
        oled_write_char(' ', false);
      }
      return true; 
    default:            
      return true; // Process all other keycodes normalllllllkljddd
  }
}

void oled_write_host_led_state(void) {
    const led_t led_state = host_keyboard_led_state();
    if (led_state.caps_lock) {
      oled_set_cursor(11,7);
      oled_write_char(0x16, false);
      oled_set_cursor(12,7);
      oled_write_char(0x17, false);
    } else {
      oled_set_cursor(11,7);
      oled_write_char(' ', false);
      oled_set_cursor(12,7);
      oled_write_char(' ', false);
    }
}

void oled_write_layer_state(void) {
//    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _BASE:                               // 各レイヤーで表示する内容を定義
            oled_set_cursor(14,7);
            oled_write_char(' ', false);
            oled_set_cursor(15,7);
            oled_write_char(' ', false);
            break;
        case _L1:
            oled_set_cursor(14,7);
            oled_write_char(0x1c, false);
            oled_set_cursor(15,7);
            oled_write_char(0x1d, false);
            break;
        case _L2:
            oled_set_cursor(14,7);
            oled_write_char(0x1c, false);
            oled_set_cursor(15,7);
            oled_write_char(0x1d, false);
            break;
        case _L3:
            oled_set_cursor(14,7);
            oled_write_char(0x1a, false);
            oled_set_cursor(15,7);
            oled_write_char(0x1b, false);
            break;
        default:
            oled_set_cursor(14,7);
            oled_write_char(' ', false);
            oled_set_cursor(15,7);
            oled_write_char(' ', false);
            break;
    }
}

static void oled_render_hex(int x, int y, int num) {
  static char wpm_str[3];
  sprintf(wpm_str, "%02X", num);
  oled_set_cursor(x, y);
  oled_write(wpm_str, false);
}

static void oled_write_rgb_mode_name(void) {
  if (rgblight_is_enabled()) {
    int mode = rgblight_get_mode();
    oled_set_cursor(5,6);
    if (mode == RGBLIGHT_MODE_STATIC_LIGHT) {
      oled_write_P(PSTR("STATIC   "), false);
    } else if (mode >= RGBLIGHT_MODE_BREATHING && mode <= RGBLIGHT_MODE_BREATHING + 3) {
      oled_write_P(PSTR("BREATHING"), false);
    } else if (mode >= RGBLIGHT_MODE_RAINBOW_MOOD  && mode <= RGBLIGHT_MODE_RAINBOW_MOOD + 2) {
      oled_write_P(PSTR("MOOD     "), false);
    } else if (mode >= RGBLIGHT_MODE_RAINBOW_SWIRL && mode <= RGBLIGHT_MODE_RAINBOW_SWIRL + 5) {
      oled_write_P(PSTR("SWIRL    "), false);
    } else if (mode >= RGBLIGHT_MODE_SNAKE && mode <= RGBLIGHT_MODE_SNAKE + 5) {
      oled_write_P(PSTR("SNAKE    "), false);
    } else if (mode >= RGBLIGHT_MODE_KNIGHT && mode <= RGBLIGHT_MODE_KNIGHT + 2) {
      oled_write_P(PSTR("KNIGHT   "), false);
    } else if (mode == RGBLIGHT_MODE_CHRISTMAS) {
      oled_write_P(PSTR("XMAS     "), false);
    } else if (mode >= RGBLIGHT_MODE_STATIC_GRADIENT && mode <= RGBLIGHT_MODE_STATIC_GRADIENT + 9) {
      oled_write_P(PSTR("GRADIENT "), false);
    } else if (mode == RGBLIGHT_MODE_RGB_TEST) {
      oled_write_P(PSTR("RGB TEST "), false);
    } else if (mode == RGBLIGHT_MODE_ALTERNATING) {
      oled_write_P(PSTR("ALTERNATE"), false);
    } else if (mode >= RGBLIGHT_MODE_TWINKLE && mode <= RGBLIGHT_MODE_TWINKLE + 5) {
      oled_write_P(PSTR("TWINKLE  "), false);
    } else {
      oled_write_P(PSTR("         "), false);
    }
  } else {
    oled_set_cursor(5,6);
    oled_write_P(PSTR("         "), false);
  }
}

void oled_write_hsv_value(void) {
  if (rgblight_is_enabled()) {
    oled_set_cursor(15,5);
    oled_write_P(PSTR("H"), false);
    oled_render_hex(15,6,rgblight_get_hue());
    oled_set_cursor(17,5);
    oled_write_P(PSTR("S"), false);
    oled_render_hex(17,6,rgblight_get_sat());
    oled_set_cursor(19,5);
    oled_write_P(PSTR("V"), false);
    oled_render_hex(19,6,rgblight_get_val());
  } else {
    oled_set_cursor(15,5);
    oled_write_P(PSTR("     "), false);
    oled_set_cursor(15,6);
    oled_write_P(PSTR("      "), false);
  }
}

bool oled_task_user(void) {
  if (first_call) {
    render_logo();
  } else {
    oled_render_anim();
    oled_write_layer_state();
    oled_write_host_led_state();
    oled_write_rgb_mode_name();
    oled_write_hsv_value();
   }
  return false;
}
#endif

/*
#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}
#endif
*/