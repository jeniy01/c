#include <stdio.h>
void main(){
	int i;
	int sum=0;
	int score[3]={85,65,90};	//score[0], score[1], score[2]�� ���� �� �ʱ�ȭ, 3�� �ִٴ� �� 
	score[3]=100;	//score[3]�� �������� �ʰ� �ʱ�ȭ ����, 4��°�� ���϶�� �� 
	for(i=0;i<4;i++){	//score[3]�� ���Ŀ� ���� 
		sum+=score[1];
	}
	int arr_len=sizeof(score)/sizeof(score[0])+1;	//�迭�� ���̸� ���ϴ� ���� = (��ü / ������ ��)+1 
	printf("�迭score�� ���̴� %d�Դϴ�.\n", arr_len);
	printf("���� �� ���� �հ�� %d�̰�, ��� ������ %f�Դϴ�.\n", sum, (double)sum/arr_len);
}
