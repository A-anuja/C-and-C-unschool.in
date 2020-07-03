#include<stdio.h>

void main()
{
    int num1,num2;
    int sum,sub,mul,mod;
    float div;

    printf("Enter two numbers:-\n");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/(float)num2;
    mod=num1%num2;

    printf("\nSum of %d and %d is %d\n",num1,num2,sum);
    printf("Subtraction of %d and %d is %d\n",num1,num2,sub);
    printf("Multiplaction of %d and %d is %d\n",num1,num2,mul);
    printf("Division of %d and %d is %f\n",num1,num2,div);
    printf("Modulus of %d and %d is %d\n",num1,num2,mod);

}
