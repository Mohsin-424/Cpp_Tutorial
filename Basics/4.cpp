// Types of Inheritance in C++
// Single Inheritance: A derived class inherits from one base class.
// Multilevel Inheritance: A class inherits from another derived class.
// Multiple Inheritance: A class inherits from more than one base class.
// Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
// Hybrid Inheritance: A combination of multiple and multilevel inheritance.

#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

// --------------------------------------
// 1. Single Inheritance
// The Dog class inherits from Animal class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

// // --------------------------------------
// // 2. Multilevel Inheritance
// // The Puppy class inherits from Dog, which inherits from Animal
// class Puppy : public Dog
// {
// public:
//     void play()
//     {
//         cout << "Playing..." << endl;
//     }
// };

// // --------------------------------------
// // 3. Multiple Inheritance
// // DogSwimmer class inherits from both Dog and Swimmer classes
// class Swimmer
// {
// public:
//     void swim()
//     {
//         cout << "Swimming..." << endl;
//     }
// };

// class DogSwimmer : public Dog, public Swimmer
// {
// public:
//     void dogSwim()
//     {
//         cout << "Dog is swimming..." << endl;
//     }
// };

// // --------------------------------------
// // 4. Hierarchical Inheritance
// // Both Dog and Cat classes inherit from the Animal class
// class Cat : public Animal
// {
// public:
//     void meow()
//     {
//         cout << "Meowing..." << endl;
//     }
// };

// // --------------------------------------
// // 5. Hybrid Inheritance
// // Hybrid class demonstrates both Multiple and Multilevel Inheritance
// class Hybrid : public Dog, public Swimmer
// {
// public:
//     void hybridBehavior()
//     {
//         cout << "Hybrid behavior..." << endl;
//     }
// };

// int main()
// {
//     // --------------------------------------
//     // Demonstrating Single Inheritance
//     Dog dog;
//     cout << "Single Inheritance:" << endl;
//     dog.eat();  // Inherited from Animal
//     dog.bark(); // Defined in Dog
//     cout << endl;

//     // --------------------------------------
//     // Demonstrating Multilevel Inheritance
//     Puppy puppy;
//     cout << "Multilevel Inheritance:" << endl;
//     puppy.eat();  // Inherited from Animal through Dog
//     puppy.bark(); // Inherited from Dog
//     puppy.play(); // Defined in Puppy
//     cout << endl;

//     // --------------------------------------
//     // Demonstrating Multiple Inheritance
//     DogSwimmer dogSwimmer;
//     cout << "Multiple Inheritance:" << endl;
//     dogSwimmer.eat();     // Inherited from Animal through Dog
//     dogSwimmer.bark();    // Inherited from Dog
//     dogSwimmer.swim();    // Inherited from Swimmer
//     dogSwimmer.dogSwim(); // Defined in DogSwimmer
//     cout << endl;

//     // --------------------------------------
//     // Demonstrating Hierarchical Inheritance
//     Cat cat;
//     cout << "Hierarchical Inheritance:" << endl;
//     cat.eat();  // Inherited from Animal
//     cat.meow(); // Defined in Cat
//     cout << endl;

//     // --------------------------------------
//     // Demonstrating Hybrid Inheritance
//     Hybrid hybrid;
//     cout << "Hybrid Inheritance:" << endl;
//     hybrid.eat();            // Inherited from Animal through Dog
//     hybrid.bark();           // Inherited from Dog
//     hybrid.swim();           // Inherited from Swimmer
//     hybrid.hybridBehavior(); // Defined in Hybrid
//     cout << endl;

//     return 0;
// }

// // Abstraction
// #include <iostream>
// using namespace std;

// // Abstract base class
// class Shape
// {
// public:
//     virtual void draw() = 0;   // Pure virtual function
//     virtual double area() = 0; // Pure virtual function
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}
//     void draw() override
//     {
//         cout << "Drawing a Circle." << endl;
//     }
//     double area() override
//     {
//         return 3.14 * radius * radius;
//     }
// };

// class Rectangle : public Shape
// {
// private:
//     double length, width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}
//     void draw() override
//     {
//         cout << "Drawing a Rectangle." << endl;
//     }
//     double area() override
//     {
//         return length * width;
//     }
// };

// int main()
// {
//     Shape *shape1 = new Circle(5.0);
//     Shape *shape2 = new Rectangle(4.0, 6.0);

//     shape1->draw();
//     cout << "Area: " << shape1->area() << endl;

//     shape2->draw();
//     cout << "Area: " << shape2->area() << endl;

//     delete shape1;
//     delete shape2;

//     return 0;
// }
