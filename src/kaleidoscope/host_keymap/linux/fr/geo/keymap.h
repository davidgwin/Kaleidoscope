/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2019  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "kaleidoscope/host_keymap/linux.h"

// This file was autogenerated by host_keymap.
// Its content is based on information provided by the XKB X11 system
// collected with the extraordinary libxkbcommon.

// layout: fr
// variant: geo

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', Key_Backtick) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('%', Key_3) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('\'', RALT(Key_1)) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('(', Key_4) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', Key_0) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', Key_M) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP('1', LSHIFT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP('2', LSHIFT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP('3', LSHIFT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP('4', LSHIFT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP('5', LSHIFT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP('6', LSHIFT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP('7', LSHIFT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP('8', LSHIFT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP('9', LSHIFT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(':', Key_5) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(';', Key_6) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP('<', Key_Equals) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('>', LSHIFT(Key_Equals)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('?', Key_7) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('B', LSHIFT(Key_B)) /* U+0042, XKB_KEY_B, LATIN CAPITAL LETTER B */ \
   OP('D', LSHIFT(Key_D)) /* U+0044, XKB_KEY_D, LATIN CAPITAL LETTER D */ \
   OP('E', LSHIFT(Key_E)) /* U+0045, XKB_KEY_E, LATIN CAPITAL LETTER E */ \
   OP('J', LSHIFT(Key_Quote)) /* U+004a, XKB_KEY_J, LATIN CAPITAL LETTER J */ \
   OP('K', LSHIFT(Key_K)) /* U+004b, XKB_KEY_K, LATIN CAPITAL LETTER K */ \
   OP('L', LSHIFT(Key_L)) /* U+004c, XKB_KEY_L, LATIN CAPITAL LETTER L */ \
   OP('M', LSHIFT(Key_Semicolon)) /* U+004d, XKB_KEY_M, LATIN CAPITAL LETTER M */ \
   OP('O', LSHIFT(Key_O)) /* U+004f, XKB_KEY_O, LATIN CAPITAL LETTER O */ \
   OP('P', LSHIFT(Key_P)) /* U+0050, XKB_KEY_P, LATIN CAPITAL LETTER P */ \
   OP('Q', LSHIFT(Key_A)) /* U+0051, XKB_KEY_Q, LATIN CAPITAL LETTER Q */ \
   OP('S', LSHIFT(Key_S)) /* U+0053, XKB_KEY_S, LATIN CAPITAL LETTER S */ \
   OP('T', LSHIFT(Key_T)) /* U+0054, XKB_KEY_T, LATIN CAPITAL LETTER T */ \
   OP('U', LSHIFT(Key_U)) /* U+0055, XKB_KEY_U, LATIN CAPITAL LETTER U */ \
   OP('W', LSHIFT(Key_Z)) /* U+0057, XKB_KEY_W, LATIN CAPITAL LETTER W */ \
   OP('Z', LSHIFT(Key_W)) /* U+005a, XKB_KEY_Z, LATIN CAPITAL LETTER Z */ \
   OP('_', LSHIFT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP('|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('~', RALT(Key_NonUsPound)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', Key_Backtick) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'%', Key_3) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'\'', RALT(Key_1)) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'(', Key_4) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', Key_0) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', Key_M) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP(L'1', LSHIFT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP(L'2', LSHIFT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP(L'3', LSHIFT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP(L'4', LSHIFT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP(L'5', LSHIFT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP(L'6', LSHIFT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP(L'7', LSHIFT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP(L'8', LSHIFT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP(L'9', LSHIFT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(L':', Key_5) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L';', Key_6) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP(L'<', Key_Equals) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'>', LSHIFT(Key_Equals)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'?', Key_7) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'B', LSHIFT(Key_B)) /* U+0042, XKB_KEY_B, LATIN CAPITAL LETTER B */ \
   OP(L'D', LSHIFT(Key_D)) /* U+0044, XKB_KEY_D, LATIN CAPITAL LETTER D */ \
   OP(L'E', LSHIFT(Key_E)) /* U+0045, XKB_KEY_E, LATIN CAPITAL LETTER E */ \
   OP(L'J', LSHIFT(Key_Quote)) /* U+004a, XKB_KEY_J, LATIN CAPITAL LETTER J */ \
   OP(L'K', LSHIFT(Key_K)) /* U+004b, XKB_KEY_K, LATIN CAPITAL LETTER K */ \
   OP(L'L', LSHIFT(Key_L)) /* U+004c, XKB_KEY_L, LATIN CAPITAL LETTER L */ \
   OP(L'M', LSHIFT(Key_Semicolon)) /* U+004d, XKB_KEY_M, LATIN CAPITAL LETTER M */ \
   OP(L'O', LSHIFT(Key_O)) /* U+004f, XKB_KEY_O, LATIN CAPITAL LETTER O */ \
   OP(L'P', LSHIFT(Key_P)) /* U+0050, XKB_KEY_P, LATIN CAPITAL LETTER P */ \
   OP(L'Q', LSHIFT(Key_A)) /* U+0051, XKB_KEY_Q, LATIN CAPITAL LETTER Q */ \
   OP(L'S', LSHIFT(Key_S)) /* U+0053, XKB_KEY_S, LATIN CAPITAL LETTER S */ \
   OP(L'T', LSHIFT(Key_T)) /* U+0054, XKB_KEY_T, LATIN CAPITAL LETTER T */ \
   OP(L'U', LSHIFT(Key_U)) /* U+0055, XKB_KEY_U, LATIN CAPITAL LETTER U */ \
   OP(L'W', LSHIFT(Key_Z)) /* U+0057, XKB_KEY_W, LATIN CAPITAL LETTER W */ \
   OP(L'Z', LSHIFT(Key_W)) /* U+005a, XKB_KEY_Z, LATIN CAPITAL LETTER Z */ \
   OP(L'_', LSHIFT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP(L'|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'~', RALT(Key_NonUsPound)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'¦', RALT(LSHIFT(Key_NonUsBackslashAndPipe))) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'§', RALT(Key_7)) /* U+00a7, XKB_KEY_section, SECTION SIGN */ \
   OP(L'©', LSHIFT(Key_NonUsPound)) \
   OP(L'«', Key_NonUsBackslashAndPipe) /* U+00ab, XKB_KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'®', RALT(Key_R)) \
   OP(L'°', Key_9) /* U+00b0, XKB_KEY_degree, DEGREE SIGN */ \
   OP(L'»', RALT(Key_Period)) /* U+00bb, XKB_KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'ა', Key_Q) /* U+10d0, XKB_KEY_Georgian_an, GEORGIAN LETTER AN */ \
   OP(L'ბ', Key_B) /* U+10d1, XKB_KEY_Georgian_ban, GEORGIAN LETTER BAN */ \
   OP(L'გ', Key_G) /* U+10d2, XKB_KEY_Georgian_gan, GEORGIAN LETTER GAN */ \
   OP(L'დ', Key_D) /* U+10d3, XKB_KEY_Georgian_don, GEORGIAN LETTER DON */ \
   OP(L'ე', Key_E) /* U+10d4, XKB_KEY_Georgian_en, GEORGIAN LETTER EN */ \
   OP(L'ვ', Key_V) /* U+10d5, XKB_KEY_Georgian_vin, GEORGIAN LETTER VIN */ \
   OP(L'ზ', Key_W) /* U+10d6, XKB_KEY_Georgian_zen, GEORGIAN LETTER ZEN */ \
   OP(L'თ', Key_LeftBracket) /* U+10d7, XKB_KEY_Georgian_tan, GEORGIAN LETTER TAN */ \
   OP(L'ი', Key_I) /* U+10d8, XKB_KEY_Georgian_in, GEORGIAN LETTER IN */ \
   OP(L'კ', Key_K) /* U+10d9, XKB_KEY_Georgian_kan, GEORGIAN LETTER KAN */ \
   OP(L'ლ', Key_L) /* U+10da, XKB_KEY_Georgian_las, GEORGIAN LETTER LAS */ \
   OP(L'მ', Key_Semicolon) /* U+10db, XKB_KEY_Georgian_man, GEORGIAN LETTER MAN */ \
   OP(L'ნ', Key_N) /* U+10dc, XKB_KEY_Georgian_nar, GEORGIAN LETTER NAR */ \
   OP(L'ო', Key_O) /* U+10dd, XKB_KEY_Georgian_on, GEORGIAN LETTER ON */ \
   OP(L'პ', Key_P) /* U+10de, XKB_KEY_Georgian_par, GEORGIAN LETTER PAR */ \
   OP(L'ჟ', Key_Quote) /* U+10df, XKB_KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */ \
   OP(L'რ', Key_R) /* U+10e0, XKB_KEY_Georgian_rae, GEORGIAN LETTER RAE */ \
   OP(L'ს', Key_S) /* U+10e1, XKB_KEY_Georgian_san, GEORGIAN LETTER SAN */ \
   OP(L'ტ', Key_T) /* U+10e2, XKB_KEY_Georgian_tar, GEORGIAN LETTER TAR */ \
   OP(L'უ', Key_U) /* U+10e3, XKB_KEY_Georgian_un, GEORGIAN LETTER UN */ \
   OP(L'ფ', Key_F) /* U+10e4, XKB_KEY_Georgian_phar, GEORGIAN LETTER PHAR */ \
   OP(L'ქ', Key_A) /* U+10e5, XKB_KEY_Georgian_khar, GEORGIAN LETTER KHAR */ \
   OP(L'ღ', Key_Period) /* U+10e6, XKB_KEY_Georgian_ghan, GEORGIAN LETTER GHAN */ \
   OP(L'ყ', Key_Y) /* U+10e7, XKB_KEY_Georgian_qar, GEORGIAN LETTER QAR */ \
   OP(L'შ', Key_Comma) /* U+10e8, XKB_KEY_Georgian_shin, GEORGIAN LETTER SHIN */ \
   OP(L'ჩ', Key_NonUsPound) /* U+10e9, XKB_KEY_Georgian_chin, GEORGIAN LETTER CHIN */ \
   OP(L'ც', Key_C) /* U+10ea, XKB_KEY_Georgian_can, GEORGIAN LETTER CAN */ \
   OP(L'ძ', Key_RightBracket) /* U+10eb, XKB_KEY_Georgian_jil, GEORGIAN LETTER JIL */ \
   OP(L'წ', Key_Z) /* U+10ec, XKB_KEY_Georgian_cil, GEORGIAN LETTER CIL */ \
   OP(L'ჭ', Key_Slash) /* U+10ed, XKB_KEY_Georgian_char, GEORGIAN LETTER CHAR */ \
   OP(L'ხ', Key_X) /* U+10ee, XKB_KEY_Georgian_xan, GEORGIAN LETTER XAN */ \
   OP(L'ჯ', Key_J) /* U+10ef, XKB_KEY_Georgian_jhan, GEORGIAN LETTER JHAN */ \
   OP(L'ჰ', Key_H) /* U+10f0, XKB_KEY_Georgian_hae, GEORGIAN LETTER HAE */ \
   OP(L'ჱ', RALT(Key_E)) /* U+10f1, XKB_KEY_Georgian_he, GEORGIAN LETTER HE */ \
   OP(L'ჲ', RALT(Key_I)) /* U+10f2, XKB_KEY_Georgian_hie, GEORGIAN LETTER HIE */ \
   OP(L'ჳ', RALT(Key_V)) /* U+10f3, XKB_KEY_Georgian_we, GEORGIAN LETTER WE */ \
   OP(L'ჴ', RALT(Key_X)) /* U+10f4, XKB_KEY_Georgian_har, GEORGIAN LETTER HAR */ \
   OP(L'ჵ', RALT(Key_H)) /* U+10f5, XKB_KEY_Georgian_hoe, GEORGIAN LETTER HOE */ \
   OP(L'ჶ', RALT(Key_F)) /* U+10f6, XKB_KEY_Georgian_fi, GEORGIAN LETTER FI */ \
   OP(L'ჷ', RALT(Key_J)) \
   OP(L'ჸ', RALT(Key_Y)) \
   OP(L'ჹ', RALT(Key_G)) \
   OP(L'ჺ', LSHIFT(Key_Q)) \
   OP(L'჻', RALT(Key_Slash)) \
   OP(L'ჼ', RALT(Key_N)) \
   OP(L'–', RALT(Key_Equals)) \
   OP(L'—', RALT(Key_Minus)) \
   OP(L'“', RALT(Key_3)) \
   OP(L'„', Key_1) \
   OP(L'€', RALT(Key_5)) /* U+20ac, XKB_KEY_EuroSign, EURO SIGN */ \
   OP(L'№', Key_2) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_0, LSHIFT(Key_0)) \
   OP(XKB_KEY_1, LSHIFT(Key_1)) \
   OP(XKB_KEY_2, LSHIFT(Key_2)) \
   OP(XKB_KEY_3, LSHIFT(Key_3)) \
   OP(XKB_KEY_4, LSHIFT(Key_4)) \
   OP(XKB_KEY_5, LSHIFT(Key_5)) \
   OP(XKB_KEY_6, LSHIFT(Key_6)) \
   OP(XKB_KEY_7, LSHIFT(Key_7)) \
   OP(XKB_KEY_8, LSHIFT(Key_8)) \
   OP(XKB_KEY_9, LSHIFT(Key_9)) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_B, LSHIFT(Key_B)) \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_D, LSHIFT(Key_D)) \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_E, LSHIFT(Key_E)) \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
   OP(XKB_KEY_EuroSign, RALT(Key_5)) \
   OP(XKB_KEY_F1, Key_F1) /* XKB_KEY_F1 */ \
   OP(XKB_KEY_F10, Key_F10) /* XKB_KEY_F10 */ \
   OP(XKB_KEY_F11, Key_F11) /* XKB_KEY_F11 */ \
   OP(XKB_KEY_F12, Key_F12) /* XKB_KEY_F12 */ \
   OP(XKB_KEY_F2, Key_F2) /* XKB_KEY_F2 */ \
   OP(XKB_KEY_F3, Key_F3) /* XKB_KEY_F3 */ \
   OP(XKB_KEY_F4, Key_F4) /* XKB_KEY_F4 */ \
   OP(XKB_KEY_F5, Key_F5) /* XKB_KEY_F5 */ \
   OP(XKB_KEY_F6, Key_F6) /* XKB_KEY_F6 */ \
   OP(XKB_KEY_F7, Key_F7) /* XKB_KEY_F7 */ \
   OP(XKB_KEY_F8, Key_F8) /* XKB_KEY_F8 */ \
   OP(XKB_KEY_F9, Key_F9) /* XKB_KEY_F9 */ \
   OP(XKB_KEY_Georgian_an, Key_Q) \
   OP(XKB_KEY_Georgian_ban, Key_B) \
   OP(XKB_KEY_Georgian_can, Key_C) \
   OP(XKB_KEY_Georgian_char, Key_Slash) \
   OP(XKB_KEY_Georgian_chin, Key_NonUsPound) \
   OP(XKB_KEY_Georgian_cil, Key_Z) \
   OP(XKB_KEY_Georgian_don, Key_D) \
   OP(XKB_KEY_Georgian_en, Key_E) \
   OP(XKB_KEY_Georgian_fi, RALT(Key_F)) \
   OP(XKB_KEY_Georgian_gan, Key_G) \
   OP(XKB_KEY_Georgian_ghan, Key_Period) \
   OP(XKB_KEY_Georgian_hae, Key_H) \
   OP(XKB_KEY_Georgian_har, RALT(Key_X)) \
   OP(XKB_KEY_Georgian_he, RALT(Key_E)) \
   OP(XKB_KEY_Georgian_hie, RALT(Key_I)) \
   OP(XKB_KEY_Georgian_hoe, RALT(Key_H)) \
   OP(XKB_KEY_Georgian_in, Key_I) \
   OP(XKB_KEY_Georgian_jhan, Key_J) \
   OP(XKB_KEY_Georgian_jil, Key_RightBracket) \
   OP(XKB_KEY_Georgian_kan, Key_K) \
   OP(XKB_KEY_Georgian_khar, Key_A) \
   OP(XKB_KEY_Georgian_las, Key_L) \
   OP(XKB_KEY_Georgian_man, Key_Semicolon) \
   OP(XKB_KEY_Georgian_nar, Key_N) \
   OP(XKB_KEY_Georgian_on, Key_O) \
   OP(XKB_KEY_Georgian_par, Key_P) \
   OP(XKB_KEY_Georgian_phar, Key_F) \
   OP(XKB_KEY_Georgian_qar, Key_Y) \
   OP(XKB_KEY_Georgian_rae, Key_R) \
   OP(XKB_KEY_Georgian_san, Key_S) \
   OP(XKB_KEY_Georgian_shin, Key_Comma) \
   OP(XKB_KEY_Georgian_tan, Key_LeftBracket) \
   OP(XKB_KEY_Georgian_tar, Key_T) \
   OP(XKB_KEY_Georgian_un, Key_U) \
   OP(XKB_KEY_Georgian_vin, Key_V) \
   OP(XKB_KEY_Georgian_we, RALT(Key_V)) \
   OP(XKB_KEY_Georgian_xan, Key_X) \
   OP(XKB_KEY_Georgian_zen, Key_W) \
   OP(XKB_KEY_Georgian_zhar, Key_Quote) \
   OP(XKB_KEY_Home, Key_Home) /* XKB_KEY_Home */ \
   OP(XKB_KEY_ISO_Left_Tab, LSHIFT(Key_Tab)) /* XKB_KEY_ISO_Left_Tab */ \
   OP(XKB_KEY_ISO_Level3_Shift, Key_RightAlt) /* XKB_KEY_ISO_Level3_Shift */ \
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
   OP(XKB_KEY_J, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_K, LSHIFT(Key_K)) \
   OP(XKB_KEY_KP_0, LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(XKB_KEY_KP_1, LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(XKB_KEY_KP_2, LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(XKB_KEY_KP_3, LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(XKB_KEY_KP_4, LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(XKB_KEY_KP_5, LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(XKB_KEY_KP_6, LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(XKB_KEY_KP_7, LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(XKB_KEY_KP_8, LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(XKB_KEY_KP_9, LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(XKB_KEY_KP_Add, Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(XKB_KEY_KP_Begin, Key_Keypad5) /* XKB_KEY_KP_Begin */ \
   OP(XKB_KEY_KP_Decimal, LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(XKB_KEY_KP_Delete, Key_KeypadDot) /* XKB_KEY_KP_Delete */ \
   OP(XKB_KEY_KP_Divide, Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(XKB_KEY_KP_Down, Key_Keypad2) /* XKB_KEY_KP_Down */ \
   OP(XKB_KEY_KP_End, Key_Keypad1) /* XKB_KEY_KP_End */ \
   OP(XKB_KEY_KP_Enter, Key_KeypadEnter) /* XKB_KEY_KP_Enter, Enter  */ \
   OP(XKB_KEY_KP_Home, Key_Keypad7) /* XKB_KEY_KP_Home */ \
   OP(XKB_KEY_KP_Insert, Key_Keypad0) /* XKB_KEY_KP_Insert */ \
   OP(XKB_KEY_KP_Left, Key_Keypad4) /* XKB_KEY_KP_Left */ \
   OP(XKB_KEY_KP_Multiply, Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(XKB_KEY_KP_Next, Key_Keypad3) /* XKB_KEY_KP_Next */ \
   OP(XKB_KEY_KP_Prior, Key_Keypad9) /* XKB_KEY_KP_Prior */ \
   OP(XKB_KEY_KP_Right, Key_Keypad6) /* XKB_KEY_KP_Right */ \
   OP(XKB_KEY_KP_Subtract, Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(XKB_KEY_KP_Up, Key_Keypad8) /* XKB_KEY_KP_Up */ \
   OP(XKB_KEY_L, LSHIFT(Key_L)) \
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_M, LSHIFT(Key_Semicolon)) \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_O, LSHIFT(Key_O)) \
   OP(XKB_KEY_P, LSHIFT(Key_P)) \
   OP(XKB_KEY_Pause, Key_Pause) /* XKB_KEY_Pause, Pause, hold  */ \
   OP(XKB_KEY_Print, Key_PrintScreen) /* XKB_KEY_Print */ \
   OP(XKB_KEY_Prior, Key_PageUp) /* XKB_KEY_Prior, Prior, previous  */ \
   OP(XKB_KEY_Q, LSHIFT(Key_A)) \
   OP(XKB_KEY_Return, Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(XKB_KEY_Right, Key_RightArrow) /* XKB_KEY_Right, Move right, right arrow  */ \
   OP(XKB_KEY_S, LSHIFT(Key_S)) \
   OP(XKB_KEY_Scroll_Lock, Key_ScrollLock) /* XKB_KEY_Scroll_Lock */ \
   OP(XKB_KEY_Shift_L, Key_LeftShift) /* XKB_KEY_Shift_L, Left shift  */ \
   OP(XKB_KEY_Shift_R, Key_RightShift) /* XKB_KEY_Shift_R, Right shift  */ \
   OP(XKB_KEY_Super_L, Key_LeftGui) /* XKB_KEY_Super_L, Left super  */ \
   OP(XKB_KEY_Super_R, Key_RightGui) /* XKB_KEY_Super_R, Right super  */ \
   OP(XKB_KEY_Sys_Req, LALT(Key_PrintScreen)) /* XKB_KEY_Sys_Req */ \
   OP(XKB_KEY_T, LSHIFT(Key_T)) \
   OP(XKB_KEY_Tab, Key_Tab) /* XKB_KEY_Tab */ \
   OP(XKB_KEY_U, LSHIFT(Key_U)) \
   OP(XKB_KEY_Up, Key_UpArrow) /* XKB_KEY_Up, Move up, up arrow  */ \
   OP(XKB_KEY_W, LSHIFT(Key_Z)) \
   OP(XKB_KEY_XF86ClearGrab, LCTRL(LALT(Key_KeypadMultiply))) /* XKB_KEY_XF86ClearGrab, kill application with grab  */ \
   OP(XKB_KEY_XF86Next_VMode, LCTRL(LALT(Key_KeypadAdd))) /* XKB_KEY_XF86Next_VMode, next video mode available   */ \
   OP(XKB_KEY_XF86Prev_VMode, LCTRL(LALT(Key_KeypadSubtract))) /* XKB_KEY_XF86Prev_VMode, prev. video mode available  */ \
   OP(XKB_KEY_XF86Switch_VT_1, LCTRL(LALT(Key_F1))) /* XKB_KEY_XF86Switch_VT_1 */ \
   OP(XKB_KEY_XF86Switch_VT_10, LCTRL(LALT(Key_F10))) /* XKB_KEY_XF86Switch_VT_10 */ \
   OP(XKB_KEY_XF86Switch_VT_11, LCTRL(LALT(Key_F11))) /* XKB_KEY_XF86Switch_VT_11 */ \
   OP(XKB_KEY_XF86Switch_VT_12, LCTRL(LALT(Key_F12))) /* XKB_KEY_XF86Switch_VT_12 */ \
   OP(XKB_KEY_XF86Switch_VT_2, LCTRL(LALT(Key_F2))) /* XKB_KEY_XF86Switch_VT_2 */ \
   OP(XKB_KEY_XF86Switch_VT_3, LCTRL(LALT(Key_F3))) /* XKB_KEY_XF86Switch_VT_3 */ \
   OP(XKB_KEY_XF86Switch_VT_4, LCTRL(LALT(Key_F4))) /* XKB_KEY_XF86Switch_VT_4 */ \
   OP(XKB_KEY_XF86Switch_VT_5, LCTRL(LALT(Key_F5))) /* XKB_KEY_XF86Switch_VT_5 */ \
   OP(XKB_KEY_XF86Switch_VT_6, LCTRL(LALT(Key_F6))) /* XKB_KEY_XF86Switch_VT_6 */ \
   OP(XKB_KEY_XF86Switch_VT_7, LCTRL(LALT(Key_F7))) /* XKB_KEY_XF86Switch_VT_7 */ \
   OP(XKB_KEY_XF86Switch_VT_8, LCTRL(LALT(Key_F8))) /* XKB_KEY_XF86Switch_VT_8 */ \
   OP(XKB_KEY_XF86Switch_VT_9, LCTRL(LALT(Key_F9))) /* XKB_KEY_XF86Switch_VT_9 */ \
   OP(XKB_KEY_XF86Ungrab, LCTRL(LALT(Key_KeypadDivide))) /* XKB_KEY_XF86Ungrab, force ungrab                */ \
   OP(XKB_KEY_Z, LSHIFT(Key_W)) \
   OP(XKB_KEY_apostrophe, RALT(Key_1)) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_asciitilde, RALT(Key_NonUsPound)) \
   OP(XKB_KEY_bar, RALT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_brokenbar, RALT(LSHIFT(Key_NonUsBackslashAndPipe))) \
   OP(XKB_KEY_colon, Key_5) \
   OP(XKB_KEY_comma, Key_M) \
   OP(XKB_KEY_degree, Key_9) \
   OP(XKB_KEY_exclam, Key_Backtick) \
   OP(XKB_KEY_greater, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_guillemotleft, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_guillemotright, RALT(Key_Period)) \
   OP(XKB_KEY_less, Key_Equals) \
   OP(XKB_KEY_minus, Key_Minus) \
   OP(XKB_KEY_parenleft, Key_4) \
   OP(XKB_KEY_parenright, Key_0) \
   OP(XKB_KEY_percent, Key_3) \
   OP(XKB_KEY_question, Key_7) \
   OP(XKB_KEY_section, RALT(Key_7)) \
   OP(XKB_KEY_semicolon, Key_6) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_underscore, LSHIFT(Key_Minus)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace fr {
namespace geo {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace geo
} // namespace fr
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE
