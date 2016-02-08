/*
 * Copyright 2016 Matteo Alessio Carrara <sw.matteoac@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */
 
# ifndef _READABILITY_H
# define _READABILITY_H

# include <stdbool.h>
# include <stdlib.h>
# include <math.h>

# define and &&
# define not !
# define xor ^
# define or ||
# define is ==
# define isnot !=
# define less <
# define more >
# define lessoris <=
# define moreoris >=
# define shiftleft <<
# define shiftright >>

// Standard library functions
# define strtoint(_str) atoi(_str)
# define inttostr(_int, _storebuf, _len) itoa(_int, _storebuf, _len)
# define rad(_int_n) sqrt(_int_n)
# define power(_int_n,_int_base) pow(_int_n,_int_base)
# define strcompare(_str1,_str2) strcmp(_str1,_str2)
# define strcopy(_str1,_str2) stcpy(_str1,_str2)

typedef char * str;
typedef char byte;

#endif /* _READABILITY_H */
