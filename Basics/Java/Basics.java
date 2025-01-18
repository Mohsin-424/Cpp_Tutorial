// public class Basics {
// public static void main(String[] args) {
// System.out.println("Hello, World!");
// }
// }

// JavaBasics.java
public class Basics {
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
                System.out.println(name + " has an excellent grade.");
                break;
            case 'B':
                System.out.println(name + " has a good grade.");
                break;
            case 'C':
                System.out.println(name + " has an average grade.");
                break;
            default:
                System.out.println(name + " has an unknown grade.");
                break;
        }

        // While Loop
        int counter = 0;
        while (counter < 3) {
            System.out.println("While loop counter: " + counter);
            counter++;
        }

        // For Loop
        for (int i = 0; i < 3; i++) {
            System.out.println("For loop iteration: " + i);
        }

        // 3. Arrays
        int[] numbers = { 1, 2, 3, 4, 5 }; // Array of integers
        System.out.println("Array of numbers:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Number at index " + i + ": " + numbers[i]);
        }

        // Multi-dimensional Array
        int[][] matrix = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
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

// Person.java
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

// InheritanceExample.java
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

// PolymorphismExample.java
class PolymorphismExample {
    public static void main(String[] args) {
        Animal myAnimal = new Dog(); // Parent class reference, child class object
        myAnimal.sound(); // Output: Dog barks
    }
}

// Shape.java (Abstraction Example)
abstract class Shape {
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

// InterfaceExample.java
interface Drawable {
    void draw();
}

class Square implements Drawable {
    @Override
    public void draw() {
        System.out.println("Drawing a Square");
    }
}
