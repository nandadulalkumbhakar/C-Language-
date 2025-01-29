#include<stdio.h>
typedef struct complex {
float real;
float imag;
} complex;

complex add (complex n1, complex n2);
complex sub (complex n1, complex n2);
complex mul (complex n1, complex n2);
complex div (complex n1, complex n2);

int main() {
	complex n1, n2, result1,result2,rusult3,result4;
	
	printf("For 1st compiex number");
	printf("Enter the real and imainary parts");
	scanf("%f %f ",&n1.real,&n1.imag);
	printf("\n for 2nd complex number \n");
	print("Enter the real and imaginary parts");
	scanf("%f %f ",&n2.real,&n2.imag);
	
	result1 =add(n1,n2);
	result2=sub(n1,n2);
	result3 =mul(n1,n2);
	result4 =div(n1,n2);
	printf("sum= %.lf + %.1fi",result1.real,result1.imag);
    printf("sub= %.lf + %.1fi",result2.real,result2.imag);
    printf("mul= %.lf + %.1fi",result3.real,result3.imag);
    printf("div= %.lf + %.1fi",result4.real,result4.imag);
 
 
 return 0;
}
 
 complex add(|complex n1,complex.n2){
     complex term;
     temp.real=n1.real+n2 real;
     temp.imag=n1.imag+n2.imag;
     return (temp);
 }
 complex sub(complex n1,complex.n2){
     complex term;
     temp.real=n1.real+n2 real;
     temp.imag=n1.imag+n2.imag;
     return (temp);
 }
 complex mul(complex n1,complex.n2){
     complex term;
     temp.real=n1.real+n2 real;
     temp.imag=n1.imag+n2.imag;
     return (temp);
 }
 complex div(complex n1,complex.n2){
     complex term;
     float deno=n2.real*n2.imag*n2.imag;
     temp.real=n1.real+n2 real;
     temp.imag=n1.imag+n2.imag;
     return (temp);
 }
 
