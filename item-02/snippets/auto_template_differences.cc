// auto and template are different in one way

int x1 = 42;   // x1 is int
int x2(42);    // x2 is int
int x3 = {42}; // x3 is int
int x4{42};    // x4 is int

auto x1 = 42;   // x1 is int
auto x2(42);    // x2 is int
auto x3 = {42}; // x3 is std::initializer_list<int>
auto x4{42};    // x4 is std::initializer_list<int>
                // In some new compilers, this is deducted as int

/***************************************************************/

auto x = { 1, 2, 3 };  // x is std::initializer_list<int>

template <typename T>
void f(T param);       // Equivalent to the above

f({ 1, 2, 3 })         // Error! Cannot deduce type for T

/***************************************************************/

template <typename T>
void f(std::initializer_list<T> param);

f({ 1, 2, 3 });  // T is int
                 // param is std::initializer_list<int>
