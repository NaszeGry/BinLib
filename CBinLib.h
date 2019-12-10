#pragma once
#include <stdbool.h>

#define bit bool
static bit AND(bit a, bit b) {
	return a && b;
}

static bit NAND(bit a, bit b) {
	return !AND(a, b);
}


// OR
static bit OR(bit a, bit b) {
	return a || b;
}

static bit NOR(bit a, bit b) {
	return !OR(a, b);
}

static bit XOR(bit a, bit b) {
	return OR(a, b) && !AND(a, b);
}

static bit XNOR(bit a, bit b) {
	return !(OR(a, b) && !AND(a, b));
}

// not
static bit NOT(bit a) {
	return !a;
}