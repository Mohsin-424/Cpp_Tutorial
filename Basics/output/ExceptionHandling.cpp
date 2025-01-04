// Exception handling in C++ allows programs to deal with runtime errors(exceptions) without crashing. C++ provides the try, catch, and throw keywords for exception handling.

#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero error"; // Throwing an exception
    }
    return a / b;
}

int main()
{
    int x = 10, y = 0;

    try
    {
        int result = divide(x, y); // This will throw an exception
        cout << "Result: " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl; // Catching the exception
    }

    return 0;
}

// With Multiple Catch Blocks
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 42; // Throwing an integer
    }
    catch (int e)
    {
        cout << "Caught integer: " << e << endl;
    }
    catch (const char *msg)
    {
        cout << "Caught string: " << msg << endl;
    }
    return 0;
}
