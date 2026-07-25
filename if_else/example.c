// if condition
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
    
//     if(n%2 == 0){
//         printf("Even Number");
//     }
//     if (n%2 != 0)
//     {
//         printf("Odd Number");
//     }
    
//     return 0;
// }



// if-else condition
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
    
//     if(n%2 == 0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }
//     return 0;
// }



// 1. Take positive integer input and tell if it is divisible by 5 or not
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     if(n%5 == 0){
//         printf("Divisible by 5");
//     }
//     else{
//         printf("Not divisible by 5");
//     }    
//     return 0;
// }



// 2. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a Year : ");
//     scanf("%d",&x);

//     if (x % 4 == 0)
//     {
//         printf("%d is a leap year",x);
//     }
//     else{
//         printf("%d is not a leap year",x);
//     }
//     return 0;
// }



// 3. Take integer input and print the absolute value(mode|-7| = 7) of that integer
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
    
//     if(x<0){ // if x is negative num
//         x = x * (-1);
//     }
//     printf("The absolute value is : %d ",x);

//     return 0;
// }



// 4. if a cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
// #include<stdio.h>
// int main(){
//     int cp; // cost price
//     printf("Enter a cost price : ");
//     scanf("%d",&cp);
    
//     int sp; // selling price
//     printf("Enter a selling price : ");
//     scanf("%d",&sp);

//     if(sp>cp){
//         printf("Profit");
//     }
//     if(cp>sp){
//         printf("Loss");
//     }
//     if(sp == cp){
//         printf("No profit , No Loss");
//     }    
//     return 0;
// }



// 5. Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
// #include<stdio.h>
// int main(){
//     int l;
//     printf("Enter a length : ");
//     scanf("%d",&l);

//     int b;
//     printf("Enter a breadth : ");
//     scanf("%d",&b);

//     int a = l * b; //area
//     int p = 2 * (l+b); //perimeter

//     if (a>p)
//     {
//         printf("Area is greater than perimeter");
//     }
//     else{
//         printf("Area is not greater than perimeter");
//     }

//     return 0;
// }