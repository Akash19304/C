#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll=10;
    s1.cgpa=9.2;
    strcpy(s1.name,"Akash");

    printf("name :%s\n",s1.name);
    printf("roll no :%d\n",s1.roll);
    printf("cgpa :%.1f\n",s1.cgpa);
}