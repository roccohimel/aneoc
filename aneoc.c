#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define msg printf
#define mks sprintf
#define loop while

int ret(int val) {
	return val;
}

void rmt() {
	system("rm .anctemp");
	system("rm acexecs.c");
}

int stf() {
	return 1;
}

void msi(int pmt) {
	printf("%d", pmt);
}

void nln() {
	printf("\n");
}

void wait(int pmt) {
	sleep(pmt);
}

void fso() {
	fflush(stdout);
}

void load(int mb) {
	mb = mb * 1048576;
	while (mb > 0) {
		putchar('0');
		mb -= 1;
	}
}

void qload(int mb) {
	mb = mb * 1048576;
	while (mb > 0) {
		printf("\r");		
		putchar('0');
		mb -= 1;
	}
	printf("\r");
	putchar(' ');
}

int adi(int x, int y) {
	return x + y;
}	

int sbi(int x, int y) {
	return x - y;
}

int fac(int x) {
	if (x <= 1) return 1;
	return x * fac(x - 1);
}


int main() {
