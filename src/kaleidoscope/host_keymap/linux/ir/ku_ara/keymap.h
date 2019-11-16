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

// layout: ir
// variant: ku_ara

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('"', LSHIFT(Key_Quote)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP('#', LSHIFT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP('$', LSHIFT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP('%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('&', LSHIFT(Key_7)) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP('\'', Key_Quote) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('(', LSHIFT(Key_0)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', RALT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', Key_Period) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_Slash) /* U+002f, XKB_KEY_slash, SOLIDUS */ \
   OP('0', Key_0) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP('1', Key_1) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP('2', Key_2) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP('3', Key_3) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP('4', Key_4) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP('5', Key_5) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP('6', Key_6) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP('7', Key_7) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP('8', Key_8) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP('9', Key_9) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(':', LSHIFT(Key_Semicolon)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP('>', LSHIFT(Key_Comma)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('?', RALT(Key_Slash)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('@', LSHIFT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP('A', RALT(LSHIFT(Key_A))) /* U+0041, XKB_KEY_A, LATIN CAPITAL LETTER A */ \
   OP('B', RALT(LSHIFT(Key_B))) /* U+0042, XKB_KEY_B, LATIN CAPITAL LETTER B */ \
   OP('C', RALT(LSHIFT(Key_C))) /* U+0043, XKB_KEY_C, LATIN CAPITAL LETTER C */ \
   OP('D', RALT(LSHIFT(Key_D))) /* U+0044, XKB_KEY_D, LATIN CAPITAL LETTER D */ \
   OP('E', RALT(LSHIFT(Key_E))) /* U+0045, XKB_KEY_E, LATIN CAPITAL LETTER E */ \
   OP('F', RALT(LSHIFT(Key_F))) /* U+0046, XKB_KEY_F, LATIN CAPITAL LETTER F */ \
   OP('G', RALT(LSHIFT(Key_G))) /* U+0047, XKB_KEY_G, LATIN CAPITAL LETTER G */ \
   OP('H', RALT(LSHIFT(Key_H))) /* U+0048, XKB_KEY_H, LATIN CAPITAL LETTER H */ \
   OP('I', RALT(LSHIFT(Key_I))) /* U+0049, XKB_KEY_I, LATIN CAPITAL LETTER I */ \
   OP('J', RALT(LSHIFT(Key_J))) /* U+004a, XKB_KEY_J, LATIN CAPITAL LETTER J */ \
   OP('K', RALT(LSHIFT(Key_K))) /* U+004b, XKB_KEY_K, LATIN CAPITAL LETTER K */ \
   OP('L', RALT(LSHIFT(Key_L))) /* U+004c, XKB_KEY_L, LATIN CAPITAL LETTER L */ \
   OP('M', RALT(LSHIFT(Key_M))) /* U+004d, XKB_KEY_M, LATIN CAPITAL LETTER M */ \
   OP('N', RALT(LSHIFT(Key_N))) /* U+004e, XKB_KEY_N, LATIN CAPITAL LETTER N */ \
   OP('O', RALT(LSHIFT(Key_O))) /* U+004f, XKB_KEY_O, LATIN CAPITAL LETTER O */ \
   OP('P', RALT(LSHIFT(Key_P))) /* U+0050, XKB_KEY_P, LATIN CAPITAL LETTER P */ \
   OP('Q', RALT(LSHIFT(Key_Q))) /* U+0051, XKB_KEY_Q, LATIN CAPITAL LETTER Q */ \
   OP('R', RALT(LSHIFT(Key_R))) /* U+0052, XKB_KEY_R, LATIN CAPITAL LETTER R */ \
   OP('S', RALT(LSHIFT(Key_S))) /* U+0053, XKB_KEY_S, LATIN CAPITAL LETTER S */ \
   OP('T', RALT(LSHIFT(Key_T))) /* U+0054, XKB_KEY_T, LATIN CAPITAL LETTER T */ \
   OP('U', RALT(LSHIFT(Key_U))) /* U+0055, XKB_KEY_U, LATIN CAPITAL LETTER U */ \
   OP('V', RALT(LSHIFT(Key_V))) /* U+0056, XKB_KEY_V, LATIN CAPITAL LETTER V */ \
   OP('W', RALT(LSHIFT(Key_W))) /* U+0057, XKB_KEY_W, LATIN CAPITAL LETTER W */ \
   OP('X', LSHIFT(Key_Q)) /* U+0058, XKB_KEY_X, LATIN CAPITAL LETTER X */ \
   OP('Y', RALT(LSHIFT(Key_Y))) /* U+0059, XKB_KEY_Y, LATIN CAPITAL LETTER Y */ \
   OP('Z', RALT(LSHIFT(Key_Z))) /* U+005a, XKB_KEY_Z, LATIN CAPITAL LETTER Z */ \
   OP('[', Key_RightBracket) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP('\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(']', Key_LeftBracket) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP('^', LSHIFT(Key_6)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP('_', RALT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP('`', RALT(LSHIFT(Key_1))) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP('a', RALT(Key_A)) /* U+0061, XKB_KEY_a, LATIN SMALL LETTER A */ \
   OP('b', RALT(Key_B)) /* U+0062, XKB_KEY_b, LATIN SMALL LETTER B */ \
   OP('c', RALT(Key_C)) /* U+0063, XKB_KEY_c, LATIN SMALL LETTER C */ \
   OP('d', RALT(Key_D)) /* U+0064, XKB_KEY_d, LATIN SMALL LETTER D */ \
   OP('e', RALT(Key_E)) /* U+0065, XKB_KEY_e, LATIN SMALL LETTER E */ \
   OP('f', RALT(Key_F)) /* U+0066, XKB_KEY_f, LATIN SMALL LETTER F */ \
   OP('g', RALT(Key_G)) /* U+0067, XKB_KEY_g, LATIN SMALL LETTER G */ \
   OP('h', RALT(Key_H)) /* U+0068, XKB_KEY_h, LATIN SMALL LETTER H */ \
   OP('i', RALT(Key_I)) /* U+0069, XKB_KEY_i, LATIN SMALL LETTER I */ \
   OP('j', RALT(Key_J)) /* U+006a, XKB_KEY_j, LATIN SMALL LETTER J */ \
   OP('k', RALT(Key_K)) /* U+006b, XKB_KEY_k, LATIN SMALL LETTER K */ \
   OP('l', RALT(Key_L)) /* U+006c, XKB_KEY_l, LATIN SMALL LETTER L */ \
   OP('m', RALT(Key_M)) /* U+006d, XKB_KEY_m, LATIN SMALL LETTER M */ \
   OP('n', RALT(Key_N)) /* U+006e, XKB_KEY_n, LATIN SMALL LETTER N */ \
   OP('o', RALT(Key_O)) /* U+006f, XKB_KEY_o, LATIN SMALL LETTER O */ \
   OP('p', RALT(Key_P)) /* U+0070, XKB_KEY_p, LATIN SMALL LETTER P */ \
   OP('q', RALT(Key_Q)) /* U+0071, XKB_KEY_q, LATIN SMALL LETTER Q */ \
   OP('r', RALT(Key_R)) /* U+0072, XKB_KEY_r, LATIN SMALL LETTER R */ \
   OP('s', RALT(Key_S)) /* U+0073, XKB_KEY_s, LATIN SMALL LETTER S */ \
   OP('t', RALT(Key_T)) /* U+0074, XKB_KEY_t, LATIN SMALL LETTER T */ \
   OP('u', RALT(Key_U)) /* U+0075, XKB_KEY_u, LATIN SMALL LETTER U */ \
   OP('v', RALT(Key_V)) /* U+0076, XKB_KEY_v, LATIN SMALL LETTER V */ \
   OP('w', RALT(Key_W)) /* U+0077, XKB_KEY_w, LATIN SMALL LETTER W */ \
   OP('x', RALT(Key_X)) /* U+0078, XKB_KEY_x, LATIN SMALL LETTER X */ \
   OP('y', RALT(Key_Y)) /* U+0079, XKB_KEY_y, LATIN SMALL LETTER Y */ \
   OP('z', RALT(Key_Z)) /* U+007a, XKB_KEY_z, LATIN SMALL LETTER Z */ \
   OP('{', LSHIFT(Key_RightBracket)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP('|', LSHIFT(Key_NonUsPound)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('}', LSHIFT(Key_LeftBracket)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP('~', RALT(Key_Backtick)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', LSHIFT(Key_1)) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'"', LSHIFT(Key_Quote)) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP(L'#', LSHIFT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP(L'$', LSHIFT(Key_4)) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP(L'%', LSHIFT(Key_5)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'&', LSHIFT(Key_7)) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP(L'\'', Key_Quote) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'(', LSHIFT(Key_0)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', RALT(Key_Comma)) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_Minus) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', Key_Period) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_Slash) /* U+002f, XKB_KEY_slash, SOLIDUS */ \
   OP(L'0', Key_0) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP(L'1', Key_1) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP(L'2', Key_2) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP(L'3', Key_3) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP(L'4', Key_4) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP(L'5', Key_5) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP(L'6', Key_6) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP(L'7', Key_7) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP(L'8', Key_8) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP(L'9', Key_9) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(L':', LSHIFT(Key_Semicolon)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP(L'>', LSHIFT(Key_Comma)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'?', RALT(Key_Slash)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'@', LSHIFT(Key_2)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP(L'A', RALT(LSHIFT(Key_A))) /* U+0041, XKB_KEY_A, LATIN CAPITAL LETTER A */ \
   OP(L'B', RALT(LSHIFT(Key_B))) /* U+0042, XKB_KEY_B, LATIN CAPITAL LETTER B */ \
   OP(L'C', RALT(LSHIFT(Key_C))) /* U+0043, XKB_KEY_C, LATIN CAPITAL LETTER C */ \
   OP(L'D', RALT(LSHIFT(Key_D))) /* U+0044, XKB_KEY_D, LATIN CAPITAL LETTER D */ \
   OP(L'E', RALT(LSHIFT(Key_E))) /* U+0045, XKB_KEY_E, LATIN CAPITAL LETTER E */ \
   OP(L'F', RALT(LSHIFT(Key_F))) /* U+0046, XKB_KEY_F, LATIN CAPITAL LETTER F */ \
   OP(L'G', RALT(LSHIFT(Key_G))) /* U+0047, XKB_KEY_G, LATIN CAPITAL LETTER G */ \
   OP(L'H', RALT(LSHIFT(Key_H))) /* U+0048, XKB_KEY_H, LATIN CAPITAL LETTER H */ \
   OP(L'I', RALT(LSHIFT(Key_I))) /* U+0049, XKB_KEY_I, LATIN CAPITAL LETTER I */ \
   OP(L'J', RALT(LSHIFT(Key_J))) /* U+004a, XKB_KEY_J, LATIN CAPITAL LETTER J */ \
   OP(L'K', RALT(LSHIFT(Key_K))) /* U+004b, XKB_KEY_K, LATIN CAPITAL LETTER K */ \
   OP(L'L', RALT(LSHIFT(Key_L))) /* U+004c, XKB_KEY_L, LATIN CAPITAL LETTER L */ \
   OP(L'M', RALT(LSHIFT(Key_M))) /* U+004d, XKB_KEY_M, LATIN CAPITAL LETTER M */ \
   OP(L'N', RALT(LSHIFT(Key_N))) /* U+004e, XKB_KEY_N, LATIN CAPITAL LETTER N */ \
   OP(L'O', RALT(LSHIFT(Key_O))) /* U+004f, XKB_KEY_O, LATIN CAPITAL LETTER O */ \
   OP(L'P', RALT(LSHIFT(Key_P))) /* U+0050, XKB_KEY_P, LATIN CAPITAL LETTER P */ \
   OP(L'Q', RALT(LSHIFT(Key_Q))) /* U+0051, XKB_KEY_Q, LATIN CAPITAL LETTER Q */ \
   OP(L'R', RALT(LSHIFT(Key_R))) /* U+0052, XKB_KEY_R, LATIN CAPITAL LETTER R */ \
   OP(L'S', RALT(LSHIFT(Key_S))) /* U+0053, XKB_KEY_S, LATIN CAPITAL LETTER S */ \
   OP(L'T', RALT(LSHIFT(Key_T))) /* U+0054, XKB_KEY_T, LATIN CAPITAL LETTER T */ \
   OP(L'U', RALT(LSHIFT(Key_U))) /* U+0055, XKB_KEY_U, LATIN CAPITAL LETTER U */ \
   OP(L'V', RALT(LSHIFT(Key_V))) /* U+0056, XKB_KEY_V, LATIN CAPITAL LETTER V */ \
   OP(L'W', RALT(LSHIFT(Key_W))) /* U+0057, XKB_KEY_W, LATIN CAPITAL LETTER W */ \
   OP(L'X', LSHIFT(Key_Q)) /* U+0058, XKB_KEY_X, LATIN CAPITAL LETTER X */ \
   OP(L'Y', RALT(LSHIFT(Key_Y))) /* U+0059, XKB_KEY_Y, LATIN CAPITAL LETTER Y */ \
   OP(L'Z', RALT(LSHIFT(Key_Z))) /* U+005a, XKB_KEY_Z, LATIN CAPITAL LETTER Z */ \
   OP(L'[', Key_RightBracket) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP(L'\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L']', Key_LeftBracket) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP(L'^', LSHIFT(Key_6)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP(L'_', RALT(Key_Minus)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP(L'`', RALT(LSHIFT(Key_1))) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP(L'a', RALT(Key_A)) /* U+0061, XKB_KEY_a, LATIN SMALL LETTER A */ \
   OP(L'b', RALT(Key_B)) /* U+0062, XKB_KEY_b, LATIN SMALL LETTER B */ \
   OP(L'c', RALT(Key_C)) /* U+0063, XKB_KEY_c, LATIN SMALL LETTER C */ \
   OP(L'd', RALT(Key_D)) /* U+0064, XKB_KEY_d, LATIN SMALL LETTER D */ \
   OP(L'e', RALT(Key_E)) /* U+0065, XKB_KEY_e, LATIN SMALL LETTER E */ \
   OP(L'f', RALT(Key_F)) /* U+0066, XKB_KEY_f, LATIN SMALL LETTER F */ \
   OP(L'g', RALT(Key_G)) /* U+0067, XKB_KEY_g, LATIN SMALL LETTER G */ \
   OP(L'h', RALT(Key_H)) /* U+0068, XKB_KEY_h, LATIN SMALL LETTER H */ \
   OP(L'i', RALT(Key_I)) /* U+0069, XKB_KEY_i, LATIN SMALL LETTER I */ \
   OP(L'j', RALT(Key_J)) /* U+006a, XKB_KEY_j, LATIN SMALL LETTER J */ \
   OP(L'k', RALT(Key_K)) /* U+006b, XKB_KEY_k, LATIN SMALL LETTER K */ \
   OP(L'l', RALT(Key_L)) /* U+006c, XKB_KEY_l, LATIN SMALL LETTER L */ \
   OP(L'm', RALT(Key_M)) /* U+006d, XKB_KEY_m, LATIN SMALL LETTER M */ \
   OP(L'n', RALT(Key_N)) /* U+006e, XKB_KEY_n, LATIN SMALL LETTER N */ \
   OP(L'o', RALT(Key_O)) /* U+006f, XKB_KEY_o, LATIN SMALL LETTER O */ \
   OP(L'p', RALT(Key_P)) /* U+0070, XKB_KEY_p, LATIN SMALL LETTER P */ \
   OP(L'q', RALT(Key_Q)) /* U+0071, XKB_KEY_q, LATIN SMALL LETTER Q */ \
   OP(L'r', RALT(Key_R)) /* U+0072, XKB_KEY_r, LATIN SMALL LETTER R */ \
   OP(L's', RALT(Key_S)) /* U+0073, XKB_KEY_s, LATIN SMALL LETTER S */ \
   OP(L't', RALT(Key_T)) /* U+0074, XKB_KEY_t, LATIN SMALL LETTER T */ \
   OP(L'u', RALT(Key_U)) /* U+0075, XKB_KEY_u, LATIN SMALL LETTER U */ \
   OP(L'v', RALT(Key_V)) /* U+0076, XKB_KEY_v, LATIN SMALL LETTER V */ \
   OP(L'w', RALT(Key_W)) /* U+0077, XKB_KEY_w, LATIN SMALL LETTER W */ \
   OP(L'x', RALT(Key_X)) /* U+0078, XKB_KEY_x, LATIN SMALL LETTER X */ \
   OP(L'y', RALT(Key_Y)) /* U+0079, XKB_KEY_y, LATIN SMALL LETTER Y */ \
   OP(L'z', RALT(Key_Z)) /* U+007a, XKB_KEY_z, LATIN SMALL LETTER Z */ \
   OP(L'{', LSHIFT(Key_RightBracket)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP(L'|', LSHIFT(Key_NonUsPound)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'}', LSHIFT(Key_LeftBracket)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP(L'~', RALT(Key_Backtick)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L' ', RALT(Key_Spacebar)) /* U+00a0, XKB_KEY_nobreakspace, NO-BREAK SPACE */ \
   OP(L'¦', RALT(LSHIFT(Key_NonUsBackslashAndPipe))) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'Ç', RALT(LSHIFT(Key_NonUsPound))) /* U+00c7, XKB_KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */ \
   OP(L'Ê', RALT(LSHIFT(Key_Semicolon))) /* U+00ca, XKB_KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */ \
   OP(L'Î', RALT(LSHIFT(Key_Quote))) /* U+00ce, XKB_KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */ \
   OP(L'×', RALT(LSHIFT(Key_6))) /* U+00d7, XKB_KEY_multiply, MULTIPLICATION SIGN */ \
   OP(L'Û', RALT(LSHIFT(Key_LeftBracket))) /* U+00db, XKB_KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */ \
   OP(L'ç', RALT(Key_NonUsPound)) /* U+00e7, XKB_KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */ \
   OP(L'ê', RALT(Key_Semicolon)) /* U+00ea, XKB_KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */ \
   OP(L'î', RALT(Key_Quote)) /* U+00ee, XKB_KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */ \
   OP(L'÷', LSHIFT(Key_Backtick)) /* U+00f7, XKB_KEY_division, DIVISION SIGN */ \
   OP(L'û', RALT(Key_LeftBracket)) /* U+00fb, XKB_KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */ \
   OP(L'Ş', RALT(LSHIFT(Key_RightBracket))) /* U+015e, XKB_KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */ \
   OP(L'ş', RALT(Key_RightBracket)) /* U+015f, XKB_KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */ \
   OP(L'،', Key_Comma) /* U+060c, XKB_KEY_Arabic_comma, ARABIC COMMA */ \
   OP(L'؛', Key_Semicolon) /* U+061b, XKB_KEY_Arabic_semicolon, ARABIC SEMICOLON */ \
   OP(L'؟', LSHIFT(Key_Slash)) /* U+061f, XKB_KEY_Arabic_question_mark, ARABIC QUESTION MARK */ \
   OP(L'ء', LSHIFT(Key_U)) /* U+0621, XKB_KEY_Arabic_hamza, ARABIC LETTER HAMZA */ \
   OP(L'آ', LSHIFT(Key_A)) /* U+0622, XKB_KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */ \
   OP(L'أ', LSHIFT(Key_J)) /* U+0623, XKB_KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */ \
   OP(L'ؤ', LSHIFT(Key_O)) /* U+0624, XKB_KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */ \
   OP(L'إ', LSHIFT(Key_F)) /* U+0625, XKB_KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */ \
   OP(L'ئ', Key_U) /* U+0626, XKB_KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */ \
   OP(L'ا', Key_A) /* U+0627, XKB_KEY_Arabic_alef, ARABIC LETTER ALEF */ \
   OP(L'ب', Key_B) /* U+0628, XKB_KEY_Arabic_beh, ARABIC LETTER BEH */ \
   OP(L'ة', LSHIFT(Key_N)) /* U+0629, XKB_KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */ \
   OP(L'ت', Key_T) /* U+062a, XKB_KEY_Arabic_teh, ARABIC LETTER TEH */ \
   OP(L'ث', LSHIFT(Key_P)) /* U+062b, XKB_KEY_Arabic_theh, ARABIC LETTER THEH */ \
   OP(L'ج', Key_C) /* U+062c, XKB_KEY_Arabic_jeem, ARABIC LETTER JEEM */ \
   OP(L'ح', Key_I) /* U+062d, XKB_KEY_Arabic_hah, ARABIC LETTER HAH */ \
   OP(L'خ', Key_X) /* U+062e, XKB_KEY_Arabic_khah, ARABIC LETTER KHAH */ \
   OP(L'د', Key_D) /* U+062f, XKB_KEY_Arabic_dal, ARABIC LETTER DAL */ \
   OP(L'ذ', LSHIFT(Key_D)) /* U+0630, XKB_KEY_Arabic_thal, ARABIC LETTER THAL */ \
   OP(L'ر', Key_R) /* U+0631, XKB_KEY_Arabic_ra, ARABIC LETTER REH */ \
   OP(L'ز', Key_Z) /* U+0632, XKB_KEY_Arabic_zain, ARABIC LETTER ZAIN */ \
   OP(L'س', Key_S) /* U+0633, XKB_KEY_Arabic_seen, ARABIC LETTER SEEN */ \
   OP(L'ش', LSHIFT(Key_S)) /* U+0634, XKB_KEY_Arabic_sheen, ARABIC LETTER SHEEN */ \
   OP(L'ص', LSHIFT(Key_X)) /* U+0635, XKB_KEY_Arabic_sad, ARABIC LETTER SAD */ \
   OP(L'ض', LSHIFT(Key_Z)) /* U+0636, XKB_KEY_Arabic_dad, ARABIC LETTER DAD */ \
   OP(L'ط', LSHIFT(Key_T)) /* U+0637, XKB_KEY_Arabic_tah, ARABIC LETTER TAH */ \
   OP(L'ظ', LSHIFT(Key_V)) /* U+0638, XKB_KEY_Arabic_zah, ARABIC LETTER ZAH */ \
   OP(L'ع', LSHIFT(Key_I)) /* U+0639, XKB_KEY_Arabic_ain, ARABIC LETTER AIN */ \
   OP(L'غ', LSHIFT(Key_G)) /* U+063a, XKB_KEY_Arabic_ghain, ARABIC LETTER GHAIN */ \
   OP(L'ـ', LSHIFT(Key_Minus)) /* U+0640, XKB_KEY_Arabic_tatweel, ARABIC TATWEEL */ \
   OP(L'ف', Key_F) /* U+0641, XKB_KEY_Arabic_feh, ARABIC LETTER FEH */ \
   OP(L'ق', Key_Q) /* U+0642, XKB_KEY_Arabic_qaf, ARABIC LETTER QAF */ \
   OP(L'ك', LSHIFT(Key_K)) /* U+0643, XKB_KEY_Arabic_kaf, ARABIC LETTER KAF */ \
   OP(L'ل', Key_L) /* U+0644, XKB_KEY_Arabic_lam, ARABIC LETTER LAM */ \
   OP(L'م', Key_M) /* U+0645, XKB_KEY_Arabic_meem, ARABIC LETTER MEEM */ \
   OP(L'ن', Key_N) /* U+0646, XKB_KEY_Arabic_noon, ARABIC LETTER NOON */ \
   OP(L'ه', Key_H) /* U+0647, XKB_KEY_Arabic_ha, ARABIC LETTER HEH */ \
   OP(L'و', Key_W) /* U+0648, XKB_KEY_Arabic_waw, ARABIC LETTER WAW */ \
   OP(L'ى', LSHIFT(Key_B)) \
   OP(L'٪', RALT(LSHIFT(Key_5))) /* U+066a, XKB_KEY_Arabic_percent, ARABIC PERCENT SIGN */ \
   OP(L'٫', RALT(LSHIFT(Key_3))) \
   OP(L'پ', Key_P) /* U+067e, XKB_KEY_Arabic_peh, ARABIC LETTER PEH */ \
   OP(L'چ', LSHIFT(Key_C)) /* U+0686, XKB_KEY_Arabic_tcheh, ARABIC LETTER TCHEH */ \
   OP(L'ڕ', LSHIFT(Key_R)) \
   OP(L'ژ', Key_J) /* U+0698, XKB_KEY_Arabic_jeh, ARABIC LETTER JEH */ \
   OP(L'ڤ', Key_V) /* U+06a4, XKB_KEY_Arabic_veh, ARABIC LETTER VEH */ \
   OP(L'ک', Key_K) /* U+06a9, XKB_KEY_Arabic_keheh, ARABIC LETTER KEHEH */ \
   OP(L'گ', Key_G) /* U+06af, XKB_KEY_Arabic_gaf, ARABIC LETTER GAF */ \
   OP(L'ڵ', LSHIFT(Key_L)) \
   OP(L'ۆ', Key_O) \
   OP(L'ی', Key_Y) /* U+06cc, XKB_KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */ \
   OP(L'ێ', LSHIFT(Key_Y)) \
   OP(L'ە', Key_E) \
   OP(L'۰', RALT(Key_0)) /* U+06f0, XKB_KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */ \
   OP(L'۱', RALT(Key_1)) /* U+06f1, XKB_KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */ \
   OP(L'۲', RALT(Key_2)) /* U+06f2, XKB_KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */ \
   OP(L'۳', RALT(Key_3)) /* U+06f3, XKB_KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */ \
   OP(L'۴', RALT(Key_4)) /* U+06f4, XKB_KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */ \
   OP(L'۵', RALT(Key_5)) /* U+06f5, XKB_KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */ \
   OP(L'۶', RALT(Key_6)) /* U+06f6, XKB_KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */ \
   OP(L'۷', RALT(Key_7)) /* U+06f7, XKB_KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */ \
   OP(L'۸', RALT(Key_8)) /* U+06f8, XKB_KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */ \
   OP(L'۹', RALT(Key_9)) /* U+06f9, XKB_KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */ \
   OP(L'‌', LSHIFT(Key_H)) \
   OP(L'‍', Key_Backtick) \
   OP(L'‎', RALT(LSHIFT(Key_9))) \
   OP(L'‏', RALT(LSHIFT(Key_0))) \
   OP(L'•', RALT(LSHIFT(Key_8))) /* U+2022, XKB_KEY_enfilledcircbullet, BULLET */ \
   OP(L'−', RALT(Key_Equals)) \
   OP(L'﷼', RALT(LSHIFT(Key_4))) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_0, Key_0) \
   OP(XKB_KEY_1, Key_1) \
   OP(XKB_KEY_2, Key_2) \
   OP(XKB_KEY_3, Key_3) \
   OP(XKB_KEY_4, Key_4) \
   OP(XKB_KEY_5, Key_5) \
   OP(XKB_KEY_6, Key_6) \
   OP(XKB_KEY_7, Key_7) \
   OP(XKB_KEY_8, Key_8) \
   OP(XKB_KEY_9, Key_9) \
   OP(XKB_KEY_A, RALT(LSHIFT(Key_A))) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Arabic_ain, LSHIFT(Key_I)) \
   OP(XKB_KEY_Arabic_alef, Key_A) \
   OP(XKB_KEY_Arabic_beh, Key_B) \
   OP(XKB_KEY_Arabic_comma, Key_Comma) \
   OP(XKB_KEY_Arabic_dad, LSHIFT(Key_Z)) \
   OP(XKB_KEY_Arabic_dal, Key_D) \
   OP(XKB_KEY_Arabic_feh, Key_F) \
   OP(XKB_KEY_Arabic_gaf, Key_G) \
   OP(XKB_KEY_Arabic_ghain, LSHIFT(Key_G)) \
   OP(XKB_KEY_Arabic_ha, Key_H) /* XKB_KEY_Arabic_heh, deprecated  */ \
   OP(XKB_KEY_Arabic_hah, Key_I) \
   OP(XKB_KEY_Arabic_hamza, LSHIFT(Key_U)) \
   OP(XKB_KEY_Arabic_hamzaonalef, LSHIFT(Key_J)) \
   OP(XKB_KEY_Arabic_hamzaonwaw, LSHIFT(Key_O)) \
   OP(XKB_KEY_Arabic_hamzaonyeh, Key_U) \
   OP(XKB_KEY_Arabic_hamzaunderalef, LSHIFT(Key_F)) \
   OP(XKB_KEY_Arabic_jeem, Key_C) \
   OP(XKB_KEY_Arabic_jeh, Key_J) \
   OP(XKB_KEY_Arabic_kaf, LSHIFT(Key_K)) \
   OP(XKB_KEY_Arabic_keheh, Key_K) \
   OP(XKB_KEY_Arabic_khah, Key_X) \
   OP(XKB_KEY_Arabic_lam, Key_L) \
   OP(XKB_KEY_Arabic_maddaonalef, LSHIFT(Key_A)) \
   OP(XKB_KEY_Arabic_meem, Key_M) \
   OP(XKB_KEY_Arabic_noon, Key_N) \
   OP(XKB_KEY_Arabic_peh, Key_P) \
   OP(XKB_KEY_Arabic_percent, RALT(LSHIFT(Key_5))) \
   OP(XKB_KEY_Arabic_qaf, Key_Q) \
   OP(XKB_KEY_Arabic_question_mark, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_Arabic_ra, Key_R) \
   OP(XKB_KEY_Arabic_sad, LSHIFT(Key_X)) \
   OP(XKB_KEY_Arabic_seen, Key_S) \
   OP(XKB_KEY_Arabic_semicolon, Key_Semicolon) \
   OP(XKB_KEY_Arabic_sheen, LSHIFT(Key_S)) \
   OP(XKB_KEY_Arabic_tah, LSHIFT(Key_T)) \
   OP(XKB_KEY_Arabic_tatweel, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_Arabic_tcheh, LSHIFT(Key_C)) \
   OP(XKB_KEY_Arabic_teh, Key_T) \
   OP(XKB_KEY_Arabic_tehmarbuta, LSHIFT(Key_N)) \
   OP(XKB_KEY_Arabic_thal, LSHIFT(Key_D)) \
   OP(XKB_KEY_Arabic_theh, LSHIFT(Key_P)) \
   OP(XKB_KEY_Arabic_veh, Key_V) \
   OP(XKB_KEY_Arabic_waw, Key_W) \
   OP(XKB_KEY_Arabic_zah, LSHIFT(Key_V)) \
   OP(XKB_KEY_Arabic_zain, Key_Z) \
   OP(XKB_KEY_B, RALT(LSHIFT(Key_B))) \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_C, RALT(LSHIFT(Key_C))) \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Ccedilla, RALT(LSHIFT(Key_NonUsPound))) \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_D, RALT(LSHIFT(Key_D))) \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_E, RALT(LSHIFT(Key_E))) \
   OP(XKB_KEY_Ecircumflex, RALT(LSHIFT(Key_Semicolon))) \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
   OP(XKB_KEY_F, RALT(LSHIFT(Key_F))) \
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
   OP(XKB_KEY_Farsi_0, RALT(Key_0)) \
   OP(XKB_KEY_Farsi_1, RALT(Key_1)) \
   OP(XKB_KEY_Farsi_2, RALT(Key_2)) \
   OP(XKB_KEY_Farsi_3, RALT(Key_3)) \
   OP(XKB_KEY_Farsi_4, RALT(Key_4)) \
   OP(XKB_KEY_Farsi_5, RALT(Key_5)) \
   OP(XKB_KEY_Farsi_6, RALT(Key_6)) \
   OP(XKB_KEY_Farsi_7, RALT(Key_7)) \
   OP(XKB_KEY_Farsi_8, RALT(Key_8)) \
   OP(XKB_KEY_Farsi_9, RALT(Key_9)) \
   OP(XKB_KEY_Farsi_yeh, Key_Y) \
   OP(XKB_KEY_G, RALT(LSHIFT(Key_G))) \
   OP(XKB_KEY_H, RALT(LSHIFT(Key_H))) \
   OP(XKB_KEY_Home, Key_Home) /* XKB_KEY_Home */ \
   OP(XKB_KEY_I, RALT(LSHIFT(Key_I))) \
   OP(XKB_KEY_ISO_Left_Tab, LSHIFT(Key_Tab)) /* XKB_KEY_ISO_Left_Tab */ \
   OP(XKB_KEY_ISO_Level3_Shift, Key_RightAlt) /* XKB_KEY_ISO_Level3_Shift */ \
   OP(XKB_KEY_Icircumflex, RALT(LSHIFT(Key_Quote))) \
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
   OP(XKB_KEY_J, RALT(LSHIFT(Key_J))) \
   OP(XKB_KEY_K, RALT(LSHIFT(Key_K))) \
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
   OP(XKB_KEY_L, RALT(LSHIFT(Key_L))) \
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_M, RALT(LSHIFT(Key_M))) \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_N, RALT(LSHIFT(Key_N))) \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_O, RALT(LSHIFT(Key_O))) \
   OP(XKB_KEY_P, RALT(LSHIFT(Key_P))) \
   OP(XKB_KEY_Pause, Key_Pause) /* XKB_KEY_Pause, Pause, hold  */ \
   OP(XKB_KEY_Print, Key_PrintScreen) /* XKB_KEY_Print */ \
   OP(XKB_KEY_Prior, Key_PageUp) /* XKB_KEY_Prior, Prior, previous  */ \
   OP(XKB_KEY_Q, RALT(LSHIFT(Key_Q))) \
   OP(XKB_KEY_R, RALT(LSHIFT(Key_R))) \
   OP(XKB_KEY_Return, Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(XKB_KEY_Right, Key_RightArrow) /* XKB_KEY_Right, Move right, right arrow  */ \
   OP(XKB_KEY_S, RALT(LSHIFT(Key_S))) \
   OP(XKB_KEY_Scedilla, RALT(LSHIFT(Key_RightBracket))) \
   OP(XKB_KEY_Scroll_Lock, Key_ScrollLock) /* XKB_KEY_Scroll_Lock */ \
   OP(XKB_KEY_Shift_L, Key_LeftShift) /* XKB_KEY_Shift_L, Left shift  */ \
   OP(XKB_KEY_Shift_R, Key_RightShift) /* XKB_KEY_Shift_R, Right shift  */ \
   OP(XKB_KEY_Super_L, Key_LeftGui) /* XKB_KEY_Super_L, Left super  */ \
   OP(XKB_KEY_Super_R, Key_RightGui) /* XKB_KEY_Super_R, Right super  */ \
   OP(XKB_KEY_Sys_Req, LALT(Key_PrintScreen)) /* XKB_KEY_Sys_Req */ \
   OP(XKB_KEY_T, RALT(LSHIFT(Key_T))) \
   OP(XKB_KEY_Tab, Key_Tab) /* XKB_KEY_Tab */ \
   OP(XKB_KEY_U, RALT(LSHIFT(Key_U))) \
   OP(XKB_KEY_Ucircumflex, RALT(LSHIFT(Key_LeftBracket))) \
   OP(XKB_KEY_Up, Key_UpArrow) /* XKB_KEY_Up, Move up, up arrow  */ \
   OP(XKB_KEY_V, RALT(LSHIFT(Key_V))) \
   OP(XKB_KEY_W, RALT(LSHIFT(Key_W))) \
   OP(XKB_KEY_X, LSHIFT(Key_Q)) \
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
   OP(XKB_KEY_Y, RALT(LSHIFT(Key_Y))) \
   OP(XKB_KEY_Z, RALT(LSHIFT(Key_Z))) \
   OP(XKB_KEY_a, RALT(Key_A)) \
   OP(XKB_KEY_ampersand, LSHIFT(Key_7)) \
   OP(XKB_KEY_apostrophe, Key_Quote) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_asciicircum, LSHIFT(Key_6)) \
   OP(XKB_KEY_asciitilde, RALT(Key_Backtick)) \
   OP(XKB_KEY_asterisk, LSHIFT(Key_8)) \
   OP(XKB_KEY_at, LSHIFT(Key_2)) \
   OP(XKB_KEY_b, RALT(Key_B)) \
   OP(XKB_KEY_backslash, Key_NonUsPound) \
   OP(XKB_KEY_bar, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_braceleft, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_braceright, LSHIFT(Key_LeftBracket)) \
   OP(XKB_KEY_bracketleft, Key_RightBracket) \
   OP(XKB_KEY_bracketright, Key_LeftBracket) \
   OP(XKB_KEY_brokenbar, RALT(LSHIFT(Key_NonUsBackslashAndPipe))) \
   OP(XKB_KEY_c, RALT(Key_C)) \
   OP(XKB_KEY_ccedilla, RALT(Key_NonUsPound)) \
   OP(XKB_KEY_colon, LSHIFT(Key_Semicolon)) \
   OP(XKB_KEY_comma, RALT(Key_Comma)) \
   OP(XKB_KEY_d, RALT(Key_D)) \
   OP(XKB_KEY_division, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_dollar, LSHIFT(Key_4)) \
   OP(XKB_KEY_e, RALT(Key_E)) \
   OP(XKB_KEY_ecircumflex, RALT(Key_Semicolon)) \
   OP(XKB_KEY_enfilledcircbullet, RALT(LSHIFT(Key_8))) \
   OP(XKB_KEY_equal, Key_Equals) \
   OP(XKB_KEY_exclam, LSHIFT(Key_1)) \
   OP(XKB_KEY_f, RALT(Key_F)) \
   OP(XKB_KEY_g, RALT(Key_G)) \
   OP(XKB_KEY_grave, RALT(LSHIFT(Key_1))) /* XKB_KEY_quoteleft, deprecated  */ \
   OP(XKB_KEY_greater, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_h, RALT(Key_H)) \
   OP(XKB_KEY_i, RALT(Key_I)) \
   OP(XKB_KEY_icircumflex, RALT(Key_Quote)) \
   OP(XKB_KEY_j, RALT(Key_J)) \
   OP(XKB_KEY_k, RALT(Key_K)) \
   OP(XKB_KEY_l, RALT(Key_L)) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_m, RALT(Key_M)) \
   OP(XKB_KEY_minus, Key_Minus) \
   OP(XKB_KEY_multiply, RALT(LSHIFT(Key_6))) \
   OP(XKB_KEY_n, RALT(Key_N)) \
   OP(XKB_KEY_nobreakspace, RALT(Key_Spacebar)) \
   OP(XKB_KEY_numbersign, LSHIFT(Key_3)) \
   OP(XKB_KEY_o, RALT(Key_O)) \
   OP(XKB_KEY_p, RALT(Key_P)) \
   OP(XKB_KEY_parenleft, LSHIFT(Key_0)) \
   OP(XKB_KEY_parenright, LSHIFT(Key_9)) \
   OP(XKB_KEY_percent, LSHIFT(Key_5)) \
   OP(XKB_KEY_period, Key_Period) \
   OP(XKB_KEY_plus, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_q, RALT(Key_Q)) \
   OP(XKB_KEY_question, RALT(Key_Slash)) \
   OP(XKB_KEY_quotedbl, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_r, RALT(Key_R)) \
   OP(XKB_KEY_s, RALT(Key_S)) \
   OP(XKB_KEY_scedilla, RALT(Key_RightBracket)) \
   OP(XKB_KEY_slash, Key_Slash) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_t, RALT(Key_T)) \
   OP(XKB_KEY_u, RALT(Key_U)) \
   OP(XKB_KEY_ucircumflex, RALT(Key_LeftBracket)) \
   OP(XKB_KEY_underscore, RALT(Key_Minus)) \
   OP(XKB_KEY_v, RALT(Key_V)) \
   OP(XKB_KEY_w, RALT(Key_W)) \
   OP(XKB_KEY_x, RALT(Key_X)) \
   OP(XKB_KEY_y, RALT(Key_Y)) \
   OP(XKB_KEY_z, RALT(Key_Z)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace ir {
namespace ku_ara {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace ku_ara
} // namespace ir
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE
