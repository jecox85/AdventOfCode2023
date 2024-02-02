#ifndef SOLUTION_TWO_PART_TWO_H
#define SOLUTION_TWO_PART_TWO_H

#include "ISolution.h"

namespace solutions
{

	class SolutionTwoPartTwo : public ISolution
	{
	public:
		SolutionTwoPartTwo();
		std::string answer() override;
	private:
		void work() override;
		std::string m_answer;
		int m_totalPower;
	};
} // namespace solutions
#endif //SOLUTION_TWO_PART_TWO_H



