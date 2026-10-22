#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ofstream outfile;
    outfile.open ("test.txt");
    outfile.write("This is an apple", 16);   // (string, total size of the string) --- as parameters
    long pos = outfile.tellp();
    cout << pos << endl;
    outfile.seekp (-7,ios::end); 
    outfile.write (" sam",4); 
    outfile.close();

    ifstream infile; infile.open("test.txt",ios::in); 
    cout<<"position of get pointer using Tellg : "<<infile.tellg()<<endl; 
    ///cout<<"Tellg :"<<infile.seekg(5,ios::beg)<<endl; 
    infile.seekg(5,ios::beg); 
    cout<<"Tellg : "<<infile.tellg()<<endl;

    infile.seekg(-2,ios::cur); cout<<"Tellg (-2,cur): "<<infile.tellg()<<endl;

    infile.seekg(-5,ios::end); 
    cout<<"Tellg : "<<infile.tellg()<<endl; 
    infile.close();

    return 0;
}