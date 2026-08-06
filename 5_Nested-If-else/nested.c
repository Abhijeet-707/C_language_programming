// 1. Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d" , &n);

//     if(n % 3 == 0 || n % 5 == 0){
//         if(n % 15 != 0){
//             printf("Given num is divisible by 3 or 5 but not 15");
//         }
//         else{
//             printf("Given num is divisibl by 15");
//         }
//     }
//     else("Given num is not divisible by 3 or 5");
//     return 0;
// }

// OR second method to solving que 1

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d" , &n);

//     if((n % 3 == 0 || n % 5 == 0) && n % 15 != 0 ){ 
//     // Parentheses are required because && has higher precedence than ||
//     // Without these ()parentheses, the && condition would be evaluated first,
//     // changing the intended logic and producing an incorrect result

//         printf("The number is divisible by 3 or 5 but not 15");
//     }
//     else{
//         printf("The number is not matching to the required condition");
//     }
//     return 0;
// }



// 2. Take 3 positive integers input and print the greatest of them (using nested if-else)

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a 1st Number : ");
    scanf("%d",&a);
    printf("Enter a 2nd Number : ");
    scanf("%d",&b);
    printf("Enter a 3rd Number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
            printf("%d is greatest",a);
        else // a < c  ->  b < a < c  
            printf("%d is greatest",c); 
        // here,bracket is not required because.. if and else containing only one statement
    }
    else{ // b > a  ->  now a is not greatest
        if(b>c)
            printf("%d is greatest",b);
        else // b < c  ->  a < b < c
            printf("%d is greatest",c);
    }
    return 0;
}