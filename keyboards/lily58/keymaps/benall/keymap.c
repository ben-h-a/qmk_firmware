#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _GAMING,
  _GAMING_RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// ,-----------------------------------------.                    ,-----------------------------------------.
// | ESC  |  1   |  2   |  3   |  4   |  5   |                    |  6   |  7   |  8   |  9   |  0   | EQL  |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | TAB  |  Q   |  W   |  E   |  R   |  T   |                    |  Y   |  U   |  I   |  O   |  P   | MINS |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | LSFT |  A   |  S   |  D   |  F   |  G   |                    |  H   |  J   |  K   |  L   | SCLN | QUOT |
// |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// | LCTL |  Z   |  X   |  C   |  V   |  B   | LBRC |      | RBRC |  N   |  M   |  COMM|  DOT | SLSH | GRV  |
// |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
//                      | LALT | LGUI | TT(1)|  ENT |      |  SPC | TT 2 | BSPC | DEL  |
//                      +------+------+------|------+      +------+------+------|------+
[_QWERTY] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                   KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,        KC_RBRC,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRV,
                                        KC_LALT,    KC_LGUI,    TT(_LOWER),   KC_ENT,         KC_SPC,     TT(_RAISE),      KC_BSPC,    KC_DEL
),

// ,-----------------------------------------.                    ,-----------------------------------------.
// | ESC  |  1   |  2   |  3   |  4   |  5   |                    |      |      |      |      |      |      |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | TAB  |  Q   |  W   |  E   |  R   |  T   |                    |      |      |      |      |      |      |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | LSFT |  A   |  S   |  D   |  F   |  G   |                    |      |      |      |      |      |      |
// |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// | LCTL |  Z   |  X   |  C   |  V   |  B   | LBRC |      |      |      |      |      |      |      |      |
// |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
//                      | LALT | ENT  |GM_UP |  SPC |      |_QWERTY|QWERTY| BSPC | DEL  |
//                      +------+------+------|------+      +------+------+------|------+
[_GAMING] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                                        KC_LALT,    KC_LGUI,    MO(_GAMING_RAISE),   KC_SPC,         DF(_QWERTY),    XXXXXXX,      XXXXXXX,    XXXXXXX
),

// ,-----------------------------------------.                   ,-----------------------------------------.
// |  6   |  7   |  8   |  9   |  0   | EQL  |                   |      |      |      |      |      |      |
// |------+------+------+------+------+------|                   |------+------+------+------+------+------|
// |  Y   |  U   |  I   |  O   |  P   | MINS |                   |      |      |      |      |      |      |
// |------+------+------+------+------+------|                   |------+------+------+------+------+------|
// |  H   |  J   |  K   |  L   | SCLN | QUOT |                   |      |      |      |      |      |      |
// |------+------+------+------+------+------|------+     +------|------+------+------+------+------+------|
// |  N   |  M   |  COMM|  DOT | SLSH | GRV  | LBRC |     |      |      |      |      |      |      |      |
// |------+------+------+------+------+------|------+     +------|------+------+------+------+------+------|
//                      |      |      |      |      |     |      |      |      |      |
//                      +------+------+------|------+     +------+------+------|------+
[_GAMING_RAISE] = LAYOUT(
    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRV,       KC_LBRC,            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                                        _______,    _______,   _______,   _______,          XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX
),

// ,-----------------------------------------.                     ,-----------------------------------------.
// |      |      |      |      |      |      |                     |      |      |      |      |      |      |
// |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// | CAPS |      |      |      |      |      |                     |      |      | UP   |      |      |      |
// |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// | LSFT | \    |  #   |  |   |  <   |  >   |                     |      | LEFT | DOWN | RGHT |      |      |
// |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
// | LCTL | LALT | LGUI |      |      |      | LCBR |       | RCBR | HOME | END  | PGUP | PGDN | WBAK | WFWD |
// |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
//                      | TRNS | TRNS | TRNS | TRNS |       | TRNS | TRNS | TRNS | TRNS |
//                      +------+------+------|------+       +------+------+------|------+
[_LOWER] = LAYOUT(
_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,_______,_______,KC_UP,_______,_______,_______,
KC_CAPS,KC_SLSH,KC_NUHS,KC_NUBS,KC_LT,KC_GT,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,_______,_______,KC_LCBR,KC_RCBR,KC_HOME,KC_END,KC_PGUP,KC_PGDN,KC_WBAK,KC_WFWD,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
),



// ,-----------------------------------------.                     ,-----------------------------------------.
// | MPRV | MNXT | MPLY | VOLD | VOLU | MUTE |                    |      |  7   |  8   |  9   | PMNS |  NO  |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | F1   | F2   | F3   | F4   | F5   | F6   |                    |   NO |   4  |   5  |   6  | PPLS |  NO  |
// |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// | F7   | F8   | F9   | F10  | F11  | F12  |                    |  NO  |  1   |  2   |  3   | PAST |  NO  |
// |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// | NO   | NO   | NO   | NO   | NO   | NO   | LPRN |      | RPRN |  NO  |  0   |  DOT |  PEQL| PSLS |  NO  |
// +--------------------+------+------+------|------+      +------+------+------|------+------+------+------+
//                      | TRNS | TRNS | MO(3)| TRNS |      | TRNS | TRNS | TRNS | TRNS |
//                      +------+------+------|------+      +------+------+------|------+

[_RAISE] = LAYOUT(
KC_MPRV,KC_MNXT,KC_MPLY,KC_VOLD,KC_VOLU,KC_MUTE,KC_NO,KC_7,KC_8,KC_9,KC_PMNS,KC_NO,
KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_NO,KC_4,KC_5,KC_6,KC_PPLS,KC_NO,
KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_NO,KC_1,KC_2,KC_3,KC_PAST,KC_NO,
KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_LPRN,KC_RPRN,KC_NO,KC_0,KC_DOT,KC_PEQL,KC_PSLS,KC_NO,
KC_TRNS,KC_TRNS,MO(_ADJUST),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |TG GM |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  DF(_GAMING), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}
// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
