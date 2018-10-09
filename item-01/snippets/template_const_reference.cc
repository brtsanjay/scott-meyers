template <typename T>
void f(const T& param);

int main()
{
  int x = 42;
  const int cx = x;
  const int& rx = x;

  f(x);   // T is int
          // param is const int&

  f(cx);  // T is int
          // param is const int&

  f(rx);  // T is int
          // param is const int&
}
