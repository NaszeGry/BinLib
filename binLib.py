def AND(x, y):
	return x and y

def OR(x, y):
	return x or y

def NOR(x, y):
	return not(x or y)

def XOR(x, y):
	return (x or y) and not(x and y)

def XNOR(x, y):
	return not((x or y) and not(x and y))

def NAND(x, y):
	return not(x and y)

def NOT(x):
	return not(x)
