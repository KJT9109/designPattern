#include <stdio.h>
#include "Calculator.h"
#include "Add.h"
#include "Subtract.h"

int main()
{
  Calculator calculator{};

  auto op1 = std::make_unique<Add>( 4 );
  auto op2 = std::make_unique<Add>( 5 );
  auto op3 = std::make_unique<Add>( 6 );

  auto op4 = std::make_unique<Add>( 1 );
  auto op5 = std::make_unique<Subtract>( 2 );
  auto op6 = std::make_unique<Subtract>( 3 );

  calculator.compute( std::move(op1) );
  calculator.compute( std::move(op2) );
  calculator.compute( std::move(op3) );
  calculator.compute( std::move(op4) );
  calculator.compute( std::move(op5) );
  calculator.compute( std::move(op6) );

  int const res = calculator.result();

  printf(" calculator : %d \n", res);

};

