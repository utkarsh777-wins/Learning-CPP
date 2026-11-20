// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     // preompute
//     // just lowercase letters 
//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++) {
//         hash[s[i] - 'a'] += 1;
//     }

//     int q=0;
//     cin >> q;
//     while (q--) {
//         char ch;
//         cin >> ch;

//         // fetch 
//         cout << hash[ch - 'a'] << " ";
//     }
//     cout << endl;

//     return 0;

// }
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // preompute
    // incase of all characters 
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++) {
        // hash[s[i]] += 1;
        hash[s[i]]++;
    }

    int q=0;
    cin >> q;
    while (q--) {
        char ch;
        cin >> ch;

        // fetch 
        cout << hash[ch] << " ";
    }
    cout << endl;

    return 0;

}