template <typename T>
void f(T param);  // param is passed by value

int main()
{
  int x = 42;
  const int cx = x;
  const int& rx = x;
  const char* const ptr = "Blah";

  f(x);   // T is int
          // param is int

  f(cx);  // T is int
          // param is int

  f(rx);  // T is int
          // param is int

  f(ptr); // T and param are const char*
}
