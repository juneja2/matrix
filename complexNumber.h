
#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
#include <iostream>
using namespace std;
class complexNumber {
private:
	double real;
	double imaginary;
public:
	complexNumber(double = 0, double = 0);
	friend ostream& operator<<(ostream&, const complexNumber&);
	friend istream& operator>>(istream&, complexNumber&);
	complexNumber operator*(const complexNumber & c);
	complexNumber operator+(const complexNumber & c);
	bool operator==(const complexNumber& c)const;
};
#endif
