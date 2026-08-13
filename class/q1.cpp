#include <iostream>

using namespace std;

class book {

private:
string name;
string authorName;
int book_volume;

void getInfo() 
{
    getline(cin, name);
    getline(cin, authorName);
    cin >> book_volume;
}

public:
void publishData() 
{
    getInfo();
    cout << name << endl;
    cout << authorName << endl;
    cout << book_volume;
}
};
// public:
// void getInfo() 
// {
//     getline(cin, name);
//     getline(cin, authorName);
//     cin >> book_volume;
// }
// void publishData() 
// {
//     cout << name << endl;
//     cout << authorName << endl;
//     cout << book_volume;
// }
// };

int main() {

    book obj;
    // obj.getInfo();
    obj.publishData();
    return 0;

}