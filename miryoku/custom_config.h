// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//mac layer
#define MIRYOKU_LAYER_EXTRA \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTX, SLASH),U_MT(RALT, Q),   &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RALT, V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp CAPS,          &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &bt BT_CLR,         U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_out_tog,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     &u_bt_sel_0,        &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,       &bt BT_SEL 5,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTX \
&kp LG(Z),         &kp LG(X),         &kp LG(C),         &kp LG(V),         &kp LS(LG(Z)),     &kp LS(LG(Z)),     &kp LG(V),         &kp LG(C),         &kp LG(X),         &kp LG(Z),             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp LG(Z),         &kp LG(X),         &kp LG(C),         &kp LG(V),         &kp LS(LG(Z)),     &kp LS(LG(Z)),     &kp LG(V),         &kp LG(C),         &kp LG(X),         &kp LG(Z),             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         &u_to_U_BASE,     &u_to_U_EXTRA,      &u_to_U_DOTA,      &u_to_U_TAP,       &u_to_U_HALO,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Dota game layer
#define MIRYOKU_LAYER_DOTA \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp LSHFT,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &mo U_DOTAMOD,     &kp SPACE,         &kp S,             &kp RET,           &kp BSPC,          &to U_BASE,        U_NP,              U_NP

#define MIRYOKU_LAYER_DOTAMOD \
&trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   \
&trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   \
&trans,   &kp ESC,   &trans,   &kp LALT,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   \
U_NP,     U_NP,     &trans,   &kp LCTRL,   &trans,   &trans, U_NU,     U_NU,     U_NP,     U_NP


// Halo/FPS game layer
#define MIRYOKU_LAYER_HALO \
&kp NUM_1,    &kp Q,    &kp W,    &kp E,    &kp R,    &kp Y,    &kp U,    &kp I,    &kp O,    &kp P,   \
&kp LSHFT,    &kp A,    &kp S,    &kp D,    &kp F,    &kp H,    &kp J,    &kp K,    &kp L,    &kp SQT,   \
&kp LCTRL,    &kp Z,    &kp X,    &kp C,    &kp V,    &kp N,    &kp M,    &kp COMMA, &kp DOT,  &kp SLASH,   \
U_NP,     U_NP,     &mo U_HALOMOD,  &kp SPC,  &kp TAB,  &kp RET,  &kp BSPC, &to U_BASE,  U_NP,     U_NP

#define MIRYOKU_LAYER_HALOMOD \
&kp NUM_2,    &kp NUM_3,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   \
&trans,   &trans,   &trans,   &trans,   &kp G,   &trans,   &trans,   &trans,   &trans,   &trans,   \
&trans,   &kp ESC,   &trans,   &kp LALT,   &trans,   &trans,   &trans,   &trans,   &trans,   &trans,   \
U_NP,     U_NP,     &trans,   &kp LCTRL,   &trans,   &trans, U_NU,     U_NU,     U_NP,     U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,     "WIN") \
MIRYOKU_X(EXTRA,    "MAC") \
MIRYOKU_X(TAP,      "Tap") \
MIRYOKU_X(BUTTON,   "Butt") \
MIRYOKU_X(NAV,      "Nav") \
MIRYOKU_X(MOUSE,    "Mouse") \
MIRYOKU_X(MEDIA,    "Media") \
MIRYOKU_X(NUM,      "Num") \
MIRYOKU_X(SYM,      "Sym") \
MIRYOKU_X(FUN,      "Fun") \
MIRYOKU_X(BUTTX,    "Buttx") \
MIRYOKU_X(DOTA,     "DOTA") \
MIRYOKU_X(DOTAMOD,  "DOTAM") \
MIRYOKU_X(HALO,     "HALO") \
MIRYOKU_X(HALOMOD,  "HALOM")

#define MIRYOKU_LAYERMAPPING_BUTTX MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DOTA MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DOTAMOD MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_HALO MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_HALOMOD MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_BUTTX  10
#define U_DOTA   11
#define U_DOTAMOD  12
#define U_HALO    13
#define U_HALOMOD 14
