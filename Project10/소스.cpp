#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;
	int z;
	printf("두 실수 입력:");
	scanf("%lf %lf", &a, &b);
	printf("연산 종류 번호 선택 1(+), 2(-),3(*),4(/):");
	scanf("%d", &z);
	if (z == 1) {
		printf("%.2f + %.2f = %.2f", a, b, a + b);
	}
	else if (z == 2) {
		printf("%.2f - %.2f = %.2f", a, b, a - b);
	}
	else if (z == 3) {
		printf("%.2f * %.2f = %.2f", a, b, a * b);
	}
	else if (z == 4) {
		printf(" %.2f / %.2f = %.2f", a, b, a / b);
	}
	else {
		printf("잘못된 입력입니다.");
	}
}
