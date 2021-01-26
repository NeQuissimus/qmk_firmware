/* Copyright 2020 elijahblake81
 * Copyright 2021 NeQuissimus
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,   KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC,  KC_BSLS, _______,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,             KC_ENT,  _______,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,             KC_UP,   _______,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),     KC_LEFT,  KC_DOWN, KC_RGHT
        ),
    [1] = LAYOUT_65_ansi_blocker(
        _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,   KC_DEL,
        RGB_M_P, RGB_SPD,  RGB_HUI, RGB_SPI, RGB_SAI, RGB_VAI, _______, U_T_AUTO, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_RMOD, RGB_HUD, RGB_MOD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______,          _______,  _______,
        _______, _______,  _______, _______, _______, MD_BOOT, NK_TOGG, DBG_TOG, _______, _______, _______, _______,          _______,  _______,
        _______, _______,  _______,                            _______,                            _______, _______, _______, _______,  _______
    ),
};

#define COLOUR_ALPHA SPRING
#define COLOUR_ARROW TEAL
#define COLOUR_BLOCK OFF
#define COLOUR_LAYER GREEN
#define COLOUR_MODIF RED
#define COLOUR_NUMER YELLOW
#define COLOUR_SPACE ORANGE
#define COLOUR_SPECI WHITE
#define COLOUR_UNDER OFF

#define ____________ OFF

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
        COLOUR_SPECI,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_NUMER,  COLOUR_SPECI,  COLOUR_SPECI, COLOUR_MODIF, COLOUR_BLOCK,
        COLOUR_MODIF,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_SPECI,  COLOUR_SPECI, COLOUR_SPECI, COLOUR_BLOCK,
        COLOUR_MODIF,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_SPECI,  COLOUR_SPECI,  COLOUR_MODIF,               COLOUR_BLOCK,
        COLOUR_MODIF,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_ALPHA,  COLOUR_SPECI,  COLOUR_SPECI,  COLOUR_SPECI,           ____________,       COLOUR_ARROW, COLOUR_BLOCK,
        COLOUR_MODIF,  COLOUR_MODIF,  COLOUR_MODIF,                            COLOUR_SPACE,                                                   COLOUR_MODIF,  COLOUR_MODIF,                 COLOUR_ARROW, COLOUR_ARROW, COLOUR_ARROW,

        // underglow
        COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER
    },
    [1] = {
        COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  ____________,  COLOUR_LAYER,
        COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  ____________,  COLOUR_LAYER,  ____________,  ____________,  ____________,  ____________,  ____________,  ____________,  ____________,
        COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  ____________,  ____________,  ____________,  ____________,  ____________,  ____________,  ____________,                 ____________,
        ____________,  ____________,  ____________,  ____________,  ____________,  COLOUR_LAYER,  COLOUR_LAYER,  COLOUR_LAYER,  ____________,  ____________,  ____________,           ____________,        ____________,  ____________,
        ____________,  ____________,  ____________,                            ____________,                                                   ____________,  ____________,                 ____________,  ____________,  ____________,
        // underglow
        COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,                                                                                                                        COLOUR_UNDER,
        COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER,   COLOUR_UNDER
        }

};

void matrix_init_user(void) {
    debug_enable = false;
    debug_matrix = false;
    debug_keyboard = false;
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL:
                    case LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER:
                    case LED_FLAG_UNDERGLOW: {
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_disable_noeeprom();
                    }
                    break;
                    default: {
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                        rgb_matrix_enable_noeeprom();
                    }
                    break;
                }
                return false;
        }
    }
    return true;
}
void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };

        if (hsv.h || hsv.s || hsv.v) {
            RGB rgb = hsv_to_rgb(hsv);
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        } else {
            rgb_matrix_set_color(i, 0, 0, 0);
        }
    }
}
void rgb_matrix_indicators_user(void) {
    if (g_suspend_state || disable_layer_color ||
        rgb_matrix_get_flags() == LED_FLAG_NONE ||
        rgb_matrix_get_flags() == LED_FLAG_UNDERGLOW) {
            return;
        }
    set_layer_color(get_highest_layer(layer_state));
}
