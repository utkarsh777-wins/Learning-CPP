#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("demo.txt");
    file.put('H');
    file.put('i');
    file.put('\n');
    file.put('!');
    
    file.close();
    //  get
    ifstream file1("demo.txt", ios::in);
    char ch;
    
    // while 

}