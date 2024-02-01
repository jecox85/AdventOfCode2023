#ifndef SOLUTION_ONE_PART_TWO_H
#define SOLUTION_ONE_PART_TWO_H

#include "ISolution.h"

namespace solutions
{


	class SolutionOnePartTwo :
		public ISolution
	{
	public:
		SolutionOnePartTwo();
		std::string answer() override;

	private:
		struct NumberLocation {
			char number;
			int location;
		};
		void work() override;
		std::string m_answer;
		int m_totalSum;
		NumberLocation getFirstLetteredPos(std::string);
		NumberLocation getLastLetteredPos(std::string);
	};
} //namespace solutions

#endif //SOLUTION_ONE_PART_TWO_H