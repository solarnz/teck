#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Not sure what the key on the left of '~' is supposed to be. The key is C2,R2. */
    /* 0: qwerty */
    KEYMAP_ANSI(
        RALT,   RIGHT,  DOWN,   UP,     LEFT,   BSPC,   END,    SPC,    LGUI,   PGDN,   HOME,   PGUP,   LCTRL, \
        ENT,    QUOT,   DOT,    COMM,   M,      B,      V,      N,      LCTRL,  C,      Z,      X,      TAB, \
        LBRC,   P,      O,      I,      U,      T,      R,      Y,      DEL,    E,      Q,      W,      SLASH, \
        RSFT,   SCLN,   L,      K,      J,      G,      F,      H,      U,      D,      A,      S,      LSFT, \
        EQL,    RBRC,   S,      D,      F,      CALC,   TAB,    PSCR,   FN0,    K,      BSLS,   ESC,    ESC, \
        TAB,    VOLU,   VOLD,   MUTE,   MNXT,   F6,     F5,     MPLY,   MPRV,   F4,     F2,     F3,     F1, \
        MINS,   0,      9,      8,      7,      5,      4,      6,      LGUI,   3,      1,      2,      GRV  \
    ),
    /* 1: first FN layer */
    KEYMAP_ANSI(
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,\
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
        TRNS,   F12,    F11,    F10,    F9,     TRNS,   TRNS,   F8,     F7,     TRNS,   TRNS,   TRNS,   TRNS, \
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
