#include <iostream>
using namespace std;

// Class template with default type
template <class T = int>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T multiply()
    {
        return a * b;
    }
};

// Multiple template parameters
template <class T, class U>
class Pair
{
    T first;
    U second;

public:
    Pair(T a, U b)
    {
        first = a;
        second = b;
    }

    void display()
    {
        cout << "First: " << first<< ", Second: " << second << endl;
    }
};

// Template specialization for char type
template <>
class Calculator<char>
{
    char a, b;

public:
    Calculator(char x, char y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "Characters: " << a << " and " << b << endl;
    }
};

int main()
{
    // Using default type (int)
    Calculator<> c1(10, 5);
    cout << "Addition: " << c1.add() << endl;
    cout << "Multiplication: " << c1.multiply() << endl;

    // Using double
    Calculator<double> c2(2.5, 3.5);
    cout << "Addition (double): " << c2.add() << endl;

    // Using specialized version
    Calculator<char> c3('A', 'B');
    c3.show();

    // Pair class with different types
    Pair<int, string> p1(1, "Hello");
    p1.display();

    Pair<double, char> p2(3.14, 'X');
    p2.display();

    return 0;
}