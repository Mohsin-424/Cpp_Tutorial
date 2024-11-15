// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// Basic Data Types
#include <iostream>  // Include the library for input and output
using namespace std; // Use the standard namespace

int main()
{
    int age = 20;              // Integer to store age
    float height = 5.9;        // Float for height (decimal values)
    double pi = 3.14159265359; // Double for more precise decimal values
    char grade = 'A';          // Char to store a single character
    bool isStudent = true;     // Boolean to represent true/false (1/0)

    // Display all the values
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0; // Indicate the program ran successfully
}

//  Arrays and Pointers
// #include <iostream>
// using namespace std;

// int main()
// {
//     int numbers[3] = {10, 20, 30}; // Array to store three integers
//     int *ptr = &numbers[0];        // Pointer to store the address of the first element in the array

//     // Use the pointer to access the value at the address it holds
//     cout << "First Element: " << *ptr << endl; // Dereferencing the pointer

//     return 0;
// }

//  Structs
// #include <iostream>
// using namespace std;

// A struct groups different data types into one unit
// struct Student
// {
//     string name; // String to store the name
//     int age;     // Integer for age
//     char grade;  // Char for grade
// };

// int main()
// {
//     Student student1 = {"Alice", 18, 'A'}; // Initialize struct with values

//     // Accessing struct members using dot (.) operator
//     cout << "Name: " << student1.name << ", Age: " << student1.age << ", Grade: " << student1.grade << endl;

//     return 0;
// }

// Void Function
// #include <iostream>
// using namespace std;

// A struct groups different data types into one unit
// struct Student
// {
//     string name; // String to store the name
//     int age;     // Integer for age
//     char grade;  // Char for grade
// };

// int main()
// {
//     Student student1 = {"Alice", 18, 'A'}; // Initialize struct with values

//     // Accessing struct members using dot (.) operator
//     cout << "Name: " << student1.name << ", Age: " << student1.age << ", Grade: " << student1.grade << endl;

//     return 0;
// }

// Examples Area of Circle
// #include <iostream>
// using namespace std;

// int main()
// {
//     double radius, area;       // Double for radius and area (to allow decimal precision)
//     const double PI = 3.14159; // Constant value for pi (unchanging)

//     cout << "Enter radius: ";
//     cin >> radius; // Get radius from user input

//     // Calculate the area using the formula πr²
//     area = PI * radius * radius;

//     cout << "Area of the circle: " << area << endl; // Display the calculated area

//     return 0;
// }

// Swap Two Numbers using Pointers
// #include <iostream>
// using namespace std;

// Function to swap values using pointers ............

// void swap(int *a, int *b)
// {
//     int temp = *a; // Store the value at address 'a' in temp
//     *a = *b;       // Assign the value at address 'b' to 'a'
//     *b = temp;     // Assign temp (original 'a') to 'b'
// }

// int main()
// {
//     int x, y;

//     // Get two numbers from the user
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     swap(&x, &y); // Pass the addresses of x and y to the swap function

//     // Display swapped values
//     cout << "After swapping, x = " << x << ", y = " << y << endl;
//     return 0;
// }

// // Average Marks fo Stuents...................

// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks[5], sum = 0; // Array to store marks and a variable to store their sum

//     // Input marks for 5 students
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter marks of student " << i + 1 << ": ";
//         cin >> marks[i]; // Store input in the array
//         sum += marks[i]; // Add marks to the sum
//     }

//     double average = sum / 5.0;                   // Calculate the average (note: use 5.0 to ensure decimal division)
//     cout << "Average Marks: " << average << endl; // Display the average

//     return 0;
// }
