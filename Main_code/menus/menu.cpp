#include<iostream>
using namespace std;
struct Menus {

    void Options() {
        cout << "Please enter what to do:\n";
        cout << "1.Books:\n";
        cout << "2.Members:\n";
        cout << "3.Exit:\n";
    }

    void Options_for_books() {
        cout << "Book section:\n";
        cout << "1.Manage Books:\n";
        cout << "2.Borrow or Return Books:\n";
        cout << "3.Search for Books:\n";
        cout << "4.Display Books:\n";
    }

    void Options_for_management_of_books() {
        cout << "Book management section:\n";
        cout << "1.Add Books:\n";
        cout << "2.Remove Books:\n";
    }

    void Options_for_borrowing_books() {
        cout << "Book borrowing section:\n";
        cout << "1.Borrow a Book:\n";
        cout << "2.Return a Book:\n";
        cout << "3.Show borrowed Books:\n";
    }
    
    void Options_for_searching_books() {
        cout << "Book Searching section:\n";
        cout << "Search by:\n";
        cout << "1.Title:\n";
        cout << "2.Author:\n";
        cout << "3.ISBN:\n";
    }

    void Options_for_members() {
        cout << "Member section:\n";
        cout << "1.Manage Members:\n";
        cout << "2.Search for Members:\n";
        cout << "3.Display Members:\n";
    }

    void Options_for_management_of_members() {
        cout << "Member management section:\n";
        cout << "1.Add Members:\n";
        cout << "2.Remove Members:\n";
    }

    void Options_for_searching_members() {
        cout << "Member Searching section:\n";
        cout << "Search by:\n";
        cout << "1.Name:\n";
        cout << "2.Contact Info:\n";
    }

};