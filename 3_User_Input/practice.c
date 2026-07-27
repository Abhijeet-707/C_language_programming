// 1. Area of circle

// #include<stdio.h>
// int main(){

//     float radius;
//     printf("Enter your radius : ");
//     scanf("%f",&radius);

//     float pi = 3.1415;
//     float area = pi * radius * radius;

//     printf("The area of circle is : %f",area);
//     return 0;
// }


// // 2. Calculate SI

// #include<stdio.h>
// int main(){

//     float p,r,t,si;

//     printf("Enter your Principal : ");
//     scanf("%f",&p);

//     printf("Enter your Rate : ");
//     scanf("%f",&r);

//     printf("Enter your Time : ");
//     scanf("%f",&t);

//     si = (p*r*t)/100;
//     printf("Simple interest is : %f" , si);

//     return 0;
// }


// 3. Sum of Given two Numbers 

// #include<stdio.h>
// int main(){
//     int x,y;

//     printf("Enter your First Number : " );
//     scanf("%d",&x);

//     printf("Enter your Second Number : ");
//     scanf("%d",&y);

//     int z = x + y;
//     printf("Sum of Two Number is : %d" , z);

//     return 0;
// }


// 4. Predict the output

// #include<stdio.h>
// int main(){

//     int p , q , r;
//     printf("Enter value of p and q and r");
//     scanf(" %d %d %d " , &p , &q , &r);
//     printf("p = %d q = %d r = %d",p,q,r);

//     return 0;
// }





// 5. Take two integers input a and b : a>b, and find the remainder when a is divided by b.

// Formula :
// Divisor * Quotient + Remainder = Dividend
// Therefore, Rem = Dividend - Divisor * Quotient

// #include<stdio.h>

// int main(){

//     int a,b;

//     printf("Enter Your First Number (Dividend) : ");
//     scanf("%d",&a);

//     printf("Enter Your Second Number (Divisor) : ");
//     scanf("%d",&b);

//     int q = a/b;
//     int r = a - (b*q);

//     printf("The Remainder when %d is divided by %d is : %d ",a,b,r);

//     return 0;
// }

// 2nd Method (Using Modulo Operator %)

// #include<stdio.h>

// int main(){

//     int a,b;

//     printf("Enter Your First Number (Dividend) : ");
//     scanf("%d",&a);

//     printf("Enter Your Second Number (Divisor) : ");
//     scanf("%d",&b);

//     int r = a % b;
//     printf("The Remainder When %d is divided by %d is : %d ",a,b,r);

//     return 0;
// }


// in this case like a when [a < b] then output is always a

// #include<stdio.h>
// int main(){
//     int a = 2;
//     int b = 3;
//     int r = a%b;
//     printf("%d",r);
//     return 0;
// }
//like this code output is a % b = a
                        // 2 % 3 = 2   (2/3 remainder is 2)




// 6. Take float input and print the fractional part of the real number
    //(Ex. input : 5.07 
    //     Output : 0.7(Therefore, (5 + 0.7) 0.7 is Fractional Part ))


#include<stdio.h>
int main(){
    float x;
    printf("Enter a float(decimal) number : ");
    scanf("%f",&x);

    int y = x;
    printf("%d\n",y);

    float z = x - y;
    printf("Fractional Part is : %f" , z);
    return 0; 
}