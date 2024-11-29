#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// 1. Classes and Objects
class Person
{
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Member function
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 2. Data Encapsulation
class EncapsulationExample
{
private:
    int privateVar;

public:
    void setVar(int value)
    {
        privateVar = value;
    }
    int getVar()
    {
        return privateVar;
    }
};

// 3. Constructor and Destructor
class ConstructorDestructor
{
public:
    ConstructorDestructor()
    {
        cout << "Constructor called!" << endl;
    }
    ~ConstructorDestructor()
    {
        cout << "Destructor called!" << endl;
    }
};

// 4. Function Overloading
class OverloadingExample
{
public:
    void display(int x)
    {
        cout << "Integer: " << x << endl;
    }
    void display(double x)
    {
        cout << "Double: " << x << endl;
    }
};

// 5. Operator Overloading
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

// 6. Inheritance
class Base
{
public:
    void displayBase()
    {
        cout << "Base class function" << endl;
    }
};
class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << "Derived class function" << endl;
    }
};

// 7. Polymorphism
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

// 8. Abstract Class and Interface
class AbstractClass
{
public:
    virtual void show() = 0; // Pure virtual function
};
class ConcreteClass : public AbstractClass
{
public:
    void show() override
    {
        cout << "Implementation of abstract class" << endl;
    }
};

// 9. Composition and Aggregation
class Engine
{
public:
    void start()
    {
        cout << "Engine starts" << endl;
    }
};
class Car
{
private:
    Engine engine; // Composition

public:
    void drive()
    {
        engine.start();
        cout << "Car is driving" << endl;
    }
};

// 10. Templates
template <typename T>
class TemplateExample
{
private:
    T data;

public:
    TemplateExample(T val) : data(val) {}
    void display()
    {
        cout << "Data: " << data << endl;
    }
};

// 11. Exception Handling
void exceptionExample()
{
    try
    {
        throw runtime_error("An error occurred");
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
}

// 12. File Processing
void fileProcessingExample()
{
    // Write to file
    ofstream outFile("example.txt");
    outFile << "This is an example of file handling in C++." << endl;
    outFile.close();

    // Read from file
    ifstream inFile("example.txt");
    string content;
    while (getline(inFile, content))
    {
        cout << content << endl;
    }
    inFile.close();
}

int main()
{
    // Demonstrate Classes and Objects
    Person p1("John", 25);
    p1.display();

    // Demonstrate Data Encapsulation
    EncapsulationExample encap;
    encap.setVar(42);
    cout << "Encapsulated variable: " << encap.getVar() << endl;

    // Constructor and Destructor
    ConstructorDestructor obj;

    // Function Overloading
    OverloadingExample over;
    over.display(10);
    over.display(3.14);

    // Operator Overloading
    Complex c1(2, 3), c2(1, 4);
    Complex c3 = c1 + c2;
    c3.display();

    // Inheritance
    Derived d;
    d.displayBase();
    d.displayDerived();

    // Polymorphism
    Animal *a = new Dog();
    a->sound();
    delete a;

    // Abstract Class
    ConcreteClass cc;
    cc.show();

    // Composition
    Car myCar;
    myCar.drive();

    // Templates
    TemplateExample<int> temp(100);
    temp.display();

    // Exception Handling
    exceptionExample();

    // File Processing
    fileProcessingExample();

    return 0;
}
