public class JavaBasics {
    public static void main(String[] args) {
        
        // 1. Variables and Data Types
        // Primitive Data Types
        int age = 25; // Integer
        double height = 5.9; // Double
        char grade = 'A'; // Character
        boolean isStudent = true; // Boolean
        
        // Reference Data Types
        String name = "John"; // String (Reference Type)
        
        // Print variables
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height);
        System.out.println("Grade: " + grade);
        System.out.println("Is Student: " + isStudent);
        
        // 2. Control Structures

        // If-Else Statement
        if (age >= 18) {
            System.out.println(name + " is an adult.");
        } else {
            System.out.println(name + " is a minor.");
        }

        // Switch Statement
        switch (grade) {
            case 'A':
                System.out.println(name + " has excellent grade.");
                break;
            case 'B':
                System.out.println(name + " has good grade.");
                break;
            case 'C':
                System.out.println(name + " has average grade.");
                break;
            default:
                System.out.println(name + " has unknown grade.");
                break;
        }

        // While Loop
        int counter = 0;
        while (counter < 5) {
            System.out.println("Counter value: " + counter);
            counter++;
        }

        // For Loop
        for (int i = 0; i < 5; i++) {
            System.out.println("For loop iteration: " + i);
        }

        // 3. Arrays
        int[] numbers = {1, 2, 3, 4, 5}; // Array of integers
        System.out.println("Array of numbers:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Number at index " + i + ": " + numbers[i]);
        }

        // Multi-dimensional Array
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        System.out.println("2D Array (Matrix):");
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}



// OOP in Java

// 1. Encapsulation
class Person {
    // Private variables
    private String name;
    private int age;
    
    // Public constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    // Getter methods (accessors)
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
    
    // Setter methods (mutators)
    public void setName(String name) {
        this.name = name;
    }
    
    public void setAge(int age) {
        if (age > 0) { // Basic validation
            this.age = age;
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Person person = new Person("John", 25);
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
        
        // Modifying the attributes using setter
        person.setAge(30);
        System.out.println("Updated Age: " + person.getAge());
    }
}



// 2. Inheritance
class Animal {
    // Base class
    public void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    // Derived class
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sound(); // Calls the overridden method
    }
}


// 3. Polymorphism
class Animal {
    public void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal myAnimal = new Dog();  // Parent class reference, child class object
        myAnimal.sound();  // Output: Dog barks
    }
}

// Method Overloading 
class Calculator {
    // Overloaded methods
    public int add(int a, int b) {
        return a + b;
    }

    public double add(double a, double b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(10, 20));  // Calls int add
        System.out.println(calc.add(10.5, 20.5));  // Calls double add
    }
}
// 4. Abstraction
abstract class Shape {
    // Abstract method (does not have a body)
    public abstract void draw();
}

class Circle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a Circle");
    }
}

class Rectangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a Rectangle");
    }
}

public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle();
        Shape rectangle = new Rectangle();
        circle.draw();  // Output: Drawing a Circle
        rectangle.draw();  // Output: Drawing a Rectangle
    }
}
5. // Interface 
interface Drawable {
    void draw();  // Abstract method
}

class Circle implements Drawable {
    @Override
    public void draw() {
        System.out.println("Drawing a Circle");
    }
}

public class Main {
    public static void main(String[] args) {
        Drawable drawable = new Circle();
        drawable.draw();  // Output: Drawing a Circle
    }
}





// Key Concepts Recap:
// Encapsulation: Hiding data through access modifiers (private, public, protected).
// Inheritance: Reusing code from a base class.
// Polymorphism: The ability to use different implementations of a method.
// Abstraction: Hiding implementation details and showing only essential features.