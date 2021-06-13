#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

// function to explain use of exp() function
double application(double x) {
	double result = exp(x);
	cout << "exp(x) = " << result << endl;
	return result;
}

// driver program
int main() {
	double x = 10;
	cout << application(x);

	_getch();
	return 0;
}
