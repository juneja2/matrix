#include "complexNumber.h"
#include <iostream>
complexNumber::complexNumber(double r, double i) {
	real = r;
	imaginary = i;
}
complexNumber complexNumber::operator*(const complexNumber & c) {
	complexNumber a;
	a.real = real * c.real - imaginary * c.imaginary;
	a.imaginary = real * c.imaginary + c.real*imaginary;
	return a;
}
complexNumber complexNumber::operator+(const complexNumber & c) {
	complexNumber a;
	a.real = real + c.real;
	a.imaginary = imaginary + c.imaginary;
	return a;
}
bool operator==(const complexNumber& c)const{
	return (real == c.real && imaginary == c.imaginary);
}
ostream& operator<<(ostream& out, const complexNumber& c) {
	out << "Complex Number = " << c.real << " + i(" << c.imaginary << ")\n";
	return out;
}
istream& operator>>(istream& in, complexNumber& c) {
	cout << "Please enter real and imaginary part ";
	in >> c.real >> c.imaginary;
	return in;
}