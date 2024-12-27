#include <stdio.h>

int menu(){
    printf("Menu\n");
    printf("1.For Addition.\n");
    printf("2.For Subtraction.\n");
    printf("3.For Multiplication.\n");
    printf("4.For Division.\n");
    printf("5.For Exit.\n");
}

int add(int a , int b ){
    printf("Addition of %d And %d is %d.\n",a,b,a+b);
}
int sub(int a , int b ){
    printf("Subtraction of %d And %d is %d.\n",a,b,a-b);
}
int mul(int a , int b ){
    printf("Multiplication of %d And %d is %d.\n",a,b,a*b);
}
int div(int a , int b ){
    printf("Division of %d And %d is %d.\n",a,b,a/b);
}

int main(){
    int a , b ;
    int i ;
    printf("Enter The 1st Number:"); 
    scanf("%d",&a);
    printf("Enter The 2st Number:");
    scanf("%d",&b);
    menu();
    do{
        printf("Enter Your choice:");
        scanf("%d",&i);
        switch(i){
        case 1 :
            add(a,b); 
            break;
        
        case 2 :
            sub(a,b);
            break;

        case 3 :
            mul(a,b);
            break;

        case 4 :
            div(a,b);
            break;

        case 5 :
            
            break;

        default:
            printf("Enter The Valid Input");
            break;
        }
    }while(i != 5 );
    return 0;
}