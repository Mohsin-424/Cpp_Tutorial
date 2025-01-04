// Example of Aggregation: Consider a Library and Book class. A Library contains Books, but a Book can exist without the Library.
#include <iostream>
#include <vector>
using namespace std;

class Book
{
public:
    Book(string t) : title(t) {}
    void showTitle() { cout << title << endl; }

private:
    string title;
};

class Library
{
public:
    void addBook(Book *b)
    {
        books.push_back(b); // Add Book to Library
    }

    void showBooks()
    {
        for (auto &book : books)
        {
            book->showTitle(); // Show each Book's title
        }
    }

private:
    vector<Book *> books; // Aggregation: Library has Books
};

int main()
{
    Book b1("C++ Programming");
    Book b2("Data Structures");

    Library lib;
    lib.addBook(&b1);
    lib.addBook(&b2);

    lib.showBooks(); // Output: C++ Programming, Data Structures

    return 0;
}

// Example of Composition: Consider a House and Room class. A Room cannot exist without a House.

#include <iostream>
#include <vector>
using namespace std;

class Room
{
public:
    Room(string r) : roomName(r) {}
    void showRoom() { cout << "Room: " << roomName << endl; }

private:
    string roomName;
};

class House
{
public:
    House(string h) : houseName(h) {}

    void addRoom(string room)
    {
        rooms.push_back(Room(room)); // Rooms are part of the House
    }

    void showRooms()
    {
        cout << "House: " << houseName << endl;
        for (auto &room : rooms)
        {
            room.showRoom(); // Show each Room
        }
    }

private:
    string houseName;
    vector<Room> rooms; // Composition: House has Rooms
};

int main()
{
    House house("Dream Home");
    house.addRoom("Living Room");
    house.addRoom("Bedroom");
    house.showRooms();

    return 0;
}
