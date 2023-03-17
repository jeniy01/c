#include <stdio.h>
void main(){	//다차원 배열 
	int arr01[2][3]={90,60,80,70,85,75};	//이것도 2차원 배열임
	int arr02[2][3]={
		{75,95,80},
		{85,70,90}
	};
	int arr03[][4]={	//가변배열 
		{80, 85},
		{90,95,75,70},
		{65,70,85,80}
	};
	//배열의 순회
	printf("전산\tDB\tP/G\t총점\n");
	int i,j,tot=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d %d %d",i,j,tot);
		}
	} 
}
