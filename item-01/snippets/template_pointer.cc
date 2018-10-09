template <typename T>
void f(T* param);

int main()
{
  int x = 42;
  const int* px = &x;

  f(&x);  // T is int
          // param is int*

  f(px);  // T is const int
          // param is const int*
}
