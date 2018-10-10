// auto and template have the exact same behaviour

/************************************************/

auto x = 27;  // x is int

// is the same as

template <typename T>
void func_for_x(T param);

func_for_x(27);  // T is int
                 // param is int

/************************************************/

const auto cx = x;  // cx is const int

// is the same as

template <typename T>
void func_for_cx(const T param);

func_for_cx(x);  // T is int
                 // param is const int

/************************************************/

const auto& rx = x;  // rx is const int&

// is the same as

template <typename T>
void func_for_rx(const T& param);

func_for_rx(x);  // T is int
                 // param is const int&

/************************************************/

auto&& uref1 = x;  // x is int and lvalue,
                   // so uref1 is int&

// is the same as

template <typename T>
void func_for_uref1(T&& param);

func_for_uref1(x);  // T is int&
                    // param is int&

/************************************************/

auto&& uref2 = cx;  // cx is const int and lvalue,
                    // so uref2 is const int&

// is the same as

template <typename T>
void func_for_uref2(T&& param);

func_for_uref2(cx);  // T is const int&
                    // param is const int&

/************************************************/

auto&& uref3 = 42;  // 42 is int and rvalue,
                    // so uref3 is int&&

// is the same as

template <typename T>
void func_for_uref3(T&& param);

func_for_uref3(42);  // T is int
                    // param is int&&

/************************************************/

const char name[] = "Scott Meyers";

auto arr1 = name;  // arr1 is const char*

// is the same as

template <typename T>
void func_for_arr1(T param);

func_for_arr1(name);  // T is const char*
                      // param is const char*

/************************************************/

const char name[] = "Scott Meyers";

auto& arr2 = name;  // arr2 is const char (&)[13]

// is the same as

template <typename T>
void func_for_arr2(T& param);

func_for_arr2(name);  // T is const char [13]
                      // param is const char (&)[13]

/************************************************/
