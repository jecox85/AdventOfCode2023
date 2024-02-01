#ifndef ISOLUTION_H
#define ISOLUTION_H
#include <string>

namespace solutions {

	class ISolution
	{
	public:
		virtual ~ISolution();

		/**
		 * @brief Function for returning the solution.
		 * @return solution 
		*/
		virtual std::string answer() = 0;
	private:
		/**
		 * @brief Does the work and saves the solution in a member variable.
		*/
		virtual void work() = 0;

		/**
		 * @brief Member variable that saves the answer to the solution.
		*/
		std::string m_answer;
		
};
}
#endif //ISOLUTION_H

