#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x12(
        KC_ESC, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, KC_Y, KC_U,  KC_I, KC_O, KC_P, KC_BSLS,
        KC_TAB, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, KC_H, KC_J,  KC_K, KC_L,  KC_QUOT, KC_BSPC,
        LCAG_T(KC_LSFT), KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, KC_N, KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_HYPR,
        TG(4),  KC_LCTL,  KC_LALT,  KC_LGUI,  LT(1, KC_LANG2),  KC_ENT,  LSFT_T(KC_SPC), LT(2,  KC_LANG1), MO(3), KC_MPRV, KC_MPLY, CTL_T(KC_MNXT)
),

    [1] = LAYOUT_ortho_4x12(
        KC_AMPR, _______, KC_HASH, _______, KC_CIRC, _______, _______, KC_ASTR, KC_MINS, KC_EQL , KC_GRV , _______,
        _______, KC_AT  , KC_DLR , KC_LPRN, KC_RPRN, _______, _______, KC_LBRC, KC_RBRC, KC_SCLN, _______, KC_DEL ,
        _______, KC_EXLM, _______, _______, _______, _______, _______, KC_PERC, _______, _______, _______, _______,
        LCG_NRM, _______, _______, _______, MO(1)  , _______, _______, MO(2)  , MO(3)  , _______, _______, _______
    ),

    [2] = LAYOUT_ortho_4x12(
        _______, SGUI(KC_3), SGUI(KC_4), SGUI(KC_5), KC_UP  , KC_PGUP, _______, KC_1   , KC_2   , KC_3   , _______, _______,
        _______, C(KC_TAB),  SGUI(KC_R) ,    KC_LEFT,    KC_DOWN, KC_RGHT, _______, KC_4   , KC_5   , KC_6   , KC_0   , _______,
        KC_LSFT, G(KC_Z),    G(KC_X),    G(KC_C),    G(KC_V), KC_PGDN, _______, KC_7   , KC_8   , KC_9   , _______, _______,
        LCG_SWP, _______,    _______,    _______,    MO(1)  , G(KC_ENT), _______, MO(2)  , MO(3)  , _______, _______, _______
    ),

    [3] = LAYOUT_ortho_4x12(
        KC_PWR , RGB_M_R, RGB_M_B, RGB_VAI, RGB_VAD, _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_SLEP,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_BRIU,
        _______, BL_TOGG, BL_STEP, RGB_SAI, RGB_SAD, _______, _______, KC_F5  , KC_F6  , KC_F11,  KC_F12 , KC_BRID,
        _______, _______, _______, _______, MO(1)  , _______, _______, MO(2)  , MO(3)  , KC_VOLD, KC_MUTE, KC_VOLU
    ),

    [4] = LAYOUT_ortho_4x12(
        _______, _______, _______, _______, KC_WH_U, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______,
        _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_R, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
