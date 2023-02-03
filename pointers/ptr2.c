#include<stdio.h>
void areaperi(int,float*,float*);

void main(){
    int r=2;
    float area,peri;
    areaperi(r,&area,&peri);
    printf("area= %f, perimeter= %f",area,peri);

}
void areaperi(int r,float *area,float *peri){
    *area=3.14*r*r;
    *peri=2*3.14*r;
}