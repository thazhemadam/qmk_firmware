/*
Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>

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

#pragma once

/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

// wiring
#define MATRIX_ROW_PINS \
    { B1, B0, A7, A6, A5 }
#define MATRIX_COL_PINS \
    { B10, B2, A15, B3, B4, B5, B8, B9, C13, C14, A4, A3 }

#ifdef RGB_MATRIX_ENABLE
  #define RGB_MATRIX_LED_COUNT 48
  #define RGB_MATRIX_CENTER {100, 23}
#endif
