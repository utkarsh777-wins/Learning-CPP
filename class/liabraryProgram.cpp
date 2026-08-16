#include <iostream>

using namespace std;

class library {

private:

    string bookName;
    string authorName;
    string bookGenre;
    long long isbn;

    void organizeBooks(library book[], int num);
    
public:
    
    void fillLibrary();
    void findBook(library book[], int num, int x);

};

void library::fillLibrary() 
{

    cout << "Enter the name of the book: ";
    getline(cin, bookName);
    cout << endl;
    cout << "Enter the name of the author of the book: ";
    getline(cin, authorName);
    cout << endl;
    cout << "Enter the genre of the book: ";
    getline(cin, bookGenre);
    cout << endl;

    /*
    An ISBN (International Standard Book Number) 
    is a unique 13-digit code used to identify a specific book, edition, or format.
    */
    
    cout << endl << "Enter the ISBN of the book: ";
    cin >> isbn;

}

void library::organizeBooks(library book[], int num) 
{

    // for(int i=0; i<num; i++)  // goes out of bound with i+1
    for(int i=0; i<num-1; i++)
    {
        for(int j=0; j<num-i-1; j++) 
        {

            if(book[j].isbn > book[j+1].isbn) {
    
                library temp = book[j];
                book[j] = book[j+1];
                book[j+1] = temp;   
    
                
            }

        }
    }
}

void library::findBook(library book[], int num, long long x) 
{
    // organising the books in the library => sorting 
    organizeBooks(book, num);

    // implimenting binary search for finding the book
    int low = 0;
    int high = num-1;
    int mid = low + (high - low)/2;

    int found = 0;

    while(low<=high) 
    {
        if(x == book[mid].isbn) {
            cout << "Your book is available" << endl;
            found = 1;
            break;
        }

        else if(x < book[mid].isbn) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    
    if(!found) {cout << "The book you're looking for is currently unavailable" << endl;}
}

int main() {

    int num = 0;
    cout << "Enter the number of books you want to store: ";\
    cin >> num;


    // making an object array for books in the library 

    library book[num];
    for(int i=0; i<num; i++) {
        book[i].fillLibrary();
    }

    long long target = 0;
    cout << "Enter the ISBN of the book you want: ";
    cin >> target;
    cout << endl;

    findBook(book, num, target);

    return 0;

}