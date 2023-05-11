#include<stdio.h>

//#define PI 3.14159265
int  main(){
    int r =5;
    const double PI =3.14159265;
    double cir=2*r*PI;
    PI=3.14;
    printf("radius:%d,circumference:%1f\n",r,cir);

    return 0;
}