#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include "CalculatorCommand.h"
#include <stack>

class Calculator
{
  public:
	void compute( std::unique_ptr<CalculatorCommand> command );
	void undoLast();

	int result() const;
	void clear();

  private:
	using CommandStack = std::stack<std::unique_ptr<CalculatorCommand>>;

	int current_{};
	CommandStack stack_;
};



#endif

