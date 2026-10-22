#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Record {
    int id;
    double marks;
};


Record r{101, 89.5};
ofstream out("record.bin", ios::binary);
out.write(reinterpret_cast<const char*>(&r), sizeof(r));
out.close();


int main() {
    ofstream out("data.txt");
    out << "C++ Exam";
    out.close();

    ifstream in("data.txt");
    string word;
    getline(in, word);
    cout << word;
    in.close();
    
    return 0;
}