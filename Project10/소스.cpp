#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;
	int z;
	printf("�� �Ǽ� �Է�:");
	scanf("%lf %lf", &a, &b);
	printf("���� ���� ��ȣ ���� 1(+), 2(-),3(*),4(/):");
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
		printf("�߸��� �Է��Դϴ�.");
	}
}
