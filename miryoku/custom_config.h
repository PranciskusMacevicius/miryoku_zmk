// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// // Set alpha layout to QWERTY
// #define MIRYOKU_ALPHAS_QWERTY

// // Set Windows clipboard shortcuts
// #define MIRYOKU_CLIPBOARD_WIN

// // Set thumb key layout
#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_CLIPBOARD_WIN

// Define helper for unused keys
#define XXX &none



// Define layer indices
#define U_BASE 0
#define U_EXTRA 1
#define U_TAP 2
#define U_BUTTON 3
#define U_NAV 4
#define U_MOUSE 5
#define U_MEDIA 6
#define U_NUM 7
#define U_SYM 8
#define U_FUN 9
#define U_DOOM 10
#define U_DOOM_ALT 11
#define U_GENERALS 12
#define U_GENERALS_LETTERS_ALT 13
#define U_GENERALS_NUMBERS_ALT 14
#define U_STENOGRAPHY 15

// Define custom behavior for switching to DOOM layer
// #define u_to_U_DOOM &to U_DOOM
// #define u_to_U_BASE &to U_BASE
// #define u_to_U_GENERALS &to U_GENERALS

// Define custom DOOM gaming layer with ONLY the keys mentioned:
// k00-k04 = 1-5, with TAB to the left of k00
// k12 = Q, k13 = W (shifted one position right)
// k21 = LSHIFT (left of A), k22 = A, k23 = S, k24 = D, k25 = F
// k32 = C, k33 = SPACE
// k34 = temporarily switches to DOOM_ALT layer when held down
#define MIRYOKU_LAYER_DOOM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            XXX,               XXX,               XXX,               XXX,               XXX,                \
XXX,               &kp Q,             &kp W,             XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,                \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             XXX,               XXX,               XXX,               XXX,               XXX,                \
U_NP,              U_NP,              &kp C,             &kp SPACE,         &mo U_DOOM_ALT,    XXX,               XXX,               XXX,               U_NP,              U_NP

// Define DOOM alternate weapons layer (activated when k34 is held down)
// Changes the number keys 1-5 to 6-0, keeps all other keys the same
#define MIRYOKU_LAYER_DOOM_ALT \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            XXX,               XXX,               XXX,               XXX,               XXX,                \
XXX,               &kp Q,             &kp W,             XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,                \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             XXX,               XXX,               XXX,               XXX,               XXX,                \
U_NP,              U_NP,              &kp C,             &kp SPACE,         &none,             XXX,               XXX,               XXX,               U_NP,              U_NP

#define MIRYOKU_LAYER_GENERALS \
&kp Q,             &kp W,             &kp E,                          &kp R,                                    &kp T,               XXX,               XXX,               XXX,               XXX,              XXX,  \
&kp A,             &kp S,             &kp D,                          &kp F,                                    &kp G,               XXX,               XXX,               XXX,               XXX,              XXX,  \
&kp Z,             &kp X,             &kp C,                          &kp V,                                    &kp B,               XXX,               XXX,               XXX,               XXX,              XXX, \
U_NP,              U_NP,              &mo U_GENERALS_LETTERS_ALT,     &mo U_GENERALS_NUMBERS_ALT,               &kp SPACE,           XXX,               XXX,               XXX,               U_NP,             U_NP

// Define DOOM alternate weapons layer (activated when k34 is held down)
// Changes the number keys 1-5 to 6-0, keeps all other keys the same
#define MIRYOKU_LAYER_GENERALS_LETTERS_ALT \
&kp Y,             &kp U,             &kp I,             &kp O,           &kp P,             XXX,               XXX,               XXX,               XXX,                XXX,                \
&kp H,             &kp J,             &kp K,             &kp L,           XXX,               XXX,               XXX,               XXX,               XXX,               XXX,                 \
&kp N,             &kp M,             XXX,               XXX,             XXX,               XXX,               XXX,               XXX,               XXX,               XXX,                 \
U_NP,              U_NP,              XXX,               XXX,             XXX,               XXX,               XXX,               XXX,               U_NP,              U_NP

#define MIRYOKU_LAYER_GENERALS_NUMBERS_ALT \
&kp ESC,           &kp N7,            &kp N8,            &kp N9,          XXX,               XXX,               XXX,               XXX,               XXX,                XXX,  \
&kp LCTRL,         &kp N4,            &kp N5,            &kp N6,          XXX,               XXX,               XXX,               XXX,               XXX,                XXX,  \
&kp LSHFT,         &kp N1,            &kp N2,            &kp N3,          &kp N0,            XXX,               XXX,               XXX,               XXX,                XXX,  \
U_NP,              U_NP,              XXX,               XXX,             XXX,               XXX,               XXX,               XXX,               U_NP,              U_NP

