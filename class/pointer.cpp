#include <iostream> 
using namespace std;
int main() {

    int a = 10;
    int b = 20;

    int *ptr = &a; 
    ptr = &b;   // valid  reassignment 

    // int &c =a;/// same alias name to both the variables // reference variable like this won't do 
    // int &c = b; // invalid reassignment 

    
    return 0; 

}