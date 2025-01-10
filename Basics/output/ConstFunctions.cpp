// #include <iostream>

// class MyClass
// {
// private:
//     int value;

// public:
//     // Constructor
//     MyClass(int v) : value(v) {}

//     // Const member function (does not modify the object)
//     int getValue() const
//     {
//         return value;
//     }

//     // Non-const member function (can modify the object)
//     void setValue(int v)
//     {
//         value = v;
//     }

//     // Const function: Cannot call non-const functions
//     void display() const
//     {
//         std::cout << "Value: " << value << std::endl;
//         // setValue(100); // Error: Cannot call non-const function inside const function
//     }
// };

// int main()
// {
//     // Non-const object
//     MyClass obj(10);
//     obj.setValue(20); // Allowed
//     obj.display();    // Allowed

//     // Const object
//     const MyClass constObj(30);

//     std::cout << "Const object value: " << constObj.getValue() << std::endl; // Allowed

//     return 0;
// }

// Non Const Functiion
#include <iostream>

class MyClass
{
private:
    int value;

public:
    // Constructor
    MyClass(int v) : value(v) {}

    // Non-const member function (can modify the object)
    void setValue(int v)
    {
        value = v;
        std::cout << "Value set to: " << value << std::endl;
    }

    // Non-const member function (can access and modify)
    void incrementValue()
    {
        value++;
        std::cout << "Value incremented to: " << value << std::endl;
    }

    // Non-const member function for displaying the value
    void display()
    {
        std::cout << "Current Value: " << value << std::endl;
    }
};

int main()
{
    // Non-const object
    MyClass obj(10);

    // Using non-const member functions
    obj.display();        // Display initial value
    obj.setValue(20);     // Modify value
    obj.incrementValue(); // Increment value
    obj.display();        // Display final value

    return 0;
}
