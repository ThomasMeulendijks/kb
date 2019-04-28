#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define SFTSLSH SFT_T(KC_SLSH)
#define SFTZED SFT_T(KC_Z)
#define CTRLX CTL_T(KC_X)
#define CTRLDOT CTL_T(KC_DOT)
#define ALTC ALT_T(KC_C)
#define ALTCOMM ALT_T(KC_COMM)

#define KC_MOD1 ALT_T(KC_ENT)
#define KC_MOD2 LT(_LOWER, KC_TAB)
#define KC_MOD3 CTL_T(KC_SPC)

#define KC_MOD4 SFT_T(KC_BSPC)
#define KC_MOD5 LT(_RAISE, KC_DEL)
#define KC_MOD6 LGUI_T(KC_ESC) // GUI (hold), Escape (tab)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT( \
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, SFTZED,  CTRLX,   ALTC,    KC_V,    KC_B,    XXXXXXX,  XXXXXXX,  KC_N,    KC_M,   ALTCOMM, CTRLDOT, SFTSLSH, XXXXXXX,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 KC_MOD1,  KC_MOD2, KC_MOD3,          KC_MOD4, KC_MOD5, KC_MOD6
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),
[_RAISE] = LAYOUT( \
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX,                    XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_EXLM,  KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                   KC_PLUS, KC_7,    KC_8,    KC_9   , KC_0   ,XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_CIRC, KC_AMPR,  KC_TILD, KC_PIPE, KC_BSLS,                   KC_MINS, KC_4,    KC_5,    KC_6   , KC_EQL ,XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX, KC_DQT,  KC_QUOT,  KC_UNDS, KC_GRV, _______, XXXXXXX,   XXXXXXX,  KC_ASTR,   KC_1,    KC_2,    KC_3   , _______,XXXXXXX,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   _______, MO(_ADJUST), _______,      _______, _______, _______
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),
[_LOWER] = LAYOUT( \
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______,  KC_INS, KC_HOME, KC_PGUP, KC_LPRN, KC_RPRN,                    KC_MPRV, KC_VOLD,  KC_VOLU, KC_MNXT, KC_MPLY, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_DEL,  KC_END, KC_PGDOWN,KC_LBRC, KC_RBRC,                    KC_LEFT,KC_DOWN ,KC_UP  ,KC_RIGHT,  KC_WH_U, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_BTN1, KC_BTN2, KC_PSCR, KC_LCBR, KC_RCBR, _______,  _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WH_D, _______,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  _______, _______, _______,            _______, MO(_ADJUST),_______
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
),

[_ADJUST] = LAYOUT( \
//┌────────┬────────┬────────┬────────┬────────┬────────┐                  ┌────────┬────────┬────────┬────────┬────────┬────────┐
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┤                  ├────────┼────────┼────────┼────────┼────────┼────────┤
   _______, KC_F11, _______, _______, _______, _______,                    _______, _______, _______,  _______,   KC_F12, _______,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┐┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
//└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘└───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                  _______, _______, _______,           _______, _______, _______
                              // └────────┴────────┴────────┘         └────────┴────────┴────────┘
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
