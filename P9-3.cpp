/*
* File: P9-3.cpp
* Author : Braylon Rieman
* Date : 10 / 31 / 2024
*
* Description : Lab 9 Arrays and Functions
*
*/

#include <iostream>
#include <string>
using namespace std;

//function prototypes
void displayRun(int values[], int size);

int main(void)
{
	//seeds rand
	srand(time(0));

	//variables
	const int size = 20;
	int values[size];

	//fills the array
	for (int i = 0; i < size; i++)
		values[i] = rand() % 6 + 1;

	//displays any runs
	displayRun(values, size);
}

void displayRun(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "(" << values[i] << " " << values[i++] << ") ";
		}
		else
			cout << values[i] << " ";
	}
}
