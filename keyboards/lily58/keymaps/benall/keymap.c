#include QMK_KEYBOARD_H
#include "keymap_uk.h"


// enum layer_number {
//   _GAMING = 0,
//   _LOWER,
//   _RAISE,
// //   _GAMING,
// //   _GAMING_RAISE,
//   _ADJUST,
// };

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// // ,-----------------------------------------.                    ,-----------------------------------------.
// // | ESC  |  1   |  2   |  3   |  4   |  5   |                    |  6   |  7   |  8   |  9   |  0   | EQL  |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | TAB  |  Q   |  W   |  E   |  R   |  T   |                    |  Y   |  U   |  I   |  O   |  P   | MINS |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | LSFT |  A   |  S   |  D   |  F   |  G   |                    |  H   |  J   |  K   |  L   | SCLN | QUOT |
// // |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// // | LCTL |  Z   |  X   |  C   |  V   |  B   | LBRC |      | RBRC |  N   |  M   |  COMM|  DOT | SLSH | GRV  |
// // |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// //                      | LALT | LGUI | TT(1)|  ENT |      |  SPC | TT 2 | BSPC | DEL  |
// //                      +------+------+------|------+      +------+------+------|------+
// [_GAMING] = LAYOUT(
//     KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                   KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,
//     KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
//     KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
//     KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,        KC_RBRC,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRV,
//                                         KC_LALT,    KC_LGUI,    TT(_LOWER),   KC_ENT,         KC_SPC,     TT(_RAISE),      KC_BSPC,    KC_DEL
// ),

// // ,-----------------------------------------.                    ,-----------------------------------------.
// // | ESC  |  1   |  2   |  3   |  4   |  5   |                    |      |      |      |      |      |      |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | TAB  |  Q   |  W   |  E   |  R   |  T   |                    |      |      |      |      |      |      |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | LSFT |  A   |  S   |  D   |  F   |  G   |                    |      |      |      |      |      |      |
// // |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// // | LCTL |  Z   |  X   |  C   |  V   |  B   | LBRC |      |      |      |      |      |      |      |      |
// // |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// //                      | LALT | ENT  |GM_UP |  SPC |      |_GAMING|QWERTY| BSPC | DEL  |
// //                      +------+------+------|------+      +------+------+------|------+
// // [_GAMING] = LAYOUT(
// //     KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LBRC,            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //                                         KC_LALT,    KC_LGUI,    MO(_GAMING_RAISE),   KC_SPC,         DF(_GAMING),    XXXXXXX,      XXXXXXX,    XXXXXXX
// // ),

// // ,-----------------------------------------.                   ,-----------------------------------------.
// // |  6   |  7   |  8   |  9   |  0   | EQL  |                   |      |      |      |      |      |      |
// // |------+------+------+------+------+------|                   |------+------+------+------+------+------|
// // |  Y   |  U   |  I   |  O   |  P   | MINS |                   |      |      |      |      |      |      |
// // |------+------+------+------+------+------|                   |------+------+------+------+------+------|
// // |  H   |  J   |  K   |  L   | SCLN | QUOT |                   |      |      |      |      |      |      |
// // |------+------+------+------+------+------|------+     +------|------+------+------+------+------+------|
// // |  N   |  M   |  COMM|  DOT | SLSH | GRV  | LBRC |     |      |      |      |      |      |      |      |
// // |------+------+------+------+------+------|------+     +------|------+------+------+------+------+------|
// //                      |      |      |      |      |     |      |      |      |      |
// //                      +------+------+------|------+     +------+------+------|------+
// // [_GAMING_RAISE] = LAYOUT(
// //     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,                                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //     KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRV,       KC_LBRC,            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
// //                                         _______,    _______,   _______,   _______,          XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX
// // ),

