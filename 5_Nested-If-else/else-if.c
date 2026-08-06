// Take input percentage of a student and print the grade according to markes :

#include<stdio.h>
int main(){
    int n;
    printf("Enter a percentage : ");
    scanf("%d",&n);

    if(n > 80){
        printf("'A' Grade \n Excellent \n");
    }
    else if(n > 60){
        printf("'B' Grade \n VeryGood \n");
    }
    else if(n > 40){
        printf("'C' Grade \n Good \n");
    }
    else{
        printf("'D' Grade \n Fail \n");
    }    
    return 0;
}