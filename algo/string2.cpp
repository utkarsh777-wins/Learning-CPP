// #include <iostream>

// using namespace std;

// int main() 
// {
//     string s1 = "What is this";
//     string s2;
//     s2 = s1.substr(2, 5);
//     s2 = s1.substr();
//     s2 = s1;

//     cout << "s2 = " << s2 << endl;

//     return  0;

// }

// #include <iostream>
// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    char str[] = "Abcabc 123 1@";

    int alphabet = 0, number = 0, i, space = 0;
    for(i=0; str[i]!='\0'; i++) {
        if( isalpha(str[i]) != 0)
            alphabet++;
        else if(isdigit(str[i]) != 0)
            number++;
        else if(isspace(str[i]) != 0)
            space++;

    }

    string str1 = "Hello";

    char str2[] = "progrramming";
    int len2 = strlen(str2);

    sort(str1.begin(), str1.end());
    sort(str2, str2 + len2);
    cout << str1 << endl;
    cout << str2 << endl;

    cout << "Alphabet letters = " << alphabet << endl << "Decimal_digits = " << number << endl << "Space = " << space;
    return 0;
}