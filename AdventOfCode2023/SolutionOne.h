#ifndef SOLUTION_ONE_H
#define SOLUTION_ONE_H

#include "ISolution.h"

namespace solutions 
{
class SolutionOne :
	public ISolution
{
public:
	SolutionOne();
	std::string answer() override;
private:
	void work() override;
	std::string m_answer;
};
} //namespace solutions

#endif //SOLUTION_ONE_H