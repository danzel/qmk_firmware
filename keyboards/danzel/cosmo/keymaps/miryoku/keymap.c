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

enum keycodes {
    // SMTD keycodes begin
    SMTD_KEYCODES_BEGIN = SAFE_RANGE,

    // left home row
    CKC_A,
    CKC_R,
    CKC_S,
    CKC_T,

    CKC_ESC,
    CKC_SPC,
    CKC_TAB,

    // right home row
    CKC_N,
    CKC_E,
    CKC_I,
    CKC_O,

    CKC_ENT,
    CKC_BSPC,
    CKC_DEL,

    SMTD_KEYCODES_END,
    // SMTD keycodes end
};

// include after enum def, otherwise it won't work.
#include "features/sm_td.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        CKC_A,   CKC_R,   CKC_S,   CKC_T,   KC_G,                               KC_M,    CKC_N,   CKC_E,   CKC_I,   CKC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                   CKC_ESC, CKC_SPC, CKC_TAB,          CKC_ENT, CKC_BSPC,CKC_DEL
    ),

    //Left Thumb Layers
    [_NAV] = LAYOUT_split_3x5_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        G(KC_LEFT), G(KC_RGHT), G(C(KC_LEFT)), G(C(KC_RGHT)), KC_NO,            KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                                   KC_NO,   KC_NO,   KC_NO,            KC_ENT,  KC_BSPC, KC_DEL
    ),

    [_MOUSE] = LAYOUT_split_3x5_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_NO,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                                   KC_NO,   KC_NO,   KC_NO,            KC_BTN3, KC_BTN1, KC_BTN2
    ),

    [_MEDIA] = LAYOUT_split_3x5_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_NO,   KC_NO,   KC_NO,            KC_MSTP, KC_MPLY, KC_MUTE
    ),

    //Special Layer
    [_BUTTON] = LAYOUT_split_3x5_3(
        C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                            C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                            C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
                                   KC_BTN2, KC_BTN1, KC_BTN3,          KC_BTN3, KC_BTN1, KC_BTN2
    ),

    //Right Thumb Layers
    [_NUM] = LAYOUT_split_3x5_3(
        KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                            C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                             KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_DOT,  KC_0,    KC_MINS,          KC_NO,   KC_NO,   KC_NO
    ),

    [_SYM] = LAYOUT_split_3x5_3(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                            C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                            KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_LPRN, KC_RPRN, KC_UNDS,          KC_NO,   KC_NO,   KC_NO
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_RBRC,                            C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
        KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_EQL,                             KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_BSLS,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_APP,  KC_SPC,  KC_TAB,           KC_NO,   KC_NO,   KC_NO
    ),
};

// ==============================================
// SMTD
// https://github.com/stasmarkin/sm_td/
void on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        // left side
        SMTD_MT(CKC_A, KC_A, KC_LGUI)
        SMTD_MT(CKC_R, KC_R, KC_LALT)
        SMTD_MT(CKC_S, KC_S, KC_LCTL)
        SMTD_MT(CKC_T, KC_T, KC_LSFT)

        SMTD_LT(CKC_ESC, KC_ESC, _MEDIA)
        SMTD_LT(CKC_SPC, KC_SPACE, _NAV)
        SMTD_LT(CKC_TAB, KC_TAB, _MOUSE)

        // right side
        SMTD_MT(CKC_N, KC_N, KC_LSFT)
        SMTD_MT(CKC_E, KC_E, KC_LCTL)
        SMTD_MT(CKC_I, KC_I, KC_LALT)
        SMTD_MT(CKC_O, KC_O, KC_LGUI)

        SMTD_LT(CKC_ENT, KC_ENT, _SYM)
        SMTD_LT(CKC_BSPC, KC_BSPC, _NUM)
        SMTD_LT(CKC_DEL, KC_DEL, _FUN)
    }
}

uint32_t get_smtd_timeout(uint16_t keycode, smtd_timeout timeout) {
    switch (keycode) {
        // left side
        case CKC_A:
            if (timeout == SMTD_TIMEOUT_TAP) return 350;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_R:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_S:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_T:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;

        case CKC_ESC:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_SPC:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_TAB:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;

        // right side
        case CKC_N:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_E:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_I:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_O:
            if (timeout == SMTD_TIMEOUT_TAP) return 350;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;

        case CKC_ENT:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_BSPC:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
        case CKC_DEL:
            if (timeout == SMTD_TIMEOUT_TAP) return 300;
            if (timeout == SMTD_TIMEOUT_RELEASE) return 20;
            break;
   }

    return get_smtd_timeout_default(timeout);
}

// ==============================================
// CORE
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_smtd(keycode, record)) {
        return false;
    }

    return true;
}
