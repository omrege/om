#include <stdio.h>
#include "complex.h"
typedef struct complex_t{
    int real;
    int img;
} complex_t;

complex_t f(complex_t a, complex_t b){
    complex_t c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
int main(){
    complex_t s1={1,2};
    complex_t s2={3,4};
    complex_t c=f(s1,s2);
    printf("Complex number 1: %d + i%d\n", s1.real, s1.img);
    printf("Complex number 2: %d + i%d\n", s2.real, s2.img);
    printf("Sum of the complex numbers: %d + i%d\n", c.real, c.img);
    return 0;
}