// CollatzConjecture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
bool isPrime(int);

int main()
{
	int N;
	int prevN=0;
	
	for (size_t j = 2; j < 1000; j++)
	{
		
		int numCount = 0;
		N = j;
		

		while (prevN != 1)
		{
			prevN = N;
			numCount++;
			
			if (N % 2 != 0)
			{
				N *= 3;
				N += 1;

			}
			if (N % 2 == 0)
			{
				N /= 2;
			}


		} 
		cout << j << " "<< numCount<<endl;
		//if(isPrime(numCount-1))
		//{
		for (size_t i = 0; i < (numCount-1); i++)
		{
			cout << "*";
		}
		cout << endl;
		//}
	}
    return 0;
}

bool isPrime(int n) {
	return !(n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0 ||n%23==0);
}

