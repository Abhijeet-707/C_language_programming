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

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);

    if((n % 3 == 0 || n % 5 == 0) && n % 15 != 0 ){ 
    // Parentheses are required because && has higher precedence than ||
    // Without these ()parentheses, the && condition would be evaluated first,
    // changing the intended logic and producing an incorrect result

        printf("The number is divisible by 3 or 5 but not 15");
    }
    else{
        printf("The number is not matching to the required condition");
    }
    return 0;
}