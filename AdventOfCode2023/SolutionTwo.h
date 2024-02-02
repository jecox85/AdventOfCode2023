#ifndef SOLUTION_TWO_H
#define SOLUTION_TWO_H

#include "ISolution.h"

namespace solutions
{

	class SolutionTwo : public ISolution
	{
	public:
		SolutionTwo();
		std::string answer() override;
	private:
		void work() override;
		std::string m_answer;
		const int m_maxRed = 12;
		const int m_maxGreen = 13;
		const int m_maxBlue = 14;
		int m_totalSum;
	};
} // namespace solutions
#endif //SOLUTION_TWO_H



