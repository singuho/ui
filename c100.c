#include<stdio.h>
int main()
{
    int n1,n2,n3,Max;
    printf("정수 3개를 입력하세요:");
    scanf("%d %d %d",&n1,&n2,&n3);
    Max =n1;
    Max =n2 > Max ? n2:Max;
    Max =n3 > Max ? n3:Max;
    printf("최대값: %d\n",Max);
    return 0;
}