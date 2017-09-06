/*  -*-  eval: (turn-on-orgtbl); -*-
 * default HHKB Layout
 */
#include "hhkb.h"

#define BASE 0
#define HHKB 1
#define EMOJI 2
#define CTL_ESC CTL_T(KC_ESC)

#define RA  100
#define RB  101
#define RC  102
#define RD  103
#define RE  104
#define RF  105
#define RG  106
#define RH  107
#define RI  126
#define RJ  108
#define RK  109
#define RL  110
#define RM  111
#define RN  112
#define RO  113
#define RP  114
#define RQ  115
#define RR  116
#define RS  117
#define RT  118
#define RU  119
#define RV  120
#define RW  127
#define RX  121
#define RY  122
#define RZ  123

#define M_RA M(RA)
#define M_RB M(RB)
#define M_RC M(RC)
#define M_RD M(RD)
#define M_RE M(RE)
#define M_RF M(RF)
#define M_RG M(RG)
#define M_RH M(RH)
#define M_RI M(RI)
#define M_RJ M(RJ)
#define M_RK M(RK)
#define M_RL M(RL)
#define M_RM M(RM)
#define M_RN M(RN)
#define M_RO M(RO)
#define M_RP M(RP)
#define M_RQ M(RQ)
#define M_RR M(RR)
#define M_RS M(RS)
#define M_RT M(RT)
#define M_RU M(RU)
#define M_RV M(RV)
#define M_RW M(RW)
#define M_RX M(RX)
#define M_RY M(RY)
#define M_RZ M(RZ)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE Level: Default Layer
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Esc   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -     | =   | \     | ` |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Tab   | Q | W | E | R | T | Y | U | I | O | P | [     | ]   | Backs |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Cont  | A | S | D | F | G | H | J | K | L | ; | '     | Ent |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Shift | Z | X | C | V | B | N | M | , | . | / | Shift | Fn0 |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|

            |------+------+-----------------------+------+------|
            | LAlt | LGUI | ******* Space ******* | RGUI | RAlt |
            |------+------+-----------------------+------+------|
    */

  [BASE] = KEYMAP(  //  default layer
  KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSLS,  KC_GRV, \
  KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,   KC_BSPC,          \
  CTL_ESC,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,                      \
  KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  MO(HHKB),                    \
                    KC_LALT,  KC_LGUI,  /*        */ KC_SPC,      KC_RGUI,  KC_RALT),



    /* Layer HHKB: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Pwr  | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   | Ins   | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Caps |     |     |     |    |    |    |    | Psc | Slk | Pus | Up  |       | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD | VoU | Mut |    |    | *  | /  | Hom | PgU | Lef | Rig | Enter |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    | +  | -  | End | PgD | Dow |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | **** |
                 |------+------+----------------------+------+------+

     */

  [HHKB] = KEYMAP(
  KC_PWR,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,   KC_DEL, \
  KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    KC_TRNS,  KC_BSPC,          \
  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS,  KC_PAST,  KC_PSLS,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  KC_PENT,                    \
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PPLS,  KC_PMNS,  KC_END,   KC_PGDN,  KC_DOWN,  KC_TRNS,  KC_TRNS,                    \
                     KC_TRNS, KC_TRNS,           TO(EMOJI),                KC_TRNS, KC_TRNS),



  [EMOJI] = KEYMAP(  //  default layer
  KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSLS,  KC_GRV, \
  KC_TAB,   M_RQ,  M_RW,  M_RE,  M_RR,  M_RT,  M_RY,  M_RU,  M_RI,     M_RO,    M_RP,     KC_LBRC,  KC_RBRC,   KC_BSPC,          \
  TO(BASE),  M_RA,  M_RS,  M_RD,  M_RF,  M_RG,  M_RH,  M_RJ,  M_RK,     M_RL,    KC_SCLN,  KC_QUOT,  KC_ENT,                      \
  KC_LSFT,  M_RZ,  M_RX,  M_RC,  M_RV,  M_RB,  M_RN,  M_RM,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,  KC_TRNS,                    \
                    KC_LALT,  KC_LGUI,  /*        */ KC_SPC,      KC_RGUI,  KC_RALT)};


const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
        case RA:
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_a: ");
          break;
        case RB :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":b: ");
          break;
        case RC :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_c: ");
          break;
        case RD :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_d: ");
          break;
        case RE :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_e: ");
          break;
        case RF :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_f: ");
          break;
        case RG :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_g: ");
          break;
        case RH :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_h: ");
          break;
        case RI:
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_i: ");
          break;
        case RJ:
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_j: ");
          break;
        case RK :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_k: ");
          break;
        case RL :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_l: ");
          break;
        case RM :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_m: ");
          break;
        case RN :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_n: ");
          break;
        case RO :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_o: ");
          break;
        case RP :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_p: ");
          break;
        case RQ :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_q: ");
          break;
        case RR :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_r: ");
          break;
        case RS :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_s: ");
          break;
        case RT :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_t: ");
          break;
        case RU :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_u: ");
          break;
        case RV :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_v: ");
          break;
        case RW :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_w: ");
          break;
        case RX :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_x: ");
          break;
        case RY :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_y: ");
          break;
        case RZ :
            if (!record->event.pressed) return MACRO_NONE;
            SEND_STRING(":regional_indicator_a: ");
          break;
      }
    return MACRO_NONE;
};
