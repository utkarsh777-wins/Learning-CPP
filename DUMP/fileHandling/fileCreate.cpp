#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int roll; string name;
    cout << "Enter the rollNO and name of the student " << endl;
    cin >> roll >> name;

    // ofstream fout("filePractice.txt");
    // ofstream fout;  
    fstream fout;
    fout.open("filePractice.txt");
    fout << "Overwritten";
    fout << roll << name;
    fout.close();

    ifstream fin("filePractice.txt");
    // ifstream fin;
    fin >> roll >> name;
    // fin.open("filePractice.txt");
    // string str;
    // fin>>str;

    cout << "Content of file is : " << endl;
    // cout << str << endl;
    cout << "Roll: " << roll << " Name: " << name;
    fin.close();

    return 0;

}