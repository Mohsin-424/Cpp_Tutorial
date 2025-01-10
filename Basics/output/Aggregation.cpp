// Example of Aggregation: Consider a Library and Book class. A Library contains Books, but a Book can exist without the Library.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Book
// {
// public:
//     Book(string t) : title(t) {}
//     void showTitle() { cout << title << endl; }

// private:
//     string title;
// };

// class Library
// {
// public:
//     void addBook(Book *b)
//     {
//         books.push_back(b); // Add Book to Library
//     }

//     void showBooks()
//     {
//         for (auto &book : books)
//         {
//             book->showTitle(); // Show each Book's title
//         }
//     }

// private:
//     vector<Book *> books; // Aggregation: Library has Books
// };

// int main()
// {
//     Book b1("C++ Programming");
//     Book b2("Data Structures");

//     Library lib;
//     lib.addBook(&b1);
//     lib.addBook(&b2);

//     lib.showBooks(); // Output: C++ Programming, Data Structures

//     return 0;
// }

// Example 2

#include <iostream>
#include <string>
using namespace std;

// Heart Class
class Heart
{
public:
    string name;
    string color;
    int age;

    Heart(string n = "Heart name", string c = " Color", int a = 0)
        : name(n), color(c), age(a) {}

    void showHeartDetails()
    {
        cout << "Heart Name: " << name << endl;
        cout << "Heart Color: " << color << endl;
        cout << "Heart Age: " << age << endl;
    }
};

// Person Class
class Person
{
public:
    string name;
    string posture;
    Heart *heart; // Aggregation: Person has a Heart using Pointer

    Person(string n = "Abdullah P", string p = "Abdulla Posture", Heart *h = nullptr)
        : name(n), posture(p), heart(h) {}

    void showPersonDetails()
    {

        cout << "Person Name: " << name << endl;
        cout << "Person Posture: " << posture << endl;
        if (heart)
        {
            cout << "Heart Details:" << endl;
            heart->showHeartDetails();
        }
        else
        {
            cout << "No heart details available!" << endl;
        }
    }
};

int main()
{
    // Abdullah ahs heart on Left side with Color Red
    Heart h1("Abdullah's Heart", "Red", 10);

    // Create a Person object with a Heart
    Person p1("Ali", "Left", &h1);

    // Display details
    p1.showPersonDetails();

    return 0;
}

// Example of Composition: Consider a House and Room class. A Room cannot exist without a House.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Room
// {
// public:
//     Room(string r) : roomName(r) {}
//     void showRoom() { cout << "Room: " << roomName << endl; }

// private:
//     string roomName;
// };

// class House
// {
// public:
//     House(string h) : houseName(h) {}

//     void addRoom(string room)
//     {
//         rooms.push_back(Room(room)); // Rooms are part of the House
//     }

//     void showRooms()
//     {
//         cout << "House: " << houseName << endl;
//         for (auto &room : rooms)
//         {
//             room.showRoom(); // Show each Room
//         }
//     }

// private:
//     string houseName;
//     vector<Room> rooms; // Composition: House has Rooms
// };

// int main()
// {
//     House house("Dream Home");
//     house.addRoom("Living Room");
//     house.addRoom("Bedroom");
//     house.showRooms();

//     return 0;
// }
