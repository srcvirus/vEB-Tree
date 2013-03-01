/*
 * util.cc
 *
 *  Created on: Mar 1, 2013
 *      Author: sr2chowd
 */


#include "util.h"

long upper_sqrt(long x)
{
	int bit_count = get_bit_count(x);
	int to_shift = (bit_count >> 1);
	if(bit_count & 1) to_shift += 1;
	return x >> to_shift;
}

long lower_sqrt(long x)
{
	int bit_count = get_bit_count(x);
	int to_shift = sizeof(long) - (bit_count >> 1);
	return (x << to_shift) >> to_shift;
}

inline long high(long x, long u)
{
	return x / lower_sqrt(u);
}

inline long low(long x, long u)
{
	return x % lower_sqrt(u);
}

inline long index(long x, long y, long u)
{
	return x * lower_sqrt(u) + y;
}





