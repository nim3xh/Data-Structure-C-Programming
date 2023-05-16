#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    const int MAX_SIZE=10;
    int arr[MAX_SIZE];
    int i,tot=0;
    char string[100];
    printf("Enter %d elements in the array: ",MAX_SIZE);
    for(i=0;i<MAX_SIZE;i++){
        scanf("%d",&arr[i]);
        tot+=arr[i];
    }
    printf("\nElements of array are :");
    for(i=0;i<MAX_SIZE;i++){
        printf("%d ",arr[i]);
    }
    printf("\nTotal is : %d",tot);

    printf("\nEnter your name: ");
    scanf("%s",&string);
    i=0;
    printf("\nPrint name using array:");
    while(string[i]!=NULL){
        printf("%c",string[i]);
        i++;
    }
    return 0;
}
