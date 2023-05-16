#include<stdio.h>
void change(int x,int y);
void pchange(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);

    change(x,y);
    pchange(&x,&y);

    printf("\nAfter swap using reference:");
    printf("\nx is %d,y is %d",x,y);

    return 0;
}

void change(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("\nafter swap using pass by values:");
    printf("\nx is %d,y is %d",x,y);
}

void pchange(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
