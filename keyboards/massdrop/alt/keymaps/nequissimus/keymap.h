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

#include QMK_KEYBOARD_H

#define MILLISECONDS_IN_SECOND 1000

#define AZURE   {HSV_AZURE}
#define BLUE    {HSV_BLUE}
#define CHART   {HSV_CHARTREUSE}
#define CORAL   {HSV_CORAL}
#define CYAN    {HSV_CYAN}
#define GOLD    {HSV_GOLD}
#define GOLDEN  {HSV_GOLDENROD}
#define GREEN   {HSV_GREEN}
#define MAGENT  {HSV_MAGENTA}
#define OFF     {HSV_OFF}
#define ORANGE  {HSV_ORANGE}
#define PINK    {HSV_PINK}
#define PURPLE  {HSV_PURPLE}
#define RED     {HSV_RED}
#define SPRING  {HSV_SPRINGGREEN}
#define TEAL    {HSV_TEAL}
#define TURQ    {HSV_TURQUOISE}
#define WHITE   {HSV_WHITE}
#define YELLOW  {HSV_YELLOW}


//========================================================== CONFIGURABLE DEFAULTS ==========================================================
extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color;

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              // USB Toggle Automatic GCR control
    DBG_TOG,               // DEBUG Toggle On / Off
    DBG_MTRX,              // DEBUG Toggle Matrix Prints
    DBG_KBD,               // DEBUG Toggle Keyboard Prints
    DBG_MOU,               // DEBUG Toggle Mouse Prints
    MD_BOOT,               // Restart into bootloader after hold timeout
};
