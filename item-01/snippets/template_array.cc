template <typename T>
void f(T param);

template <typename T>
void g(T& param);

int main()
{
  const char name[] = "Scott Meyers";  // type is const char [13]
  const char* ptr_to_name = name;

  f(name);  // T is const char*
  g(name);  // T is const char [13]
            // param is const char (&)[13]
}
