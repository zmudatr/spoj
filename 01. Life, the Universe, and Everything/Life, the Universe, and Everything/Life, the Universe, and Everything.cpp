// Life, the Universe, and Everything.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	int value = 0;
	
	cin >> value;
	if (value != 42)
	{
		while (value != 42)
		{

			cout << value << endl;
			cin >> value;

		}
	}
}

/*
TEST - Life, the Universe, and Everything
#basic #tutorial #ad-hoc-1
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.


Example
Input:
1
2
88
42
99

Output:
1
2
88
*/