// #include <iostream>
// #include <fstream>
// using namespace std;

// writing to a file is in of stream
// ofstream fout("numbers.txt");       // creates/overwrites a file
// fout << x << "\n";      // works just like cout 
// fout.close();   //alsways close before reading the same file
// usual cycle : write -> close -> read ->close
// // reading a file is in ifstream
// ifstream fin("numbers.txt");
// int x;
// while (fin >> x) {      //(reads token-by-token till EOF)
//     // process
// }
// fin.close();


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n=0;
    cin >> n;

    // read from standard input a nd write out  to number.txt
    ofstream fout("numbers.txt");
    for (int i=0; i<n; i++) {
        int val;
        cin >> val;
        fout << val << "\n";
    }
    fout.close();

    ifstream fin("numbers.txt");
    ofstream eout("even.txt");
    ofstream oddOut("odd.txt");

    int x;
    while (fin >> x) {
        if (x%2 == 0) eout << x << " ";
        else oddOut << x << " ";
    }
    fin.close();
    eout.close();
    oddOut.close();

    // read even.txt and print 
    ifstream ein("even.txt");
    cout << "Even: ";
    bool hasEven = false;
    while (ein >> x) {
        cout << " " << x;
        hasEven = true;
    }
    if(!hasEven) cout << "None";
    cout << "\n";
    ein.close();

    // read odd.txt and print
    ifstream oddIn("odd.txt");
    cout << "Odd: ";
    bool hasOdd = false;
    while (oddIn >> x) {
        cout << " " << x;
        hasOdd = true;
    }
    if(!hasOdd) cout << "None";

    cout << "\n";
    oddIn.close();

    
}