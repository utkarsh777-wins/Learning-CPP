// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     // given a string find its longest palindrome   "babad => bab"
//     string s;
//     cin >> s;

//     for(int i=0; s[i] != '\0'; i++) {
        
//     }

//     // compress consecutive repeated characters  "aaabbbccccdd"  => "a3b3c3d2"

    


//     return 0;

// }

#include <iostream>

using namespace std;

int main()  {
    string s1 = "Hello";
    string s2 = "Yello";
    string s3;
    string s4("Yello");
    s3 = s1+s2;

    cout << "S1 concatenate S2 " << s1 << endl; 
    cout << "S1 concatenates S2 "<< s1+s2 << endl; 
    cout << s3 << endl;
    cout << "S1 concatenates S2 " << s1 << " " << s2 << endl;
    cout << "Mello " << s4 << endl;
    cout << "Number of characters in s1 is : " << s1.length() << endl;
    cout << "Size of s1 : " << s1.size() << endl;

    s1.insert(4, s2);       // pos, variable 
    // s1.insert(4, 'g');      // pos, char is invalid 
    s1.insert(4, "hell");   // pos , string 
    cout << "S1 = " <<  s1 << endl;
    cout << "S2 = " << s2 << endl;

    // s1.erase(5);    // other than the first 5 the rest gets erased 
    s1.erase(4, 5);     // deletes that specific pos
    cout << "Updated S1 after erase = " << s1 << endl;

    s1.replace(1, 3, "HI!");
    cout << s1 << endl;

}