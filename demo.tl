fn factorial(n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

for (let a = 1; a < 10; a = a + 1) {
    print factorial(a);
}
