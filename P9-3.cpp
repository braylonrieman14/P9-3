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
bool hasRun(int values[], int size);


int main(void)
{
	//variables
	bool checksRun = false;
	const int size = 20;
	int values[size];
	
	//seeds rand
	srand(time(0));

	while (checksRun == false)
	{
		//fills the array
		for (int i = 0; i < size; i++)
			values[i] = rand() % 6 + 1;

		//displays any runs
		displayRun(values, size);

		//displays if there is any runs
		if (hasRun(values, size) == true)
		{
			cout << "\nThere are runs in the rolls.";
			checksRun = true;
		}
		else
			cout << "\nThere are no runs in the rolls.";
	}
}

void displayRun(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "(" << values[i];
			for (int j = i + 1; j <= size; j++)
			{
				if (values[j] == values[i])
					cout << " " << values[j];
				else
				{
					cout << ") ";
					i += j - i - 1;
					break;
				}
			}
		}
		else
		{
			cout << values[i] << " ";
		}
	}
}

bool hasRun(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			return(true);
		}
	}
	return(false);
}