#define MIRYOKU_LAYER_GENERALS \
&kp Q,             &kp W,             &kp E,                          &kp R,                                    &kp T,               XXX,               XXX,               XXX,               XXX,              XXX,  \
&kp A,             &kp S,             &kp D,                          &kp F,                                    &kp G,               XXX,               XXX,               XXX,               XXX,              XXX,  \
&kp Z,             &kp X,             &kp C,                          &kp V,                                    &kp B,               XXX,               XXX,               XXX,               XXX,              XXX, \
U_NP,              U_NP,              &mo U_GENERALS_LETTERS_ALT,     &mo U_GENERALS_NUMBERS_ALT,               &kp SPACE,           XXX,               XXX,               XXX,               U_NP,             U_NP

#define MIRYOKU_LAYER_STENOGRAPHY \
&kp HASH,          &kp HASH,          &kp HASH,                       &kp HASH,                                 &kp HASH,            &kp HASH,          &kp HASH,          &kp HASH,          &kp HASH,         &kp HASH, \
&kp S,             &kp T,             &kp P,                          &kp H,                                    &kp STAR,            &kp STAR,          &kp F,             &kp P,             &kp L,            &kp T,  \
&kp S,             &kp K,             &kp W,                          &kp R,                                    &kp STAR,            &kp STAR,          &kp R,             &kp B,             &kp G,            &kp S,  \
U_NP,              U_NP,              &kp A,                          &kp O,                                    XXX,                 XXX,               &kp E,             &kp U,               U_NP,             U_NP

// Modify the base layer mapping to include the switch to DOOM key
// in the very top right position (the XXX position)
#define MIRYOKU_LAYERMAPPING_BASE(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  &u_to_U_DOOM  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &u_to_U_GENERALS  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  &u_to_U_STENOGRAPHY  \
               XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

// Also modify the DOOM layer mapping to include a key to go back to base layer
// using the same physical key position (top right corner)
#define MIRYOKU_LAYERMAPPING_DOOM( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
&kp TAB   K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  &u_to_U_BASE  \
XXX       K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX       K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
                    XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define MIRYOKU_LAYERMAPPING_GENERALS( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LCTRL K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX \
&kp LSHFT K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX \
                    XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define MIRYOKU_LAYERMAPPING_GENERALS_LETTERS_ALT( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LCTRL K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX \
&kp LSHFT K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX \
                    XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define MIRYOKU_LAYERMAPPING_STENOGRAPHY( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
&u_to_U_BASE  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  &kp N3 \
XXX           K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &kp D \
XXX           K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  &kp Z \
                        XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define MIRYOKU_LAYERMAPPING_DOOM_ALT MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GENERALS_NUMBERS_ALT MIRYOKU_MAPPING

// Add the DOOM and DOOM_ALT layers to the layer list
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,     "Base") \
MIRYOKU_X(EXTRA,    "Extra") \
MIRYOKU_X(TAP,      "Tap") \
MIRYOKU_X(BUTTON,   "Button") \
MIRYOKU_X(NAV,      "Nav") \
MIRYOKU_X(MOUSE,    "Mouse") \
MIRYOKU_X(MEDIA,    "Media") \
MIRYOKU_X(NUM,      "Num") \
MIRYOKU_X(SYM,      "Sym") \
MIRYOKU_X(FUN,      "Fun") \
MIRYOKU_X(DOOM,     "Doom") \
MIRYOKU_X(DOOM_ALT, "Doom Alt") \
MIRYOKU_X(GENERALS, "Generals") \
MIRYOKU_X(GENERALS_LETTERS_ALT, "Generals Letters Alt") \
MIRYOKU_X(GENERALS_NUMBERS_ALT, "Generals Numbers Alt") \
MIRYOKU_X(STENOGRAPHY, "Stenography")

// Uncomment if you prefer Inverted-T navigation layout
// #define MIRYOKU_NAV_INVERTEDT

// Uncomment if you want to flip hands (left becomes right, right becomes left)
// #define MIRYOKU_LAYERS_FLIP

// // Kconfig options
// #define CONFIG_ZMK_SLEEP y                     // Enable deep sleep support
// #define CONFIG_ZMK_IDLE_SLEEP_TIMEOUT 900000   // Sleep after 15 minutes of inactivity (in ms)
// #define CONFIG_BT_CTLR_TX_PWR_PLUS_8 y         // Increase Bluetooth transmit power to maximum

// Note: Do not try to set the shield here as that's handled at build time
