#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LALT,LCTL,FN0,           SPC,                     FN0, RCTL,RALT,RGUI),
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TAB, TRNS,BTN2,MS_U,BTN1,WH_U,TRNS,HOME,UP,  END, TRNS,TRNS,TRNS,TRNS, \
        LCTL,TRNS,MS_L,MS_D,MS_R,WH_D,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS, \
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,          RSFT, \
        LALT,LCTL,FN0,           SPC,                     FN0, RCTL,RALT,RGUI),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
