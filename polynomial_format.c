//This is a calculation of finding the value of x by inputing any value.
//The equation is in form of polynomial. 
//All you have to do is to inputer any x value and it calculate thhe total x value
//some has a power(exponetial) as x^2
//This is the equation format to be calculated

#include<stdio.h>

int main(void)
{
    int a = 3, b = 8, c = 5, d = 1, e = 7, f = 6; //coefficient of x
    int x1, x2, x3, x4, x5, x6; //exponetials
    int xa = 0; //x values. you can input any number number in the output
    int vx, value_Xa, total_cal; //for inputing the value of x

    printf(":::::::Using polynomial format to calculate the value of x:::::::\n\n");
    printf("Find the value of the follwing: Y = 3^5+8^4-5^3-x+7x-6\n\n");
    printf("Enter The value Of X: ");
    scanf("%d", &value_Xa);
    
    //creating a value to help in command on what x to be
    vx = value_Xa + xa;

    //Finding the exponential 
    x1 = vx * vx * vx * vx * vx;
    x2 = vx * vx * vx * vx;
    x3 = vx * vx * vx;
    x4 = vx * vx;


    //execution the calulation of coefficient of x and exponential 
    a = a * x1;
    b = b * x2;
    c = c * x3;
    d =  d * x4;
    e = e * vx;
    f = f;
    total_cal = a + b - c - d + e - f;

    printf("Y = %d+%d-%d-%d+%d-%d \n", a, b, c, d, e, f);
    printf("Y = %d\n", total_cal);

    return 0;
}