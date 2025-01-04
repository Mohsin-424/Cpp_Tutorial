#include <iostream>
using namespace std;

class Print
{
public:
    // Function to print integer
    void display(int i)
    {
        cout << "Integer: " << i << endl;
    }

    // Function to print double
    void display(double d)
    {
        cout << "Double: " << d << endl;
    }

    // Function to print string
    void display(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print obj;

    // Calling overloaded functions
    obj.display(10);       // Integer
    obj.display(10.5);     // Double
    obj.display("Hello!"); // String

    return 0;
}

// Example 2
#include <iostream>
using namespace std;

class Animal
{
public:
    // Virtual function to be overridden in derived class
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    // Overriding the sound function
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    // Overriding the sound function
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Creating base class pointers
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    // Calling virtual function
    animal1->sound(); // Output: Dog barks
    animal2->sound(); // Output: Cat meows

    delete animal1;
    delete animal2;

    return 0;
}

// Example 3
#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Virtual destructor (important for proper cleanup)
    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    // Creating objects of derived classes using base class pointers
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();

    shape1->draw(); // Output: Drawing a Circle
    shape2->draw(); // Output: Drawing a Rectangle

    delete shape1;
    delete shape2;

    return 0;
}
