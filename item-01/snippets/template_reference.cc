template <typename T>
void f(T& param);

int main()
{
  int x = 42;
  const int cx = x;
  const int& rx = x;

  f(x);   // T is int
          // param is int&

  f(cx);  // T is const int
          // param is const int&

  f(rx);  // T is const int
          // param is const int&
}
