// P8-3
// Wesley Casselman
// October 19th, 2023

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int main(void)
{
	cout << romanCharValue('I') << endl;
	cout << romanCharValue('V') << endl;
	cout << romanCharValue('X') << endl;
	cout << romanCharValue('L') << endl;
	cout << romanCharValue('C') << endl;
	cout << romanCharValue('D') << endl;
	cout << romanCharValue('M') << endl;

	return 0;
}

int romanCharValue(char r)
{
	int n;
	
	switch (r)
	{
	case 'I': n = 1; break;
	case 'V': n = 5; break;
	case 'X': n = 10; break;
	case 'L': n = 50; break;
	case 'C': n = 100; break;
	case 'D': n = 500; break;
	case 'M': n = 1000; break;
	default: n = 0;
	}

	return n;
}