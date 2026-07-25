#include<stdio.h>

int main(){
    
    float x = 5;
    float y = 2;
    float z = x/y;
    printf("%f",z,"\n"); // output is 2.500000
    

    // float z = 5/2; //not possible because 5 and 2 are integer number so output is only fist integer number not given decimal value
    // printf("%f",z); // output is 2.000000
    

    // float z = 5.0 / 2;
    // float z = 5 / 2.0; //this both thing possible because here one num is float
    // In short float devide by integer and integer devide by float is possible
    // Both output is 2.500000 means it possible 

    return 0;
}




// Practice Example

// 1.volume of sphere is 4/3*pi*r*r*r

// #include<stdio.h>
// int main(){
//     float r = 5;
//     float v = 4 * 3.14 * r * r * r / 3;
//     printf("The Volume of Sphere is : %f",v);
//     return 0;
// }


// // 2. area of circle is pi/r*r

// #include<stdio.h>

// int main(){

//     float r = 5;
//     float a = 3.14 * r * r;
//     printf("Area of Circle is : %f" , a);

//     return 0;
// }


// // 3. Calculaet percentage of 4 subject where each subject marks is out of 40

// #include<stdio.h>

// int main(){

//     float m1  = 30;
//     float m2 = 35;
//     float m3 = 28;
//     float m4 = 32;
//     float p = ((m1+m2+m3+m4)/160) * 100;
//     printf("Percentage is : %f" , p);

//     return 0;
// }


// 4. Calculaet Simple Interest

// #include<stdio.h>
// int main(){

//     float p,r,n,si;
//     p = 2000;
//     r = 8;
//     n = 2;
//     si = (p*r*n)/100;
    
//     printf("Simple interest is : %f",si);

//     return 0;
// }