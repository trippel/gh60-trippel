#include "keymap_common.h"
/*    KEYMAP_ANSI(
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,       TRNS, \
        TRNS,NO,  NO,  NO,  NO,  NO  ,NO,  NO,  NO,  NO,  NO,            TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
*/
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   FN2, G,   H,   FN3, K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LALT,LCTL,FN0,           FN1,                     FN0, RCTL,RALT,RGUI),
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,NO,  BTN2,MS_U,BTN1,WH_U,NO,  HOME,UP,  END, NO,  NO,  NO,  NO,   \
        TRNS,NO,  MS_L,MS_D,MS_R,WH_D,PGUP,LEFT,DOWN,RGHT,NO,  NO,       TRNS, \
        TRNS,NO,  NO,  NO,  NO,  NO  ,PGDN,NO,  NO,  NO,  NO,            TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    FN0, TRNS,TRNS,TRNS),
    KEYMAP_ANSI(
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  FN4, FN5, NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  NO,  TRNS,NO,  NO,  LBRC,RBRC,NO,  NO,  NO,       TRNS, \
        TRNS,NO,  NO,  NO,  NO,  NO  ,NO,  NO,  NO,  NO,  NO,            TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
    KEYMAP_ANSI(
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  NO,  QUOT,FN8, NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   \
        TRNS,NO,  NO,  FN6, FN7, NO,  NO,  TRNS,NO,  NO,  NO,  NO,       TRNS, \
        TRNS,NO,  NO,  NO,  NO,  NO  ,NO,  NO,  NO,  NO,  NO,            TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPC),
    [2] = ACTION_LAYER_TAP_KEY(2, KC_F),
    [3] = ACTION_LAYER_TAP_KEY(3, KC_J),
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [8] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
};
