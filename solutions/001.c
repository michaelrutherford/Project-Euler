/* Copyright 2016 Michael Rutherford
 *
 * This file is part of Project-Euler.
 *
 * Project-Euler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Project-Euler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Project-Euler.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

int main(int argc, char **argv)
{
        int sum = 0;
        for (int i = 0; i < 1000; i++) {
                if (i % 3 == 0 || i % 5 == 0) {
                        sum += i;
                }
        }
        printf("%d\n", sum);
        return 0;
}
