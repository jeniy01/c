#include <stdio.h>
void main(){
	//������ 
	int i, j;
	for(i=1;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
	//�Է��� ������ ���� ���
	int dan;
	printf("\n\n�� �Է� : ");
	scanf("%d", &dan); 
	gugudan(dan);	//�Լ��� ȣ�� 
	//��� �Լ��� ���ǰ� �Ǿ� �־�� �ϸ�, ȣ��Ǹ�, ���ް��� �νĵǾ� ó���ȴ�. 
}

void gugudan(int su){	//�Լ��� ���� 
	int a;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\n", su, a, su*a);
	}
}

