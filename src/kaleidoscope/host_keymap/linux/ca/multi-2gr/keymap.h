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

// layout: ca
// variant: multi-2gr

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP('-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP('.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP('1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP('2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP('3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP('4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP('5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP('6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP('7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP('8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP('9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L'-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(L'.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(L'1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(L'2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(L'3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(L'4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(L'5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(L'6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(L'7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(L'8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(L'9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'\\', Key_NonUsPound) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'¡', LSHIFT(Key_1)) /* U+00a1, XKB_KEY_exclamdown, INVERTED EXCLAMATION MARK */ \
   OP(L'¢', Key_C) /* U+00a2, XKB_KEY_cent, CENT SIGN */ \
   OP(L'£', LSHIFT(Key_3)) /* U+00a3, XKB_KEY_sterling, POUND SIGN */ \
   OP(L'¤', LSHIFT(Key_4)) /* U+00a4, XKB_KEY_currency, CURRENCY SIGN */ \
   OP(L'¥', LSHIFT(Key_Y)) /* U+00a5, XKB_KEY_yen, YEN SIGN */ \
   OP(L'¦', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'§', LSHIFT(Key_S)) /* U+00a7, XKB_KEY_section, SECTION SIGN */ \
   OP(L'©', LSHIFT(Key_C)) /* U+00a9, XKB_KEY_copyright, COPYRIGHT SIGN */ \
   OP(L'ª', LSHIFT(Key_F)) /* U+00aa, XKB_KEY_ordfeminine, FEMININE ORDINAL INDICATOR */ \
   OP(L'­', LSHIFT(Key_Backtick)) /* U+00ad, XKB_KEY_hyphen, SOFT HYPHEN */ \
   OP(L'®', LSHIFT(Key_R)) /* U+00ae, XKB_KEY_registered, REGISTERED SIGN */ \
   OP(L'±', LSHIFT(Key_9)) /* U+00b1, XKB_KEY_plusminus, PLUS-MINUS SIGN */ \
   OP(L'²', Key_2) /* U+00b2, XKB_KEY_twosuperior, SUPERSCRIPT TWO */ \
   OP(L'³', Key_3) /* U+00b3, XKB_KEY_threesuperior, SUPERSCRIPT THREE */ \
   OP(L'µ', Key_M) /* U+00b5, XKB_KEY_mu, MICRO SIGN */ \
   OP(L'¶', Key_R) /* U+00b6, XKB_KEY_paragraph, PILCROW SIGN */ \
   OP(L'·', Key_Period) /* U+00b7, XKB_KEY_periodcentered, MIDDLE DOT */ \
   OP(L'¹', Key_1) /* U+00b9, XKB_KEY_onesuperior, SUPERSCRIPT ONE */ \
   OP(L'º', LSHIFT(Key_M)) /* U+00ba, XKB_KEY_masculine, MASCULINE ORDINAL INDICATOR */ \
   OP(L'¼', Key_4) /* U+00bc, XKB_KEY_onequarter, VULGAR FRACTION ONE QUARTER */ \
   OP(L'½', Key_5) /* U+00bd, XKB_KEY_onehalf, VULGAR FRACTION ONE HALF */ \
   OP(L'¾', Key_6) /* U+00be, XKB_KEY_threequarters, VULGAR FRACTION THREE QUARTERS */ \
   OP(L'¿', LSHIFT(Key_Minus)) /* U+00bf, XKB_KEY_questiondown, INVERTED QUESTION MARK */ \
   OP(L'Æ', LSHIFT(Key_A)) /* U+00c6, XKB_KEY_AE, LATIN CAPITAL LETTER AE */ \
   OP(L'Ð', LSHIFT(Key_D)) /* U+00d0, XKB_KEY_ETH, LATIN CAPITAL LETTER ETH */ \
   OP(L'×', LSHIFT(Key_Comma)) /* U+00d7, XKB_KEY_multiply, MULTIPLICATION SIGN */ \
   OP(L'Ø', LSHIFT(Key_O)) /* U+00d8, XKB_KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */ \
   OP(L'Þ', LSHIFT(Key_P)) /* U+00de, XKB_KEY_THORN, LATIN CAPITAL LETTER THORN */ \
   OP(L'ß', Key_S) /* U+00df, XKB_KEY_ssharp, LATIN SMALL LETTER SHARP S */ \
   OP(L'æ', Key_A) /* U+00e6, XKB_KEY_ae, LATIN SMALL LETTER AE */ \
   OP(L'ð', Key_D) /* U+00f0, XKB_KEY_eth, LATIN SMALL LETTER ETH */ \
   OP(L'÷', LSHIFT(Key_Period)) /* U+00f7, XKB_KEY_division, DIVISION SIGN */ \
   OP(L'ø', Key_O) /* U+00f8, XKB_KEY_oslash, LATIN SMALL LETTER O WITH STROKE */ \
   OP(L'þ', Key_P) /* U+00fe, XKB_KEY_thorn, LATIN SMALL LETTER THORN */ \
   OP(L'Ħ', LSHIFT(Key_H)) /* U+0126, XKB_KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */ \
   OP(L'ħ', Key_H) /* U+0127, XKB_KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */ \
   OP(L'ı', LSHIFT(Key_I)) /* U+0131, XKB_KEY_idotless, LATIN SMALL LETTER DOTLESS I */ \
   OP(L'Ĳ', LSHIFT(Key_J)) \
   OP(L'ĳ', Key_J) \
   OP(L'ĸ', Key_K) /* U+0138, XKB_KEY_kra, LATIN SMALL LETTER KRA */ \
   OP(L'Ŀ', LSHIFT(Key_L)) \
   OP(L'ŀ', Key_L) \
   OP(L'Ł', LSHIFT(Key_W)) /* U+0141, XKB_KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */ \
   OP(L'ł', Key_W) /* U+0142, XKB_KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */ \
   OP(L'ŉ', Key_N) \
   OP(L'Ŋ', LSHIFT(Key_G)) /* U+014a, XKB_KEY_ENG, LATIN CAPITAL LETTER ENG */ \
   OP(L'ŋ', Key_G) /* U+014b, XKB_KEY_eng, LATIN SMALL LETTER ENG */ \
   OP(L'Œ', LSHIFT(Key_E)) /* U+0152, XKB_KEY_OE, LATIN CAPITAL LIGATURE OE */ \
   OP(L'œ', Key_E) /* U+0153, XKB_KEY_oe, LATIN SMALL LIGATURE OE */ \
   OP(L'Ŧ', LSHIFT(Key_T)) /* U+0166, XKB_KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */ \
   OP(L'ŧ', Key_T) /* U+0167, XKB_KEY_tslash, LATIN SMALL LETTER T WITH STROKE */ \
   OP(L'Ω', LSHIFT(Key_Q)) /* U+03a9, XKB_KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */ \
   OP(L'―', Key_Comma) /* U+2015, XKB_KEY_Greek_horizbar, HORIZONTAL BAR */ \
   OP(L'‘', LSHIFT(Key_V)) /* U+2018, XKB_KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */ \
   OP(L'’', LSHIFT(Key_B)) /* U+2019, XKB_KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */ \
   OP(L'“', Key_V) /* U+201c, XKB_KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */ \
   OP(L'”', Key_B) /* U+201d, XKB_KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */ \
   OP(L'™', LSHIFT(Key_8)) /* U+2122, XKB_KEY_trademark, TRADE MARK SIGN */ \
   OP(L'⅜', LSHIFT(Key_5)) /* U+215c, XKB_KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */ \
   OP(L'⅝', LSHIFT(Key_6)) /* U+215d, XKB_KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */ \
   OP(L'⅞', LSHIFT(Key_7)) /* U+215e, XKB_KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */ \
   OP(L'←', Key_Y) /* U+2190, XKB_KEY_leftarrow, LEFTWARDS ARROW */ \
   OP(L'↑', LSHIFT(Key_U)) /* U+2191, XKB_KEY_uparrow, UPWARDS ARROW */ \
   OP(L'→', Key_I) /* U+2192, XKB_KEY_rightarrow, RIGHTWARDS ARROW */ \
   OP(L'↓', Key_U) /* U+2193, XKB_KEY_downarrow, DOWNWARDS ARROW */ \
   OP(L'♪', LSHIFT(Key_N)) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_AE, LSHIFT(Key_A)) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Alt_R, Key_RightAlt) /* XKB_KEY_Alt_R, Right alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_ENG, LSHIFT(Key_G)) \
   OP(XKB_KEY_ETH, LSHIFT(Key_D)) /* XKB_KEY_Eth, deprecated  */ \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
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
   OP(XKB_KEY_Greek_OMEGA, LSHIFT(Key_Q)) \
   OP(XKB_KEY_Greek_horizbar, Key_Comma) \
   OP(XKB_KEY_Home, Key_Home) /* XKB_KEY_Home */ \
   OP(XKB_KEY_Hstroke, LSHIFT(Key_H)) \
   OP(XKB_KEY_ISO_Left_Tab, LSHIFT(Key_Tab)) /* XKB_KEY_ISO_Left_Tab */ \
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
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
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_Lstroke, LSHIFT(Key_W)) \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_Meta_R, LSHIFT(Key_RightAlt)) /* XKB_KEY_Meta_R, Right meta  */ \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_OE, LSHIFT(Key_E)) \
   OP(XKB_KEY_Oslash, LSHIFT(Key_O)) \
   OP(XKB_KEY_Pause, Key_Pause) /* XKB_KEY_Pause, Pause, hold  */ \
   OP(XKB_KEY_Print, Key_PrintScreen) /* XKB_KEY_Print */ \
   OP(XKB_KEY_Prior, Key_PageUp) /* XKB_KEY_Prior, Prior, previous  */ \
   OP(XKB_KEY_Return, Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(XKB_KEY_Right, Key_RightArrow) /* XKB_KEY_Right, Move right, right arrow  */ \
   OP(XKB_KEY_Scroll_Lock, Key_ScrollLock) /* XKB_KEY_Scroll_Lock */ \
   OP(XKB_KEY_Shift_L, Key_LeftShift) /* XKB_KEY_Shift_L, Left shift  */ \
   OP(XKB_KEY_Shift_R, Key_RightShift) /* XKB_KEY_Shift_R, Right shift  */ \
   OP(XKB_KEY_Super_L, Key_LeftGui) /* XKB_KEY_Super_L, Left super  */ \
   OP(XKB_KEY_Super_R, Key_RightGui) /* XKB_KEY_Super_R, Right super  */ \
   OP(XKB_KEY_Sys_Req, LALT(Key_PrintScreen)) /* XKB_KEY_Sys_Req */ \
   OP(XKB_KEY_THORN, LSHIFT(Key_P)) /* XKB_KEY_Thorn, deprecated  */ \
   OP(XKB_KEY_Tab, Key_Tab) /* XKB_KEY_Tab */ \
   OP(XKB_KEY_Tslash, LSHIFT(Key_T)) \
   OP(XKB_KEY_Up, Key_UpArrow) /* XKB_KEY_Up, Move up, up arrow  */ \
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
   OP(XKB_KEY_ae, Key_A) \
   OP(XKB_KEY_backslash, Key_NonUsPound) \
   OP(XKB_KEY_brokenbar, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_cent, Key_C) \
   OP(XKB_KEY_copyright, LSHIFT(Key_C)) \
   OP(XKB_KEY_currency, LSHIFT(Key_4)) \
   OP(XKB_KEY_dead_abovedot, LSHIFT(Key_Slash)) /* XKB_KEY_dead_abovedot */ \
   OP(XKB_KEY_dead_abovering, LSHIFT(Key_LeftBracket)) /* XKB_KEY_dead_abovering */ \
   OP(XKB_KEY_dead_acute, Key_Semicolon) /* XKB_KEY_dead_acute */ \
   OP(XKB_KEY_dead_breve, LSHIFT(Key_NonUsPound)) /* XKB_KEY_dead_breve */ \
   OP(XKB_KEY_dead_caron, LSHIFT(Key_Quote)) /* XKB_KEY_dead_caron */ \
   OP(XKB_KEY_dead_cedilla, Key_Equals) /* XKB_KEY_dead_cedilla */ \
   OP(XKB_KEY_dead_doubleacute, LSHIFT(Key_Semicolon)) /* XKB_KEY_dead_doubleacute */ \
   OP(XKB_KEY_dead_macron, LSHIFT(Key_RightBracket)) /* XKB_KEY_dead_macron */ \
   OP(XKB_KEY_dead_ogonek, LSHIFT(Key_Equals)) /* XKB_KEY_dead_ogonek */ \
   OP(XKB_KEY_dead_tilde, Key_RightBracket) /* XKB_KEY_dead_tilde */ \
   OP(XKB_KEY_division, LSHIFT(Key_Period)) \
   OP(XKB_KEY_downarrow, Key_U) \
   OP(XKB_KEY_eng, Key_G) \
   OP(XKB_KEY_eth, Key_D) \
   OP(XKB_KEY_exclamdown, LSHIFT(Key_1)) \
   OP(XKB_KEY_fiveeighths, LSHIFT(Key_6)) \
   OP(XKB_KEY_hstroke, Key_H) \
   OP(XKB_KEY_hyphen, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_idotless, LSHIFT(Key_I)) \
   OP(XKB_KEY_kra, Key_K) /* XKB_KEY_kappa, deprecated  */ \
   OP(XKB_KEY_leftarrow, Key_Y) \
   OP(XKB_KEY_leftdoublequotemark, Key_V) \
   OP(XKB_KEY_leftsinglequotemark, LSHIFT(Key_V)) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_lstroke, Key_W) \
   OP(XKB_KEY_masculine, LSHIFT(Key_M)) \
   OP(XKB_KEY_mu, Key_M) \
   OP(XKB_KEY_multiply, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_oe, Key_E) \
   OP(XKB_KEY_onehalf, Key_5) \
   OP(XKB_KEY_onequarter, Key_4) \
   OP(XKB_KEY_onesuperior, Key_1) \
   OP(XKB_KEY_ordfeminine, LSHIFT(Key_F)) \
   OP(XKB_KEY_oslash, Key_O) \
   OP(XKB_KEY_paragraph, Key_R) \
   OP(XKB_KEY_periodcentered, Key_Period) \
   OP(XKB_KEY_plusminus, LSHIFT(Key_9)) \
   OP(XKB_KEY_questiondown, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_registered, LSHIFT(Key_R)) \
   OP(XKB_KEY_rightarrow, Key_I) \
   OP(XKB_KEY_rightdoublequotemark, Key_B) \
   OP(XKB_KEY_rightsinglequotemark, LSHIFT(Key_B)) \
   OP(XKB_KEY_section, LSHIFT(Key_S)) \
   OP(XKB_KEY_seveneighths, LSHIFT(Key_7)) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_ssharp, Key_S) \
   OP(XKB_KEY_sterling, LSHIFT(Key_3)) \
   OP(XKB_KEY_thorn, Key_P) \
   OP(XKB_KEY_threeeighths, LSHIFT(Key_5)) \
   OP(XKB_KEY_threequarters, Key_6) \
   OP(XKB_KEY_threesuperior, Key_3) \
   OP(XKB_KEY_trademark, LSHIFT(Key_8)) \
   OP(XKB_KEY_tslash, Key_T) \
   OP(XKB_KEY_twosuperior, Key_2) \
   OP(XKB_KEY_uparrow, LSHIFT(Key_U)) \
   OP(XKB_KEY_yen, LSHIFT(Key_Y)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace ca {
namespace multi_2gr {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace multi_2gr
} // namespace ca
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE
