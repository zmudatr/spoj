// PRIME1 - Prime Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int cases = 0;
	(void)scanf("%i", &cases);
	int *lowTab = new int[cases];
	int *maxTab = new int[cases];

	for (int i = 0; i < cases; i++)
	{
		(void)scanf("%i %i", &lowTab[i], &maxTab[i]);       // first range for example 2-5
	}

	for (int i = 0; i < cases; i++)			// how many queries -> ie = 2
	{
		if (lowTab[i] < 2) lowTab[i] = 2;

		for (int value = lowTab[i]; value <= maxTab[i]; value++)	// for  (!1), 2, 3, 4, 5..10
		{
			bool flag = true;
			int valueSqrt = sqrt(value);
			
			for (int k = 2; k <= valueSqrt; k++)		// if number 2.. 3.. 4.. 5..
			{
				if (value % k == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag == true) cout << value << endl;
		}
		cout << endl;
	}

	delete []lowTab;
	delete []maxTab;
}


/*

Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.

Example
Input:
2
1 10
3 5

Output:
2
3
5
7

3
5
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
