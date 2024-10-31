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
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                   KC_ESC,  KC_SPC,  KC_TAB,           KC_ENT,  KC_BSPC, KC_DEL
    ),

    [_NAV] = LAYOUT(

    ),
};