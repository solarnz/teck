#include "keymap_common.h"

const action_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*[> Not sure what the key on the left of '~' is supposed to be. The key is C2,R2. <]*/
    /*[> 0: qwerty <]*/
    KEYMAP_ANSI(
        ESC,    F1,     F2,     F3,     F4,     F5,     F6,     MPRV,   MPLY,   MNXT,   MUTE,   VOLD,    VOLU, \
        NO,     ESC,    BSLS,   NO,     NO,     NO,     FN0,    NLCK,   NO,     NO,     NO,     EQL,    RBRC, \
        GRV,    1,      2,      3,      4,      5,      LGUI,   6,      7,      8,      9,      0,      MINS, \
        SLASH,  Q,      W,      E,      R,      T,      DEL,    Y,      U,      I,      O,      P,      LBRC, \
        LSFT,   A,      S,      D,      F,      G,      TAB,    H,      J,      K,      L,      SCLN,   RSFT, \
        TAB,    Z,      X,      C,      V,      B,      RCTRL,  N,      M,      COMM,   DOT,    QUOT,   ENT, \
        LCTRL,  HOME,   PGDN,   PGUP,   END,    BSPC,   LGUI,   SPC,    LEFT,   DOWN,   UP,     RIGHT,  RALT  \
    ),
    /*[> 1: first FN layer <]*/
    KEYMAP_ANSI(
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   F7,     F8,     F9,     F10,    F11,    F12, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   CAPS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS  \
    )
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(1),
    [2] = ACTION_LAYER_MOMENTARY(3),
};
