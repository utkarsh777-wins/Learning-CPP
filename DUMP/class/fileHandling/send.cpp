// // // // // // // #include <iostream>
// // // // // // // using namespace std;

// // // // // // // // int cnt = 0;

// // // // // // // class Counter {
// // // // // // //     static int cnt;  //static data member -- default value zero 
// // // // // // // public:
// // // // // // //     Counter() 
// // // // // // //     {
// // // // // // //         cnt++;
// // // // // // //         cout << "Constructor Msg Count " << cnt<< " Created" << endl;
// // // // // // //     }
// // // // // // //     ~Counter()
// // // // // // //     {
// // // // // // //         cout << "Destructor Msg Count " << cnt << " Destroyed" << endl;
// // // // // // //         cnt--;
// // // // // // //     }
// // // // // // // };
// // // // // // // int Counter::cnt = 0;
// // // // // // // int main() {
// // // // // // //     Counter obj;
// // // // // // //     {
// // // // // // //         // Counter obj1;       // destructor inn reverse order of constructor
// // // // // // //         Counter obj1, obj2;
// // // // // // //     }
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // #include <fstream>

// // // // // // using namespace std;

// // // // // // int main() {
// // // // // //     ofstream outf("ITEM.txt", ios::out | ios::app);
// // // // // //     // ofstream outf("ITEM.txt", ios::out | ios::app | ios::in);
// // // // // //     cout << "enter item name" << endl;
// // // // // //     char name[30];
// // // // // //     cin >> name;
// // // // // //     outf << name << "\n";
// // // // // //     cout << "Enter Item Cost " << endl;
// // // // // //     float cost; cin >> cost;
// // // // // //     outf << cost << endl;
// // // // // //     outf.close();

// // // // // //     ifstream inf("Item.txt");
// // // // // //     while (!inf.eof()) // rof: end of file  
// // // // // //     {
// // // // // //         inf >> name;    // read name from file using extraction operator 
// // // // // //         inf >> cost;
// // // // // //         cout << "Item Name: " << name << endl;
// // // // // //         cout  << "Item Cost: " << cost << endl;

// // // // // //     }

// // // // // //     inf.close();
// // // // // // }

// // // // // #include <fstream>
// // // // // #include <iostream>

// // // // // using namespace std;

// // // // // int main() {

// // // // //     ofstream outfile;
// // // // //     outfile.open ("test.txt");
// // // // //     outfile.write("This is an apple", 16);   // (string, total size of the string) --- as parameters
// // // // //     long pos = outfile.tellp();
// // // // //     cout << pos << endl;
// // // // //     outfile.seekp (-7,ios::end); 
// // // // //     outfile.write (" sam",4); 
// // // // //     outfile.close();

// // // // //     ifstream infile; infile.open("test.txt",ios::in); 
// // // // //     cout<<"position of get pointer using Tellg : "<<infile.tellg()<<endl; 
// // // // //     ///cout<<"Tellg :"<<infile.seekg(5,ios::beg)<<endl; 
// // // // //     infile.seekg(5,ios::beg); 
// // // // //     cout<<"Tellg : "<<infile.tellg()<<endl;

// // // // //     infile.seekg(-2,ios::cur); cout<<"Tellg (-2,cur): "<<infile.tellg()<<endl;

// // // // //     infile.seekg(-5,ios::end); 
// // // // //     cout<<"Tellg : "<<infile.tellg()<<endl; 
// // // // //     infile.close();

// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <fstream>

// // // // using namespace std;

// // // // int main() {

// // // //     fstream F;
// // // //     F.open("Data25122.txt", )

// // // //     return 0;

// // // // }


// // // #include <iostream>
// // // #include <fstream>
// // // using namespace std;

// // // int main() {
// // //     ofstream file("demo.txt");
// // //     file.put('H');
// // //     file.put('i');
// // //     file.put('\n');
// // //     file.put('!');
    
// // //     file.close();
// // //     //  get
// // //     ifstream file1("demo.txt", ios::in);
// // //     char ch;
    
// // //     // while 

// // // }

// // #include <iostream> 
// // using namespace std;
// // int sum(int, int);
// // double sum(double, double);
// // double sumI(int, double);


// // int main()
// // {

// //     int a= 10, b=30;
// //     double c = 20.4. d = 45.45;
// //     cout << sum(a,b) << endl;
// //     cout << sum(c,d) << endl;
// //     cout << sum(a,c) << endl;
 
// //     return 0;

// // }

// // int sum(int x, int y) {
// //     return(x+y);
// // }
// // double sum(double x, double y) {
// //     return(x+y);
// // }
// // double sum(int x, double y) {
// //     return(x+y);
// // }

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {

//     int roll; string name;
//     cout << "Enter the rollNO and name of the student " << endl;
//     cin >> roll >> name;

//     // ofstream fout("filePractice.txt");
//     // ofstream fout;  
//     fstream fout;
//     fout.open("filePractice.txt");
//     fout << "Overwritten";
//     fout << roll << name;
//     fout.close();

//     ifstream fin("filePractice.txt");
//     // ifstream fin;
//     fin >> roll >> name;
//     // fin.open("filePractice.txt");
//     // string str;
//     // fin>>str;

//     cout << "Content of file is : " << endl;
//     // cout << str << endl;
//     cout << "Roll: " << roll << " Name: " << name;
//     fin.close();

//     return 0;

// }

#include <iostream>

using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Dynamic constructor called, memory allocated for array." << endl;
    }
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i=0; i<size; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "Array  elements: ";
        for (int i=0; i<size; i++) {
            cout  << arr[i] << " ";
        } cout << endl;
    }
    ~Array() {
        delete[] arr;
        cout << "Destructor called, memory deallocated." << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array : ";
    cin >>size; 
    Array arr(size);
    arr.input();
    arr.display();

    return 0;
}