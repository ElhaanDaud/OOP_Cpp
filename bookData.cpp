//Create a class book with data members book no., book name and member function getdata() and putdata(). Create a class author with data members author name, publisher and members getdata() and showdata(). Create another class detail with data members no of page and year of publication. Derive detail from book and publisher, display all the information by using the array of objects of class detail.

#include <iostream>
#include <string>
using namespace std;

class Book {
    protected:
        int bookNo;
        string bookName;
    public:
        void getData() {
            cout << "Enter Book Number: ";
            cin >> bookNo;
            cout << "Enter Book Name: ";
            cin.ignore();
            getline(cin, bookName);
        }

        void putData() {
            cout << "Book Number: " << bookNo << endl;
            cout << "Book Name: " << bookName << endl;
        }
};


class Author {
    protected:
        string authorName;
        string publisher;

    public:
        void getData() {
            cout << "Enter Author Name: ";
            cin.ignore();
            getline(cin, authorName);
            cout << "Enter Publisher: ";
            getline(cin, publisher);
        }

        void showData() {
            cout << "Author Name: " << authorName << endl;
            cout << "Publisher: " << publisher << endl;
        }
};


class Detail : public Book, public Author {
    private:
        int numOfPages;
        int yearOfPublication;
    public:
        void getData() {
            Book::getData();
            Author::getData();
            cout << "Enter Number of Pages: ";
            cin >> numOfPages;
            cout << "Enter Year of Publication: ";
            cin >> yearOfPublication;
        }

    void displayInfo() {
        Book::putData();
        Author::showData();
        cout << "Number of Pages: " << numOfPages << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
    }
};


int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    Detail books[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Book " << i+1 << ":" << endl;
        books[i].getData();
    }

    cout << "\nBook Information:\n";

    for (int i = 0; i < n; ++i) {
        cout << "\nDetails for Book " << i+1 << ":" << endl;
        books[i].displayInfo();
    }
    
    return 0;
}

