#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("\nEnter a Number: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("good");
              break;
        case 2:
              printf("better");
              break;
        case 3:
              printf("best");
              break;
        case 4:
              exit(0);
        default:
              printf("invaild");
    }
    return 0;
}