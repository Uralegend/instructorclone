#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	// made sure to put them in parentheses to make sure the sum of the 3 is divided by 3.0f
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	// corrected to store input in n3
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}