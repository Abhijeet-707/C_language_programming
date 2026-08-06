// 1. Given three points (x1,y1) , (x2,y2) and (x3, y3) write a program to check if all the three points fall on one straight line.

#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2,x3,y3;

    printf("Enter x1 y1: ");
    scanf("%lf %lf",&x1,&y1);

    printf("Enter x2 y2: ");
    scanf("%lf %lf",&x2,&y2);

    printf("Enter x3 y3: ");
    scanf("%lf %lf",&x3,&y3);

    if ((x2-x1)==0 || (x3-x2)==0) {
        printf("Vertical line case");
        return 0;
    }

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);

    if (fabs(m1-m2) < 0.000001)
        printf("All three points lie on a straight line");
    else
        printf("All three points do not lie on a straight line");

    return 0;
}