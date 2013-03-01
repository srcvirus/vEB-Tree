/*
 * util.h
 *
 *  Created on: Mar 1, 2013
 *      Author: sr2chowd
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <stdio.h>
#include <math.h>

#define INF ~(1<<(sizeof(long) - 1))L
#define NIL -1

#define get_bit_count(x) (1 +((size_t)(log10((x)) / log10(2))))

long upper_sqrt(long x);
long lower_sqrt(long x);
inline long high(long x, long u);
inline long low(long x, long u);
inline long index(long x, long y, long u);

#endif /* UTIL_H_ */
