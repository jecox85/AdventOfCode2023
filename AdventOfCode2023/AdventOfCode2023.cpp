// AdventOfCode2023.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
using namespace std;

#include "SolutionOne.h"
#include "SolutionOnePartTwo.h"
#include "SolutionTwo.h"
#include "SolutionTwoPartTwo.h"

int main()
{
	solutions::SolutionOne solutionOne;
	cout << "The answer for day 1 part 1 is : " << solutionOne.answer() << endl;
	solutions::SolutionOnePartTwo solutionOnePartTwo;
	cout << "The answer for day 1 part 2 is : " << solutionOnePartTwo.answer() << endl;
	solutions::SolutionTwo solutionTwo;
	cout << "The answer for day 2 part 1 is : " << solutionTwo.answer() << endl;
	solutions::SolutionTwoPartTwo solutionTwoPartTwo;
	cout << "The answer for day 2 part 2 is : " << solutionTwoPartTwo.answer() << endl;
	return 0;
}
