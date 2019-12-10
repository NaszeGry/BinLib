#pragma once
#include <stdbool.h>

#define bit bool
bit AND(bit a, bit b) {
	return a && b;
}

bit NAND(bit a, bit b) {
	return !AND(a, b);
}


// OR
bit OR(bit a, bit b) {
	return a || b;
}

bit NOR(bit a, bit b) {
	return !OR(a, b);
}

bit XOR(bit a, bit b) {
	return OR(a, b) && !AND(a, b);
}

bit XNOR(bit a, bit b) {
	return !(OR(a, b) && !AND(a, b));
}

// not
bit NOT(bit a) {
	return !a;
}