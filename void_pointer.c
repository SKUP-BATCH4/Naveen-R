#include<stdio.h>
int main()
{
    void *vp;
    int a[]={1,4};
    vp=&a;
    printf("%d",(*(int*)vp));
}


