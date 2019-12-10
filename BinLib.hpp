#pragma once
#include <iostream>
#include <vector>

// virtual

#define bit bool

class byte {
public:
	byte(std::string str) {
		this->bits = new bit[8];

		if (str.length() >= 7) {
			for (int i = 0; i < 8; i++) {
				if (str[i] == '1') {
					this->bits[i] = 1;
				}
				else {
					this->bits[i] = 0;
				}
			}
		}
	}

	short toDec() {
		short ret = 0;
		for (short i = 0; i < 8; i++) {
			ret += short( this->bits[i] * powf(2.f, (float)8 - (float)i - 1) );
		}

		return ret;
	}

	void print() {
		for (short i = 0; i < 8; i++) {
			std::cout << this->bits[i];
		}
	}

	bit* bits;
};

// AND
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

