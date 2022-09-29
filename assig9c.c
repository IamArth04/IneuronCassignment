#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("\nEnter the day nummber of a Week: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("Hello,Good Morning.Today is Monday.");
              break;
        case 2:
              printf("Hi,Namaste.Today is Tuesday.");
              break;
        case 3:
              printf("Hey,తెలంగాణ.It's Wednesday.");
              break;
        case 4:
              printf("నమస్కారము,This is Thrusday.");
        case 5:
              printf("ਨਮਸਤੇ,Today is Friday.");
              break;
        case 6:
              printf("નમસ્તે,It is Saturday.");
              break;
        case 7:
              printf(" Deu boro dis dium,Today is Sunday.");
              break;
        case 8:
              exit(0);
        default:
              printf("Invaild Choice");
    }
    return 0;
}