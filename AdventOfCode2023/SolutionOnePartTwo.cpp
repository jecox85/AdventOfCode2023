#include "SolutionOnePartTwo.h"

#include <fstream>

namespace solutions
{
SolutionOnePartTwo::SolutionOnePartTwo() : m_totalSum(0)
{
	work();
}

std::string SolutionOnePartTwo::answer()
{
	return m_answer;
}

/**
	* Something is wrong with global snow production, and you've been selected to
	* take a look. The Elves have even given you a map; on it, they've used stars
	* to mark the top fifty locations that are likely to be having problems.
	*
	* You've been doing this long enough to know that to restore snow operations,
	* you need to check all fifty stars by December 25th.
	*
	* Collect stars by solving puzzles. Two puzzles will be made available on
	* each day in the Advent calendar; the second puzzle is unlocked when you
	* complete the first. Each puzzle grants one star. Good luck!
	*
	* You try to ask why they can't just use a weather machine ("not powerful
	* enough") and where they're even sending you ("the sky") and why your map
	* looks mostly blank ("you sure ask a lot of questions") and hang on did you
	* just say the sky ("of course, where do you think snow comes from") when you
	* realize that the Elves are already loading you into a trebuchet ("please
	* hold still, we need to strap you in").
	*
	* As they're making the final adjustments, they discover that their
	* calibration document (your puzzle input) has been amended by a very young
	* Elf who was apparently just excited to show off her art skills.
	* Consequently, the Elves are having trouble reading the values on the
	* document.
	*
	* The newly-improved calibration document consists of lines of text; each
	* line originally contained a specific calibration value that the Elves now
	* need to recover. On each line, the calibration value can be found by
	* combining the first digit and the last digit (in that order) to form a
	* single two-digit number.
	*
	* For example:
	* 1abc2
	* pqr3stu8vwx
	* a1b2c3d4e5f
	* treb7uchet
	*
	* In this example, the calibration values of these four lines are 12, 38, 15,
	* and 77. Adding these together produces 142.
	*
	* Consider your entire calibration document. What is the sum of all of the
	* calibration values?
	*
	* --- Part Two ---
	* Your calculation isn't quite right. It looks like some of the digits are 
	* actually spelled out with letters: one, two, three, four, five, six, seven, 
	* eight, and nine also count as valid "digits".
	* 
	* Equipped with this new information, you now need to find the real first and 
	* last digit on each line. For example:
	* 
*/
void SolutionOnePartTwo::work()
{
	std::ifstream solutionOneFile;
	solutionOneFile.open("SolutionOne.txt");
	std::string tempLine;
	char firstValue;
	char secondValue;
	std::string fullValue = "";
	NumberLocation tempNumberLocation;

	if (solutionOneFile.is_open())
	{
		//char '0' = 48
		//char '9' = 57
		while (getline(solutionOneFile, tempLine))
		{
			//get first value char
			tempNumberLocation = getFirstLetteredPos(tempLine);
			firstValue = tempNumberLocation.number;
			for (int i = 0; i < tempLine.size(); i++)
			{
				if (i > tempNumberLocation.location && tempNumberLocation.location != -1)
				{
					break;
				}
				else if (tempLine[i] >= 48 && tempLine[i] <= 57)
				{
					firstValue = tempLine[i];
					break;
				}
			}
			//get second value char
			tempNumberLocation = getLastLetteredPos(tempLine);
			secondValue = tempNumberLocation.number;
			for (int i = static_cast<int>(tempLine.size()) - 1; i >= 0; i--)
			{
				if (i < tempNumberLocation.location && tempNumberLocation.location != -1)
				{
					break;
				}
				else if (tempLine[i] >= 48 && tempLine[i] <= 57)
				{
					secondValue = tempLine[i];
					break;
				}
			}
			//concatenate chars into fullValue string
			fullValue = { firstValue, secondValue };
			//convert fullValue to int and add to m_totalSum.
			m_totalSum += stoi(fullValue);
		}
		m_answer = std::to_string(m_totalSum);
	}
	else
	{

		m_answer = "Error opening file.";
	}
	solutionOneFile.close();
}


SolutionOnePartTwo::NumberLocation SolutionOnePartTwo::getFirstLetteredPos(std::string s)
{
	NumberLocation thisNumberLocation;
	thisNumberLocation.location = 99999;
	int tempLocation;
	tempLocation = s.find("one");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '1';
	}
	tempLocation = s.find("two");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '2';
	}
	tempLocation = s.find("three");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '3';
	}
	tempLocation = s.find("four");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '4';
	}
	tempLocation = s.find("five");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '5';
	}
	tempLocation = s.find("six");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '6';
	}
	tempLocation = s.find("seven");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '7';
	}
	tempLocation = s.find("eight");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '8';
	}
	tempLocation = s.find("nine");
	if ((tempLocation != -1) && (tempLocation < thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '9';
	}
	if (thisNumberLocation.location == 99999)
	{
		thisNumberLocation.location = -1;
		thisNumberLocation.number = '0';
	}
	return thisNumberLocation;
}
SolutionOnePartTwo::NumberLocation SolutionOnePartTwo::getLastLetteredPos(std::string s)
{
	NumberLocation thisNumberLocation;
	thisNumberLocation.location = -1;
	int tempLocation;
	tempLocation = s.rfind("one");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '1';
	}
	tempLocation = s.rfind("two");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '2';
	}
	tempLocation = s.rfind("three");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '3';
	}
	tempLocation = s.rfind("four");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '4';
	}
	tempLocation = s.rfind("five");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '5';
	}
	tempLocation = s.rfind("six");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '6';
	}
	tempLocation = s.rfind("seven");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '7';
	}
	tempLocation = s.rfind("eight");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '8';
	}
	tempLocation = s.rfind("nine");
	if ((tempLocation != -1) && (tempLocation > thisNumberLocation.location))
	{
		thisNumberLocation.location = tempLocation;
		thisNumberLocation.number = '9';
	}
	if (thisNumberLocation.location == -1)
	{
		thisNumberLocation.number = '0';
	}
	return thisNumberLocation;
}
}// namespace solutions