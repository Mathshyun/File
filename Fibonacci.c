/*
	Fibonacci
	by Mathshyun
	�Էµ� �� ������ �Ǻ���ġ ������ ��� 
*/

#include <stdio.h>

int main() {
	int fib[100000] = {1, 1, };
	int num;
	printf("�ڿ����� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("1\n1\n");
	if (num < 1) return 0;
	for (int i = 1;;) {
		int a = fib[i - 1] + fib[i];
		if (a > num) break;
		fib[++i] = a;
		printf("%d\n", a);
	}
	return 0;
}
