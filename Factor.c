/*
	Factor
	by Mathshyun!
	�ڿ����� �ԷµǸ� �� ���� ����� ��� ���ϴ� ���α׷� 
*/

#include <stdio.h>
 
int main() {
	int ent = 0;
	printf("�ڿ����� �Է��ϼ��� : ");
	while (ent <= 0) {
		scanf("%d", &ent);
		if (ent > 0) break;
		printf("�ڿ����� �ƴմϴ�! �ٽ� �Է��ϼ��� : ");
	}
	for (int i = 1; i <= ent; i++)
		if (ent % i == 0) printf("%d\n", i);
	return 0;
}
