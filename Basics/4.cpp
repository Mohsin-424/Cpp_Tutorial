// Types of Inheritance in C++
// Single Inheritance: A derived class inherits from one base class.
// Multilevel Inheritance: A class inherits from another derived class.
// Multiple Inheritance: A class inherits from more than one base class.
// Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
// Hybrid Inheritance: A combination of multiple and multilevel inheritance.

// 1. Single Inheritance
// #include <iostream>
// using namespace std;

// class Animal
// { // Base class
// public:
//     void eat()
//     {
//         cout << "This animal can eat." << endl;
//     }
// };

// class Dog : public Animal
// { // Derived class
// public:
//     void bark()
//     {
//         cout << "This dog can bark." << endl;
//     }
// };

// int main()
// {
//     Dog myDog;
//     myDog.eat();  // Inherited from Animal
//     myDog.bark(); // Defined in Dog
//     return 0;
// }
// 2. Multilevel Inheritance
// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "This animal can eat." << endl;
//     }
// };

// class Mammal : public Animal
// {
// public:
//     void walk()
//     {
//         cout << "This mammal can walk." << endl;
//     }
// };

// class Dog : public Mammal
// {
// public:
//     void bark()
//     {
//         cout << "This dog can bark." << endl;
//     }
// };

// int main()
// {
//     Dog myDog;
//     myDog.eat();  // Inherited from Animal
//     myDog.walk(); // Inherited from Mammal
//     myDog.bark(); // Defined in Dog
//     return 0;
// }

// 3. Multiple Inheritance
// #include <iostream>
// using namespace std;

// class Engine
// {
// public:
//     void start()
//     {
//         cout << "Engine started." << endl;
//     }
// };

// class Wheels
// {
// public:
//     void rotate()
//     {
//         cout << "Wheels are rotating." << endl;
//     }
// };

// class Car : public Engine, public Wheels
// {
// public:
//     void drive()
//     {
//         cout << "Car is driving." << endl;
//     }
// };

// int main()
// {
//     Car myCar;
//     myCar.start();  // From Engine
//     myCar.rotate(); // From Wheels
//     myCar.drive();  // Defined in Car
//     return 0;
// }

// 4.Hierarchial __inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "This animal can eat." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "This dog can bark." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "This cat can meow." << endl;
    }
};
class Horse : public Animal
{
public:
    void Run()
    {
        cout << "This horse can run fast" << endl;
    }
};

int main()
{
    Dog myDog;
    Cat myCat;

    myDog.eat();
    myDog.bark();

    myCat.eat();
    myCat.meow();
    Horse myHorse;
    myHorse.Run();

    return 0;
}
