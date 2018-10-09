template <typename T>
void f(T&& param);  // param is universal reference

int main()
{
  int x = 42;
  const int cx = x;
  const int& rx = x;

  f(x);   // x is lvalue, so T is int&
          // param is int&

  f(cx);  // cx is lvalue, so T is const int&
          // param is const int&

  f(rx);  // rx is lvalue, so T is const int&
          // param is const int&

  f(42);  // 42 is rvalue, so T is int
          // param is int&&
}
