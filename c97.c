#include<stdio.h>
int main(){
    int num, encrypt,passwd,key=0314;
    printf("input 3 numbrts:"),scanf("%d,&num");
    printf("df");
    encrypt=num^key;
    printf("encrypt:%d\n",encrypt);
    while(1)
    {
        printf("password:"),scanf("%d",&passwd);
    printf("original date:%d\n",encrypt^passwd);
    }
    return 0;
}