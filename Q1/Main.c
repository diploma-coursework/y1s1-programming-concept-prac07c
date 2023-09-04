#include <stdio.h>

void a() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

void b() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 6 - i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

void c() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 6 - i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

void d() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 1 + i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

void e() {
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5 + i; j++) {
			if (i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

int main() {
	a();
	printf("\n");
	b(); 
	printf("\n");
	c();
	printf("\n");
	d();
	printf("\n");
	e();
}