#include QMK_KEYBOARD_H


//Macros
enum custom_keycodes {
  M_CUNT = SAFE_RANGE,
  M_GARB,
  M_MISS,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT,
		KC_LCTL, KC_LGUI, KC_LALT,            KC_SPC,      KC_LALT, MO(1), KC_LGUI, KC_LCTL),

	[1] = LAYOUT_60_ansi(
		KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,
		KC_NO,  KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  TG(2),
		KC_NO,  KC_LEFT, KC_DOWN, KC_RGHT, BL_TOGG, BL_INC, BL_DEC, BL_STEP,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		KC_NO,  RGB_TOG, RGB_MOD, RGB_RMOD,RGB_HUI, RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,RGB_SPI,RGB_SPD,
		KC_NO,  KC_NO,   KC_NO,                   KC_NO,                     KC_NO, KC_TRNS, KC_NO, KC_NO),

   [2] = LAYOUT_60_ansi(
  		KC_ESC, M_CUNT,M_MISS,M_GARB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_MINS, KC_EQL, KC_BSPC,
  		KC_TAB, KC_Q,  KC_W,  KC_E,   KC_R,   KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_TRNS,
  		KC_CAPS,KC_A,  KC_S,  KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN,KC_QUOT, KC_ENT,
  		KC_LSFT,KC_Z,  KC_X,  KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,KC_DOT, KC_SLSH,KC_LSFT,
  		KC_LCTL, KC_LGUI, KC_LALT,            KC_SPC,      KC_LALT, MO(3),KC_LGUI,KC_LCTL),

    [3] = LAYOUT_60_ansi(
    		TO(0), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,
    		KC_NO,  KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  TG(1),
    		KC_NO,  KC_LEFT, KC_DOWN, KC_RGHT, BL_TOGG, BL_INC, BL_DEC, BL_STEP,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    		KC_NO,  RGB_TOG, RGB_MOD, RGB_RMOD,RGB_HUI, RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,RGB_SPI,RGB_SPD,
    		KC_NO,  KC_NO,   KC_NO,                   KC_NO,                     KC_NO, KC_TRNS, KC_NO, KC_NO),



};


// Custom Actions/Macros


 bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M_CUNT:
      if (record->event.pressed) {
        // when keycode M_CUNT is pressed
        SEND_STRING(SS_TAP(X_T));
        _delay_ms(200);
        SEND_STRING("What a cunt!");
        _delay_ms(200);
        SEND_STRING(SS_TAP(X_ENTER));
      } else {
        // when keycode M_CUNT is released
      }
      break;

    case M_MISS:
           if (record->event.pressed) {
             // when keycode M_MISS is pressed
             SEND_STRING(SS_TAP(X_T));
             _delay_ms(200);
             SEND_STRING("You missed!");
             _delay_ms(200);
             SEND_STRING(SS_TAP(X_ENTER));
           } else {
             // when keycode M_MISS is released
           }
           break;

    case M_GARB:
          if (record->event.pressed) {
            // when keycode M_GARB is pressed
            SEND_STRING(SS_TAP(X_T));
            _delay_ms(200);
            SEND_STRING("I'm garbage!");
            _delay_ms(200);
            SEND_STRING(SS_TAP(X_ENTER));
          } else {
            // when keycode M_GARB is released
          }
          break;
  }
  return true;
};
