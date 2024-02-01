// AdventOfCode2023.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
using namespace std;

#include "SolutionOne.h"
#include "SolutionOnePartTwo.h"

int main()
{
	solutions::SolutionOne solutionOne;
	cout << "The answer for day 1 part 1 is : " << solutionOne.answer() << endl;
	solutions::SolutionOnePartTwo solutionOnePartTwo;
	cout << "The answer for day 1 part 2 is : " << solutionOnePartTwo.answer() << endl;
	return 0;
}
