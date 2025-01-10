#include <iostream>
#include <fstream>

int main()
{
    // File name
    std::string fileName = "data.txt";

    // Open the file in append mode
    std::ofstream file(fileName, std::ios::app);

    // Check if the file opened successfully
    if (!file)
    {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Data to append
    std::string data;
    std::cout << "Enter data to append to the file: ";
    std::getline(std::cin, data);

    // Write data to the file
    file << data << std::endl;

    // Close the file
    file.close();

    std::cout << "Data appended successfully!" << std::endl;

    return 0;
}
