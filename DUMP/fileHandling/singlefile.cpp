#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outf("ITEM.txt", ios::out | ios::app);
    // ofstream outf("ITEM.txt", ios::out | ios::app | ios::in);
    cout << "enter item name" << endl;
    char name[30];
    cin >> name;
    outf << name << "\n";
    cout << "Enter Item Cost " << endl;
    float cost; cin >> cost;
    outf << cost << endl;
    outf.close();

    ifstream inf("Item.txt");
    while (!inf.eof()) // rof: end of file  
    {
        inf >> name;    // read name from file using extraction operator 
        inf >> cost;
        cout << "Item Name: " << name << endl;
        cout  << "Item Cost: " << cost << endl;

    }

    inf.close();
}