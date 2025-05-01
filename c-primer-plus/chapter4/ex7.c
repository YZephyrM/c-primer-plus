#include <stdio.h>
#include <float.h>
#define n 1.0/3.0

int main()
{
    float f = n;
    double d = n;

    printf("float:\n%.4f\n%.12f\n%.16f\n", f, f, f);
    printf("double:\n%.4f\n%.12f\n%.16f\n", d, d, d);

    printf("FLT_DIG:\n%.4f\n%.12f\n%.16f\n", FLT_DIG, FLT_DIG, FLT_DIG);
    printf("DBL_DIG:\n%.4f\n%.12f\n%.16f\n", DBL_DIG, DBL_DIG, DBL_DIG);
    return 0;
}