// Use of auto in parameter and return value declarations
// employ template type deduction

auto createInitList()
{
  return { 1, 2, 3 };  // Error! Can't deduce type
}

/*******************************************************/

std::vector<int> v;

...

auto reset_v =
  [&v](const auto& newValue) { v = newValue; };

...

reset_v({ 1, 2, 3 });  // Error! Can't deduce type
