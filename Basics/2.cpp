#include <iostream> // For input/output
#include <string>   // For string manipulation
#include <fstream>  // For file handling
using namespace std;

// Function declaration and definition
int add(int a, int b)
{
    return a + b; // Returns the sum of two integers
}

// Pass-by-reference example
void update(int &x)
{
    x += 5; // Modifies the original variable
}

// Structure to group related data
struct Student
{
    string name;
    int age;
};

// Enum for predefined constants
enum Days
{
    MON,
    TUE,
    WED
};

int main()
{
    // 1. Basics: Variables, I/O
    int age;
    cout << "Enter your age: "; // Prompt for user input
    cin >> age;                 // Take user input
    cout << "You are " << age << " years old!" << endl;

    // 2. Conditional Statements
    if (age >= 18)
    {
        cout << "You are  eligible to drive" << endl; // Conditional check
    }
    else
    {
        cout << "You are not allowed to drive" << endl;
    }

    // 3. Loops
    for (int i = 0; i < 5; i++)
    {
        cout << "Loop iteration: " << i << endl; // Iterative loop example
    }

    // 4. Arrays
    int arr[3] = {10, 20, 30}; // Array initialization
    for (int i = 0; i < 3; i++)
    {
        cout << "Array element: " << arr[i] << endl; // Accessing array elements
    }

    // 5. Pointers
    int x = 10;
    int *ptr = &x; // Pointer to the address of x
    cout << "Pointer Value: " << *ptr << ", Address: " << ptr << endl;

    // 6. References
    update(x); // Pass-by-reference function
    cout << "Updated value of x: " << x << endl;

    // 7. Strings
    string str1 = "Hello", str2 = "World";
    string result = str1 + " " + str2; // String concatenation
    cout << "Concatenated string: " << result << endl;

    // 8. File Handling
    ofstream file("output.txt");
    file << "Writing to a file!" << endl; // Writing to a file
    file.close();

    // 9. Dynamic Memory Allocation
    int *dynamicArr = new int[5]; // Allocating memory
    dynamicArr[0] = 42;           // Assigning value
    cout << "Dynamic Array Element: " << dynamicArr[0] << endl;
    delete[] dynamicArr; // Releasing memory

    // 10. Structs
    Student student1 = {"John Doe", 20}; // Initializing struct
    cout << "Student Name: " << student1.name << ", Age: " << student1.age << endl;

    // 11. Enums
    Days today = MON; // Assign enum value
    if (today == MON)
    {
        cout << "It's Monday!" << endl; // Check enum value
    }

// 12. Preprocessor Directive
#define PI 3.14159 // Macro definition
    cout << "Value of PI: " << PI << endl;

    return 0;
}
