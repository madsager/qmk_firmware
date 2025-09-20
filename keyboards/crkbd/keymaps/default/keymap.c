/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_split_3x6_3_ex2(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, RCTL(KC_LEFT), RCTL(KC_RGHT), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_ESC, LSFT_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LCTL_T(KC_F), KC_G, TG(3), MO(1), KC_H, RCTL_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), RSFT_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, MO(1), KC_BSPC, MO(2), KC_ENT, KC_SPC, RCTL(KC_UP)),

[_LAYER1] = LAYOUT_split_3x6_3_ex2(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LCTL, KC_RCTL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_ENT, KC_SPC, KC_RGUI),

[_LAYER2] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_LCTL, KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_EQL, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_RALT, KC_BSLS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_PIPE, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_LCBR, KC_RCBR, KC_PLUS, KC_GRV, KC_TILD, KC_NO, KC_BSPC, KC_NO, KC_ENT, KC_DEL, KC_RGUI),

[_LAYER3] = LAYOUT_split_3x6_3_ex2(QK_BOOT, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_PPLS, KC_PMNS, UG_TOGG, UG_HUEU, UG_SATU, UG_VALU, KC_VOLD, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PAST, KC_PSLS, UG_NEXT, UG_HUED, UG_SATD, UG_VALD, KC_MUTE, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, TO(0), KC_BSPC, TO(0), KC_ENT, KC_0, KC_PCMM) 

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
