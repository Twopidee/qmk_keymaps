#include QMK_KEYBOARD_H


// Pickles "ez63" keeb layout //



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_all(
      KC_ESC,  KC_1,    KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,
      KC_LSFT, KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_UP,   KC_RSFT, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT,                  KC_SPC, KC_SPC, KC_SPC,         KC_RALT, KC_LEFT,  KC_DOWN, KC_RGHT, MO(1)),


  [1] = LAYOUT_all(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, KC_DEL,  KC_DEL,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,  KC_NO,
      KC_NO,   BL_TOGG, BL_STEP, BL_INC,  BL_DEC,   BL_BRTG, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
      KC_NO,   KC_NO,   RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI,  RGB_VAD, KC_NO,   KC_PGUP, KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,                      KC_NO,   KC_NO,    KC_NO,                     KC_APP,  KC_HOME, KC_PGDN, KC_END,  KC_TRNS)
};



// You always have, and always will be a brother to me. -Andrew //