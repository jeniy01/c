#include <stdio.h>
//�Լ��� ���Ǵ� main�� ��, �� ���� �������
//�Լ��� ���� : �Ű������� ��ȯ���� ������ ������ ���� ����

//1. �Ű������� ����, ��ȯ���� ���� ��� 
void fn1(){
	printf("�Ű������� ����, ��ȯ���� ���� ��� - �Լ�1\n");
}

//2. �Ű������� ������, ��ȯ���� ���� ��� 
void fn2(int a){
	printf("������ �� : %d, ������� : %d\n",a, a*a);
}
//3. �Ű������� ������, ��ȯ���� �ִ� ��� 
int fn3(){
	int a=1004;	//�������� a 
	return a/2;	//��ȯ�Ѵٴ� �� 
} 
//4. �Ű������� ��ȯ���� ��� �����ϴ� ���
float fn4(int su1, int su2, float pi){
	return su1*su2*pi;
} 
void main(){
	fn1();	//1. return�� ���� ���� void �ȿ��� printf�� �ؾ��� 
	fn2(4);	//2. return�� ���� ���� void �ȿ��� printf�� �ؾ���
	int a=fn3();	//3.
	printf("��ȯ���� �ִ� ������ : %d\n", a);	//3.
	float b=fn4(32, 27, 3.14);	//4.
	printf("������ �� : %d, %d, ���� ����� : %f\n", 32, 27, b);	//4. 
}