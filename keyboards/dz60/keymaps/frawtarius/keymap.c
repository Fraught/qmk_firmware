#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS

#define _QWERTY 0
#define _NUMPAD 1
#define _MEDIA 2
#define _FN 3
#define _RGB 4

// QWERTY [0] is default
// NUMPAD [TG(1)] is accessed using Fn3 (Windows/LGUI key; yellow underglow)
// MEDIA [MO(2)] is accessed with Fn1 (in between Spacebars)
// FN [MO(3)] is accessed using Fn2 (right side of Spacebars, in between right Alt and Left Arrow)
// RGB [MO(4)] is accessed by pressing Fn2 and then Enter

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// QWERTY
	LAYOUT_ISO_split(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_F13, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
		KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
		KC_LCTL, TG(1), KC_LALT, KC_SPC, MO(2), KC_SPC, KC_RALT, MO(3), KC_LEFT, KC_DOWN, KC_RGHT),
	// NUMPAD	
	LAYOUT_ISO_split(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_F13, KC_BSPC, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_P7, KC_P8, KC_P9, KC_LBRC, KC_RBRC, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_P4, KC_P5, KC_P6, KC_QUOT, KC_BSLS, KC_ENT,
		KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_P1, KC_P2, KC_P3, KC_NLCK, KC_UP, KC_SLCK, 
		KC_LCTL, KC_TRNS, KC_LALT, KC_SPC, KC_TRNS, KC_P0, KC_PDOT, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT),
	// MEDIA	
	LAYOUT_ISO_split(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F14, KC_DEL, 
		KC_TAB, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_TRNS, KC_PGUP,
		KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_ENT, 
		KC_TRNS, KC_TRNS, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NLCK, KC_TRNS, KC_SLCK, 
		KC_TRNS, KC_LGUI, KC_TRNS, KC_SPC, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	// FN	
	LAYOUT_ISO_split(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F15, KC_DEL, 
		KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_TRNS, KC_PGUP,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, MO(4), 
		KC_TRNS, KC_TRNS, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NLCK, KC_TRNS, KC_SLCK, 
		KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	// RGB	
	LAYOUT_ISO_split(
		RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, VLK_TOG, 
		KC_TRNS, RGB_RMOD, KC_TRNS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_INC,
		KC_TRNS, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, KC_TRNS, 
		KC_TRNS, KC_TRNS, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, BL_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
	
// Coloured layers

// RGB Modes
// 1 = Static
// 2-5 = Breathing
// 6-8 = Rainbow
// 9-14 = Swirl
// 15-20 = Snake
// 21-24 = Nightrider
// 25 = Christmas
// 26-30 = Static Gradient

uint8_t prev = _QWERTY;
uint32_t desired = 1;
uint16_t hue = 0;
uint16_t sat = 0;
uint16_t val = 190;

void get_hsv(void) {
    hue = rgblight_get_hue();
    sat = rgblight_get_sat();
    val = rgblight_get_val();
}

void reset_hsv(void) {
    rgblight_sethsv(hue, sat, val);
}

// Caps Lock LED

void matrix_init_user(void) {
//  DDRB |= (1 << 2);
//  PORTB &= ~(1 << 2);
//  DDRF |= (1 << 7);
//  PORTF &= ~(1 << 7);
}

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
	PORTF &= ~(1 << 7);
  } else {
	PORTF |= (1 << 7);
  }
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
    PORTB &= ~(1 << 2);
  } else {
    PORTB |= (1 << 2);
  }
}

// Layer colours (mint for NUMPAD, pink for MEDIA, light blue for FN, currently selected lighting mode for RGB)

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  if (prev!=_RGB) {
      switch (layer) {
        case _QWERTY:
          rgblight_mode(desired);
          if(desired < 9 || (desired > 14)) {
		  }
          break;
		case _NUMPAD:
		  rgblight_mode(1);
		  rgblight_setrgb(0x1D, 0x97, 0x34);
		  break;
        case _MEDIA:
          rgblight_mode(1);
          rgblight_setrgb(0x94, 0x14, 0x14);
          break;
        case _FN:
          rgblight_mode(1);
          rgblight_setrgb(0x1B, 0x8F, 0x8D);
          break;
		case _RGB:
		  rgblight_mode(desired);
		  break;
      }
  } else {
      desired = rgblight_get_mode();
      get_hsv();
  }
  prev = layer;
  return state;
}
