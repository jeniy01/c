#include <stdio.h>
void main(){
	/*
	�̽������� ����
	\' : ���� ����ǥ
	\" : ū ����ǥ
	\? : ����ǥ(*)
	\\ : ��������
	\a : ����� ���(*)
	\n : �ٹٲ�
	\t : ������
	\b : �齺���̽�
	\r : ĳ���� ����
	\f : �� �ǵ�(ȭ�� ��ũ��)
	\v : ������(*) 
	*/
	/*
	����������
	%c : ����
	%s : ���ڹ迭
	%d, %i : 10���� ����
	%f, %lf : �Ǽ�
	%o, : 8����
	%x : 16����
	%e, %E, %g, %G : ���� 10�� 6�� -> e+06
	%% : ����� ��ȣ
	*/
	int kor, eng, mat, tot;
	float avg=0.0f;
	printf("���� ���� : ");
	scanf("%d", &kor);
	printf("���� ���� : ");
	scanf("%d", &eng);
	printf("���� ���� : ");
	scanf("%d", &mat);
	tot=kor+eng+mat;
	avg=tot/3.0f;
	printf("��ȣ\t����\t����\t����\t����\t���\n");
	printf("01\t%d\t%d\t%d\t%d\t%.3f\n", kor, eng, mat, tot, avg);
}
