#include<stdio.h>

int main(){
    int num,*numptr;
    float fl,*flptr;
    char ch,*chptr;

    num=154;
    fl=78.5;
    ch='g';

    numptr=&num;
    flptr=&fl;
    chptr=&ch;

    printf("\nvalue of *numptr : %d",*numptr);
    printf("\nvalue of numptr : %d",numptr);
    printf("\nvalue of &numptr : %d",&numptr);

    printf("\nvalue of *flptr : %f",*flptr);
    printf("\nvalue of flptr : %d",flptr);
    printf("\nvalue of &flptr : %d",&flptr);

    printf("\nvalue of *chptr : %c",*chptr);
    printf("\nvalue of chptr : %d",chptr);
    printf("\nvalue of &chptr : %d",&chptr);

    *chptr++;
    printf("\nvalue of *chptr : %c",*chptr);
    printf("\nvalue of chptr : %d",chptr);
    printf("\nvalue of &chptr : %d",&chptr);

    *numptr;
    printf("\nvalue of *numptr : %d",*numptr);
    printf("\nvalue of numptr : %d",numptr);
    printf("\nvalue of &numptr : %d",&numptr);

    *flptr++;
    printf("\nvalue of *flptr : %f",*flptr);
    printf("\nvalue of flptr : %d",flptr);
    printf("\nvalue of &flptr : %d",&flptr);

    return 0;
}
