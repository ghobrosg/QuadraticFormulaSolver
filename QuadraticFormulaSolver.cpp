// QuadraticFormulaSolver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	double delta = (b * b) - (4 * a * c);
	double sol1 = (-b + sqrt(delta)) / (2 * a);
	double sol2 = (-b - sqrt(delta)) / (2 * a);
	if (a == 0.0) {
		sol1 = -c / b;
		cout << sol1 << endl;
		return 0;
	}
	if (delta > 0) {
		cout << "There are 2 solutions" << endl;
		cout << "First solution is" << ": " << sol1 << endl;
		cout << "Second solution is" << ": " << sol2 << endl;
	}
	else if (delta ==0) {
		cout << "There is one solution" << endl;
		cout << "The solution is" << ": " << sol1 << endl;
	}
	else if (delta < 0){
		cout << "There are no solutions" << endl;
	}
	system("pause");
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