// // ,-----------------------------------------.                     ,-----------------------------------------.
// // |      |      |      |      |      |      |                     |      |      |      |      |      |      |
// // |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// // | CAPS |      |      |  *   |   <  |  >   |                     |      |      | UP   |      |      |      |
// // |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// // | LSFT | /    |  \   |  #   |  |   |  ~   |                     |      | LEFT | DOWN | RGHT |      |      |
// // |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
// // | LCTL | LALT | LGUI |      |      |      | LCBR |       | RCBR | HOME | END  | PGUP | PGDN | WBAK | WFWD |
// // |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
// //                      | TRNS | TRNS | TRNS | TRNS |       | TRNS | TRNS | TRNS | TRNS |
// //                      +------+------+------|------+       +------+------+------|------+
// [_LOWER] = LAYOUT(
// _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
// KC_CAPS,_______,_______,KC_ASTR,KC_LT  ,KC_GT  ,_______,_______,KC_UP,_______,_______,_______,
// _______,KC_SLSH,KC_NUBS,KC_NUHS,UK_PIPE,UK_TILD,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
// _______,KC_LCTL,KC_LALT,KC_LGUI,_______,_______,KC_LCBR,KC_RCBR,KC_HOME,KC_END,KC_PGUP,KC_PGDN,KC_WBAK,KC_WFWD,
// _______,_______,_______,_______,_______,_______,_______,_______
// ),



// // ,-----------------------------------------.                     ,-----------------------------------------.
// // | MPRV | MNXT | MPLY | VOLD | VOLU | MUTE |                    |      |  7   |  8   |  9   | PMNS |  NO  |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | F1   | F2   | F3   | F4   | F5   | F6   |                    |   NO |   4  |   5  |   6  | PPLS |  NO  |
// // |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// // | F7   | F8   | F9   | F10  | F11  | F12  |                    |  NO  |  1   |  2   |  3   | PAST |  NO  |
// // |------+------+------+------+------+------|------+      +------|------+------+------+------+------+------|
// // | NO   | NO   | NO   | NO   | NO   | NO   | LPRN |      | RPRN |  NO  |  0   |  DOT |  PEQL| PSLS |  NO  |
// // +--------------------+------+------+------|------+      +------+------+------|------+------+------+------+
// //                      | TRNS | TRNS | MO(3)| TRNS |      | TRNS | TRNS | TRNS | TRNS |
// //                      +------+------+------|------+      +------+------+------|------+

// [_RAISE] = LAYOUT(
// KC_MPRV,KC_MNXT,KC_MPLY,KC_VOLD,KC_VOLU,KC_MUTE,KC_NO,KC_7,KC_8,KC_9,KC_PMNS,KC_NO,
// KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_NO,KC_4,KC_5,KC_6,KC_PPLS,KC_NO,
// KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_NO,KC_1,KC_2,KC_3,KC_PAST,KC_NO,
// KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_LPRN,KC_RPRN,KC_NO,KC_0,KC_DOT,KC_PEQL,KC_PSLS,KC_NO,
// _______,_______,MO(_ADJUST),_______,_______,_______,_______,_______
// ),
// /* ADJUST
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
//  * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
//  * |TG GM |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
//  * `-----------------------------------------/       /     \      \-----------------------------------------'
//  *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
//  *                   |      |      |      |/       /         \      \ |      |      |      |
//  *                   `----------------------------'           '------''--------------------'
//  */
//   [_ADJUST] = LAYOUT(
//   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                              _______, _______, _______, _______, _______,  _______, _______, _______
//   )
// };

enum layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _COLEMAK,
    _GAMING,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    KC_GAMING = SAFE_RANGE,
    KC_COLEMAK,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// /*
//  * QWERTY
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
//  * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
//  * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
//  * `-----------------------------------------/       /     \      \-----------------------------------------'
//  *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
//  *            |      |      |      |      |/       /         \      \ |      |      |      |      |
//  *            `----------------------------------'           '------''---------------------------'
//  */

