#include<stdio.h>
int main(){
    int x,a,b;
    while(1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("Enter two number: ");
                scanf("%d %d",&a,&b);
                printf("Sum is %d",a+b);
                break;
             case 2:
                printf("Enter two number: ");
                scanf("%d %d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("Enter two number: ");
                scanf("%d %d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4:
                printf("Enter two number: ");
                scanf("%d %d",&a,&b);
                printf("Quotient is %d",a/b);
                break;
            case 5:
                break;
            default:
                printf("Invaild Choice");
        }
        if(x==5)
             break;
    }//end of while
    printf("\n");
    return 0;
}