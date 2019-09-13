#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct complex{
	float real;
	float imag;
};
typedef struct complex Complex;

//letra a
Complex soma(Complex c1, Complex c2){
	Complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	return c3;
}
//letra b
Complex sub(Complex c1, Complex c2){
	Complex c3;
	c3.real = c1.real - c2.real;
	c3.imag = c1.imag - c2.imag;
	return c3;
}
//letra c
Complex multesc(float n, Complex c1){
	c1.real = c1.real * n;
	c1.imag = c1.imag * n;
	return c1;
}
//letra d
Complex mult(Complex c1, Complex c2){
	Complex c3;
	c3.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	c3.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
	return c3;
}
//letra e
float norma(Complex c1){ 

	c1.real = pow(c1.real,2);
	c1.imag = pow(c1.imag,2);
	 
	
	return sqrt(c1.real+c1.imag);
}
//letra f
Complex conj(Complex c1){
	c1.imag = -c1.imag;
	
	return c1;
}

//letra g
Complex divi(Complex c1, Complex c2){ 
	float den;
	den = pow(c2.real,2)+pow(c2.imag,2); 
	Complex c3;
	c3 = mult(c1,c2);
	c3.real = c3.real/den;
	c3.imag = c3.imag/den; 
	
	return c3;
}

int main(){
	
	Complex c1 = {4,5};
	Complex c2 = {6,5};
	Complex c3 = soma(c1,c2);
	
	printf("c1 real: %.2f c1 imag:%.2f\n",c1.real, c1.imag);
	printf("c2 real: %.2f c2 imag:%.2f\n",c2.real, c2.imag);
	printf("c3 real: %.2f c3 imag:%.2f\n",c3.real, c3.imag);
	c3 = sub(c1,c2);
	printf("\n**Subtracao**\n real: %.2f imag:%.2f\n",c3.real, c3.imag);
	c3 = multesc(2,c1);
	printf("\n**Multiplicacao por Escalar(2)**\n real: %.2f imag:%.2f\n", c3.real, c3.imag);
	c3 = mult(c1,c2);
	printf("\n**Multiplicacao c1 X c2**\n real: %.2f imag:%.2f\n", c3.real, c3.imag);
	printf("\n**Norma de C1**\n %.2f\n", norma(c1));
	c3 = conj(c2);
	printf("\n**Conjugado de C2**\n real: %.2f imag:%.2f\n", c3.real, c3.imag);
	c3 = divi(c1,c2);
	printf("\n**divisao c1 X c2**\n real: %.2f imag:%.2f\n", c3.real, c3.imag);
  
	return 0;	
}
