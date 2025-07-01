#include<stdio.h>

int main(){

    int num;
    int first,last;

    printf("Enter number :");
    scanf("%d",&num);

    last = num % 10;
    while (num>0)
    {
        first = num % 10;
        num = num / 10 ;
    }
    printf("\n Sum of first digit %d and last digit %d is : %d",first,last,first+last);
    
    return 0;
}