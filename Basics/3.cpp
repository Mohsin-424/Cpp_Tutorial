// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Animals speak!" << endl;
//     }
// };

// int main()
// {
//     Animal obj;
//     obj.speak();
//     return 0;
// }

// Classes and Object
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll_no;

//     void display()
//     {
//         cout << "Name: " << name << ", Roll No: " << roll_no << endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.name = "John";
//     s1.roll_no = 101;
//     s1.display();
//     return 0;
// }

// Encapsulation
// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     double balance;

// public:
//     void deposit(double amount)
//     {
//         balance += amount;
//     }
//     void showBalance()
//     {
//         cout << "Balance: $" << balance << endl;
//     }
// };

// int main()
// {
//     BankAccount account;
//     account.deposit(500);
//     account.showBalance();
//     return 0;
// }

// Constructors and Destructors

// Constructor initializes objects automatically when they are created.
// Destructor is called automatically to clean up resources when an object goes out of scope.

// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//     Car()
//     {
//         cout << "Car object created!" << endl;
//     }
//     ~Car()
//     {
//         cout << "Car object destroyed!" << endl;
//     }
// };

// int main()
// {
//     Car myCar;
//     return 0;
// }

// Function and Operator Overloading
// Function Overloading allows multiple functions with the same name but different parameters.
// Operator Overloading redefines operators for custom behavior.

// #include <iostream>
// using namespace std;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     double add(double a, double b)
//     {
//         return a + b;
//     }
// };

// int main()
// {
//     Calculator calc;
//     cout << "Sum (int): " << calc.add(3, 5) << endl;
//     cout << "Sum (double): " << calc.add(3.2, 5.4) << endl;
//     return 0;
// }

// Access Modifiers
#include <iostream>
using namespace std;

class AccessDemo
{
public: // Public members
    string name;
    void setName(string n)
    {
        name = n; // Modifies public member
    }

private: // Private members
    int age;
    void setAge(int a)
    {
        age = a; // Can only be used inside this class
    }

protected: // Protected members
    string protectedData = "This is protected";
};

class DerivedDemo : public AccessDemo
{
public:
    void showProtectedData()
    {
        cout << "Accessing protected data: " << protectedData << endl;
    }
};

int main()
{
    AccessDemo obj;

    // Public access
    obj.setName("John");
    cout << "Name: " << obj.name << endl;

    // Private access
    // obj.setAge(25); // ERROR: Private method, cannot access outside class

    // Protected access (from derived class)
    DerivedDemo derivedObj;
    derivedObj.showProtectedData(); // Can access protectedData via derived class

    return 0;
}
