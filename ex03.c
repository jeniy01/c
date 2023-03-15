#include <stdio.h>
void main(){
	/*
	이스케이프 문자
	\' : 작은 따옴표
	\" : 큰 따옴표
	\? : 물음표(*)
	\\ : 역슬래시
	\a : 경고음 출력(*)
	\n : 줄바꿈
	\t : 수평탭
	\b : 백스페이스
	\r : 캐리지 리턴
	\f : 폼 피드(화면 스크롤)
	\v : 수직탭(*) 
	*/
	/*
	서식지정자
	%c : 문자
	%s : 문자배열
	%d, %i : 10진수 정수
	%f, %lf : 실수
	%o, : 8진수
	%x : 16진수
	%e, %E, %g, %G : 지수 10의 6승 -> e+06
	%% : 백분율 기호
	*/
	int kor, eng, mat, tot;
	float avg=0.0f;
	printf("국어 점수 : ");
	scanf("%d", &kor);
	printf("영어 점수 : ");
	scanf("%d", &eng);
	printf("수학 점수 : ");
	scanf("%d", &mat);
	tot=kor+eng+mat;
	avg=tot/3.0f;
	printf("번호\t국어\t영어\t수학\t총점\t평균\n");
	printf("01\t%d\t%d\t%d\t%d\t%.3f\n", kor, eng, mat, tot, avg);
}
