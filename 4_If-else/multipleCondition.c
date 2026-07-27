// 1. Take positive integer input and tell if it is a three digit number or not.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     if(n>99 && n<1000){
//         printf("it is a three digit number");
//     }
//     else{
//         printf("It is not a three digit number");
//     }
//     return 0;
// }



// 2. Take positive intger input and tell if it is divisible by 5 and 3.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     if(n%5 == 0 && n%3 == 0){
//         printf("Given number is divisible by 5 and 3");
//     }
//     else{
//         printf("Given number is not divisble by 5 and 3");
//     }
//     return 0;
// }



// 3. Take positive intger input and tell if it is divisible by 5 OR 3.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     if(n%5 == 0 || n%3 == 0){
//         printf("Given number is divisible by 5 OR 3");
//     }
//     else{
//         printf("Given number is not divisble by 5 OR 3");
//     }
//     return 0;
// }



// 4. Take 4 positive integers input and print the greatest of them.

// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     printf("Enter a first number : ");
//     scanf("%d", &a);

//     printf("Enter a second number : ");
//     scanf("%d", &b);

//     printf("Enter a third number : ");
//     scanf("%d", &c);

//     printf("Enter a fourth number : ");
//     scanf("%d", &d);

//     if (a > b && a > c && a > d)
//     {
//         printf("%d is greatest ", a);
//     }
//     if (b > a && b > c && b > d)
//     {
//         printf("%d is greatest ", b);
//     }
//     if (c > a && c > b  && c > d)
//     {
//         printf("%d is greatest ", c);
//     }
//     if (d > a && d > b  && d > c)
//     {
//         printf("%d is greatest ", d);
//     }

//     return 0;
// }



// 5. Take 3 numbers input and tell if they can be the side of a triangle.

#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter a first side of a triangle : ");
    scanf("%f", &a);

    printf("Enter a second side of triangle : ");
    scanf("%f", &b);

    printf("Enter a third side of a triangle : ");
    scanf("%f", &c);

    if((a + b) > c && (b + c) > a && (c + a) > b){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}