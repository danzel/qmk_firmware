// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//https://github.com/manna-harbour/miryoku/tree/master/docs/reference
enum layer_names {
    // Typing Layer
    _BASE,
    _NAV,
    _MOUSE,
    _BUTTON,
    _MEDIA,
    _NUM,
    _SYM,
    _FUN,

    // Gaming layer
    //_LEFTG,
    //_RIGHTG,
    //_FUNCG,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_7,               KC_Q,                KC_W,                KC_F,                KC_P,                KC_B,           /* */   KC_J,                KC_L,                KC_U,                KC_Y,                KC_QUOT,            KC_9,
        KC_8,               MT(MOD_LGUI, KC_A),  MT(MOD_LALT, KC_R),  MT(MOD_LSFT, KC_S),  MT(MOD_LCTL, KC_T),  KC_G,           /* */   KC_M,                MT(MOD_RCTL, KC_N),  MT(MOD_RSFT, KC_E),  MT(MOD_RALT, KC_I),  MT(MOD_RGUI, KC_O), KC_0,
                            KC_Z,                KC_X,                KC_C,                KC_D,                KC_V,           /* */   KC_K,                KC_H,                KC_COMM,             KC_DOT,              KC_SLSH,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 LT(_MEDIA, KC_ESC),  LT(_NAV, KC_SPC),    LT(_MOUSE, KC_TAB),                                               LT(_SYM, KC_ENT),    LT(_NUM, KC_BSPC),   LT(_FUN, KC_DEL)
    ),

    // Left Thumb Layers
    [_NAV] = LAYOUT(
        KC_7,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,          /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,             KC_NO,          /* */   KC_CAPS,             KC_LEFT,             KC_DOWN,             KC_UP,               KC_RGHT,            KC_0,
                            G(KC_LEFT),          G(KC_RGHT),          G(C(KC_LEFT)),       G(C(KC_RGHT)),       KC_NO,          /* */   KC_INS,              KC_HOME,             KC_PGDN,             KC_PGUP,             KC_END,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_NO,               KC_NO,               KC_NO,                                                            KC_ENT,              KC_BSPC,             KC_DEL
    ),

    [_MOUSE] = LAYOUT(
        KC_7,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,          /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,             KC_NO,          /* */   KC_NO,               KC_MS_L,             KC_MS_D,             KC_MS_U,             KC_MS_R,            KC_0,
                            KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,          /* */   KC_NO,               KC_WH_L,             KC_WH_D,             KC_WH_U,             KC_WH_R,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_NO,               KC_NO,               KC_NO,                                                            KC_BTN3,             KC_BTN1,             KC_BTN2
    ),

    [_MEDIA] = LAYOUT(
        KC_7,               KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,          /* */   KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,              KC_9,
        KC_8,               KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,             KC_NO,          /* */   KC_NO,               KC_MPRV,             KC_VOLD,             KC_VOLU,             KC_MNXT,            KC_0,
                            KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,          /* */   KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_NO,               KC_NO,               KC_NO,                                                            KC_MSTP,             KC_MPLY,             KC_MUTE
    ),

    // Special Layer
    [_BUTTON] = LAYOUT(
        KC_7,               C(KC_Z),             C(KC_X),             C(KC_C),             C(KC_V),             C(KC_Y),        /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_LGUI,             KC_LALT,             KC_LCTL,             KC_LSFT,             KC_NO,          /* */   KC_NO,               KC_RSFT,             KC_RCTL,             KC_RALT,             KC_RGUI,            KC_0,
                            C(KC_Z),             C(KC_X),             C(KC_C),             C(KC_V),             C(KC_Y),        /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_BTN2,             KC_BTN1,             KC_BTN3,                                                          KC_BTN3,             KC_BTN1,             KC_BTN2
    ),

    // Right Thumb Layers
    [_NUM] = LAYOUT(
        KC_7,               KC_LBRC,             KC_7,                KC_8,                KC_9,                KC_RBRC,        /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_SCLN,             KC_4,                KC_5,                KC_6,                KC_EQL,         /* */   KC_NO,               KC_RSFT,             KC_RCTL,             KC_RALT,             KC_RGUI,            KC_0,
                            KC_GRV,              KC_1,                KC_2,                KC_3,                KC_BSLS,        /* */   KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_DOT,             KC_0,                KC_MINS,                                                           KC_NO,               KC_NO,               KC_NO
    ),

    [_SYM] = LAYOUT(
        KC_7,               KC_LCBR,             KC_AMPR,             KC_ASTR,             KC_LPRN,             KC_RCBR,        /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_COLN,             KC_DLR,              KC_PERC,             KC_CIRC,             KC_PLUS,        /* */   KC_NO,               KC_RSFT,             KC_RCTL,             KC_RALT,             KC_RGUI,            KC_0,
                            KC_TILD,             KC_EXLM,             KC_AT,               KC_HASH,             KC_PIPE,        /* */   KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_LPRN,            KC_RPRN,             KC_UNDS,                                                           KC_NO,               KC_NO,               KC_NO
    ),

    [_FUN] = LAYOUT(
        KC_7,               KC_F12,              KC_F7,               KC_F8,               KC_F9,               KC_RBRC,        /* */   C(KC_Y),             C(KC_V),             C(KC_C),             C(KC_X),             C(KC_Z),            KC_9,
        KC_8,               KC_F11,              KC_F4,               KC_F5,               KC_F6,               KC_EQL,         /* */   KC_NO,               KC_RSFT,             KC_RCTL,             KC_RALT,             KC_RGUI,            KC_0,
                            KC_F10,              KC_F1,               KC_F2,               KC_F3,               KC_BSLS,        /* */   KC_NO,               KC_NO,               KC_NO,               KC_NO,               KC_NO,
                                                 KC_1,                KC_2,                KC_3,                                /* */                        KC_4,                KC_5,                KC_6,
                                                 KC_APP,              KC_SPC,              KC_TAB,                                                           KC_NO,               KC_NO,               KC_NO
    )
};