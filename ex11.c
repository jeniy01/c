#include <stdio.h>
void main(){
	int i;
	int j;
	for(i=1;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
	//�Է��� ������ ���� ���
	int dan;
	dan=scanf("%d",&dan);
	gugudan(dan); //�Լ��� ȣ�� : ���� �̸��� �޶� ������, ������ ������ Ÿ���� ���ƾ� �� 
	//��� �Լ��� ���ǰ� �Ǿ� �־�� �ϸ�, ȣ��Ǹ� ���ް��� �νĵǾ� ó���ȴ�. 
}

void gugudan(int su){	//�Լ��� ���� : ���� �̸��� �޶� ������, ������ ������ Ÿ���� ���ƾ� �� 
	int a;
	int b;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\n",a,su,a*su);
	}
}
