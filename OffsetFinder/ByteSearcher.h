/*  LoL Ability Timers. Injects into League of Legends to show ability
timers for all champions.
Copyright (C) 2014  Matthew Whittington

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#pragma once
class ByteSearcher
{
protected:
	const static short MAX_CHAR = 256; // number of numbers holdable by a char

	unsigned char* pattern; // pattern to search for (the needle)
	size_t patternLen; // length of pattern
	size_t bad_char_skip[MAX_CHAR]; // 1 entry for every possible char

	void PreprocessPattern();
public:
	ByteSearcher(const char* pattern, size_t patternLen);
	~ByteSearcher();

	long SearchBytes(const unsigned char* bytes, size_t bytesLen);
};

