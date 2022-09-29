#include<stdio.h>
int main()
{
    int x;
    int number;

    printf("\n\n########################################\n\n");   
    printf("1. Convert Negative to Positive\n");
    printf("2. Convert to Positive to Neggative\n");
   

    printf("\n\nEnter your Choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("Enter a Negative number: ");
              scanf("%d",&number);
              number=number*(-1);
              printf("Convert form of given number is %d",number);
              break;
        case 2:
              printf("Enter a Positive number: ");
              scanf("%d",&number);
              number=number*(-1);
              printf("Convert form of given number is %d",number);
              break;
        default:
              printf("Invaild Number");
    }
    return 0;
}