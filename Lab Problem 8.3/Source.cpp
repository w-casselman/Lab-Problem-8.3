// P8-3
// Wesley Casselman
// October 19th, 2023

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int convertRomanToInt(string s);

int main(void)
{
	while (true)
	{
		string str;
		cout << "Enter Roman number or Q to quit: ";
		cin >> str;

		if (str == "Q")
		{
			break;
		}

		cout << str << " = " << convertRomanToInt(str) << endl;
	}

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

int convertRomanToInt(string s)
{
	int n = 0;
	int level = 0;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		int b = romanCharValue(s[i]);
		
		if (b >= level)
		{
			n += b;
			level = b;
		}
		else
		{
			n -= b;
		}
	}

	return n;
}