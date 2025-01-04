// File handling in C++ refers to the ability to read from and write to files using the fstream library. This is useful for storing and retrieving data between program runs.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to a file
    ofstream outFile("example.txt"); // Open file in write mode
    if (outFile.is_open())
    {
        outFile << "Hello, World!" << endl; // Write to file
        outFile.close();                    // Close the file
    }
    else
    {
        cout << "File could not be opened!" << endl;
    }

    // Reading from a file
    ifstream inFile("example.txt"); // Open file in read mode
    if (inFile.is_open())
    {
        string line;
        while (getline(inFile, line))
        { // Read line by line
            cout << line << endl;
        }
        inFile.close(); // Close the file
    }
    else
    {
        cout << "File could not be opened!" << endl;
    }

    return 0;
}

// Example Rading and Writing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("example.txt", ios::in | ios::out); // Open file for both reading and writing

    if (file.is_open())
    {
        string text;
        file << "This is a new line added to the file." << endl; // Write to file

        file.seekg(0); // Move file pointer to the beginning for reading

        while (getline(file, text))
        {
            cout << text << endl; // Read and print file contents
        }
        file.close();
    }
    else
    {
        cout << "File could not be opened!" << endl;
    }

    return 0;
}



// Error Handlinng with File Handling 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    outFile << "Some data" << endl;
    outFile.close();

    ifstream inFile("data.txt");
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}