// [_GAMING] = LAYOUT(
//   KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
//   KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
//   KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
//   KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,     XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
//                  KC_LGUI,KC_LALT,KC_LCTL, MO(_LOWER), KC_ENT,      KC_SPC,  MO(_RAISE), KC_RCTL, KC_RALT, KC_RGUI
// ),
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
[_GAMING] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                   KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_ENT,        KC_RBRC,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRV,
                                        KC_LALT,    KC_LGUI,    TT(_LOWER),   KC_SPC,         KC_SPC,     TT(_RAISE),      KC_BSPC,    KC_DEL
),
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_EQL,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_MINS,
  KC_LSFT,  KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,      KC_RBRC,KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_GRV,
            KC_LALT, KC_LGUI, TT(_LOWER),   KC_ENT,        KC_SPC, TT(_RAISE),KC_BSPC,KC_DEL
),
// /* LOWER
//  * ,-----------------------------------------.                    ,-----------------------------------------.
//  * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
//  * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
//  * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
//  * `-----------------------------------------/       /     \      \-----------------------------------------'
//  *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
//  *            |      |      |      |      |/       /         \      \ |      |      |      |      |
//  *            `----------------------------------'           '------''---------------------------'
//  */
// [_LOWER] = LAYOUT(
//   _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//   KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
//   _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
//   _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,       _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
//                        _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
// ),


// ,-----------------------------------------.                     ,-----------------------------------------.
// |      |      |      |      |      |      |                     |      |      |      |      |      |      |
// |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// | CAPS |      |      |  *   |   <  |  >   |                     |      |      | UP   |      |      |      |
// |------+------+------+------+------+------|                     |------+------+------+------+------+------|
// | LSFT | /    |  \   |  #   |  |   |  ~   |                     |      | LEFT | DOWN | RGHT |      |      |
// |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
// | LCTL | LALT | LGUI |      |      |      | LCBR |       | RCBR | HOME | END  | PGUP | PGDN | WBAK | WFWD |
// |------+------+------+------+------+------|------+       +------|------+------+------+------+------+------|
//                      | TRNS | TRNS | TRNS | TRNS |       | TRNS | TRNS | TRNS | TRNS |
//                      +------+------+------|------+       +------+------+------|------+
[_LOWER] = LAYOUT(
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
KC_CAPS,_______,_______,KC_ASTR,KC_LT  ,KC_GT  ,                        _______,_______,KC_UP,_______,_______,_______,
_______,KC_SLSH,KC_NUBS,KC_NUHS,UK_PIPE,UK_TILD,                        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
_______,KC_LCTL,KC_LALT,KC_LGUI,_______,_______,_______,        _______,KC_HOME,KC_END,KC_PGUP,KC_PGDN,KC_WBAK,KC_WFWD,
                        _______,_______,_______,_______,        _______,_______,_______,_______
),



// /* RAISE
//  * ,----------------------------------------.                    ,-----------------------------------------.
//  * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
//  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
//  * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
//  * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
//  * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
//  * `-----------------------------------------/       /     \      \-----------------------------------------'
//  *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
//  *            |      |      |      |      |/       /         \      \ |      |      |      |      |
//  *            `----------------------------------'           '------''---------------------------'
//  */
// [_RAISE] = LAYOUT(
//   _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
//   _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,KC_DLINE, KC_BSPC,
//   _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
//   _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND,   XXXXXXX, _______,
//                          _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
// ),


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
KC_MPRV,KC_MNXT,KC_MPLY,KC_VOLD,KC_VOLU,KC_MUTE,                        KC_NO,  KC_7,   KC_8,   KC_9,   KC_PMNS,KC_NO,
KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                          KC_NO,  KC_4,   KC_5,   KC_6,   KC_PPLS,KC_NO,
KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,                         KC_NO,  KC_1,   KC_2,   KC_3,   KC_PAST,KC_NO,
KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,_______,          _______,KC_NO,  KC_0,   KC_DOT, KC_PEQL,KC_PSLS,KC_NO,
                  _______,_______,MO(_ADJUST),_______,    _______,_______,_______,_______
),

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | QK_BOOT|      |QWERTY|COLEMAK|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
 [_ADJUST] = LAYOUT(
  XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  QK_BOOT  , XXXXXXX,KC_GAMING,KC_COLEMAK,CG_TOGG,XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX,CG_TOGG, XXXXXXX,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                    _______, _______, _______, _______,     _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
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


static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _GAMING:
            oled_write_ln_P(PSTR("Gmng"), false);
            break;
        case _COLEMAK:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _GAMING:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    print_status_narrow();
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_GAMING:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMING);
            }
            return false;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}
