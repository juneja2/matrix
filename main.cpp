#include <iostream>
#include "complexNumber.h"
using namespace std;
int main() {
	complexNumber i;
	cin >> i;
	cout << i;
	complexNumber b(1 , 2);
	cout << "After addition i + b\n";
	cout << i + b;
	cout << "After multiplication i*b\n";
	cout << i * b;
	return 0;
}
/*Output
Please enter real and imaginary part 1 0
Complex Number = 1 + i(0)
After addition i + b
Complex Number = 2 + i(2)
After multiplication i*b
Complex Number = 1 + i(2)
Press any key to continue . . .
*/