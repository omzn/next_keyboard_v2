// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum {_BASE, _L1, _L2, _L3};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
//     +-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+        
        KC_U,   KC_I,   KC_O,   KC_P,           KC_R,   KC_P7,  KC_E,   KC_P8,  KC_W,   KC_P9,  KC_Q,   KC_PPLS, 
        KC_Y,   KC_RBRC,KC_LBRC,KC_BSPC,        KC_T,   KC_P4,          KC_P5,          KC_P6,  KC_TAB,         KC_LSFT,
        KC_J,   KC_K,   KC_L,   KC_SCLN,        KC_F,   KC_P1,  KC_D,   KC_P2,  KC_S,   KC_P3,  KC_A,   KC_PENT,KC_RSFT,
        KC_H,                   KC_QUOT,KC_LALT,KC_G,   KC_SPC,         KC_P0,          KC_PDOT,QK_GESC,KC_UP,    
        KC_M,   KC_COMM,KC_DOT, KC_BSLS,KC_ENT, KC_V,   KC_PEQL,KC_C,   KC_PSLS,KC_X,   KC_PAST,KC_Z,      
        KC_N,                   KC_SLSH,KC_LCMD,KC_B,   KC_DOWN,        KC_RGHT,        KC_PMNS,        KC_LEFT,MO(_L1),
        KC_6,   KC_EQL,         KC_MINS,        KC_5,   KC_PGDN,        KC_PGUP,        KC_RCMD,KC_GRV, KC_HOME,KC_LCTL,
        KC_7,   KC_8,   KC_9,   KC_0,           KC_4,           KC_3,           KC_2,   KC_RALT,KC_1,   KC_END
    ),
    [_L1] = LAYOUT(
//     +-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+        
        _______,_______,_______,_______,        _______,KC_PGUP,_______,KC_UP,  _______,KC_HOME,_______,_______, 
        _______,_______,_______,_______,        _______,KC_LEFT,        _______,        KC_RGHT,_______,        _______,
        _______,_______,_______,_______,        _______,KC_PGDN,_______,KC_DOWN,_______,KC_END, _______,_______,_______,
        _______,                _______,_______,_______,_______,        QK_RBT,         _______,_______,_______,    
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,QK_BOOT,_______,      
        _______,                _______,_______,_______,_______,        _______,        _______,        _______,_______,
        KC_F6,  KC_F12,         KC_F11,         KC_F5,  KC_VOLD,        KC_VOLU,        _______,_______,KC_BRIU,KC_CAPS,
        KC_F7,  KC_F8,  KC_F9,  KC_F10,         KC_F4,           KC_F3,         KC_F2,  _______,KC_F1,  KC_BRID
    )

};
