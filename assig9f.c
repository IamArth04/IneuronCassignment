#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("\nEnter a Year: ");
    scanf("%d",&x);
    switch (x%100 == 0)
    {
        case 1:
              switch(x%400==0)
              {
                case 1: 
                       printf("This is Leap Year");
                       break;
                case 0:
                       printf("This is not a Leap Year");
                       break;
              }
              break;
        case 0:
              switch(x%4==0)
              {
                case 1: 
                       printf("This is Leap Year");
                       break;
                case 0:
                       printf("This is not a Leap Year");
                       break;
              }
              break;
        case 3:
              exit(0);
        default:
              printf("Wrong Year");
    }
    return 0;
}