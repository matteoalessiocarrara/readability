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

# include <string.h>

# ifndef _READABILITY_STRING_H
# define _READABILITY_STRING_H


# define strcompare(_str1,_str2) strcmp(_str1,_str2)
# define strcopy(_str1,_str2) strcpy(_str1,_str2)
# define strsearch(const char *haystack, const char *needle) strstr(const char *haystack, const char *needle)
# define strinterlock(char *dest, const char *src) strcat(char *dest, const char *src)


# endif /* _READABILITY_STRING_H */
