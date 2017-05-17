/*
	PrimeFactor
	by Mathshyun!
	�Էµ� �ڿ����� ���μ��� ��� ���ϴ� ���α׷� 
*/
#include <stdio.h>

int isPrime(long long x) {
	for (long long i = 2; i * i <= x; i++)
		if (x % i == 0) return 0;
	return 1;
}

int main() {
	long long ent = 0, tmp;
	printf("�ڿ����� �Է��ϼ��� : ");
	while (ent <= 0) {
		scanf("%lld", &ent);
		if (ent > 0) break;
		printf("�ڿ����� �ƴմϴ�! �ٽ� �Է��ϼ��� : ");
	}
	for (long long i = 2; i <= ent; i++) {
		if (!isPrime(i)) continue;
		while (ent % i == 0) {
			printf("%d\n", i);
			ent /= i;
		}
	}
	return 0;
}
