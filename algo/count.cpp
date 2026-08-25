#include <iostream>
#include <cmath>

/*

extraction of digits 
counting the number of digits 

*/

// int count(int n) {

//     int count = 0;   // digit extraction

//     while(n>0) {
//         n=n/10;
//         count += 1;
//     }

//     return count;
// }

int count(int n) {
    // typecasting the decmal number into integer 
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int main() {

    int it = count(77844);

    std::cout << it << std::endl;

    return 0;

}