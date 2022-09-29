#include<stdio.h>

int main(){
    int choice,a,b,c;
    while(1)
    {
        printf("\n\n########################################\n\n");
        
        printf("1. To check Isosceles Triangle\n");
        printf("2. To check Right Angle Triangle\n");
        printf("3. To check Equilateral Triangle\n");
        printf("4. Exit\n");
       
        
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter lenght of 3 sides of triangle: ");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b||b==c||c==a)
                      printf("Isosceles Triangle");
                else
                      printf("Not an Isosceles Triangle");
                break;
             case 2:
                printf("Enter lenght of 3 sides of triangle: ");
                scanf("%d %d %d",&a,&b,&c);
                if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
                      printf("Right Angle Triangle");
                else
                      printf("Not Right Angle Triangle");
                break;
            case 3:
                printf("Enter lenght of 3 sides of triangle: ");
                scanf("%d %d %d",&a,&b,&c);
                if((a==b)&&(b==c))
                      printf("Equilateral Triangle");
                else
                      printf("Not an Equilateral Triangle");
                break;
            case 4:
                break;
            default:
                printf("Invaild Choice");
        }
        if(choice==4)
                 break;
    }
    printf("\n");
    return 0;
}