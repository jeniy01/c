#include <stdio.h>
//±¸±¸´Ü 
void main(){
	int p;
	int d;
	for(p=1;p<=9;p++){
		for(d=2;d<=9;d++){
			printf("%d*%d=%d\t",d,p,d*p);
		}
		printf("\n");
	}
	int dan;
	dan=scanf("%d",&dan);
	gugudan(dan);
}

void gugudan(int s){
	int x;
	int y;
	for(x=1;x<=9;x++){
		printf("%d*%d=%d\n",x,s,x*s);
	}
}
