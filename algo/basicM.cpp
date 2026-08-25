#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

/*

EXRACTIONNN OF DIGITS 
counting the number of digits 

REVERSING A NUMBER
first off:
last_digit = num%10   gives out the remainder
followed by 
num/10 which trims one digit out of the number 
so if we reverse the process by:
revNum = 0;
revNum = (revNum*10) + last_digit
we reverse the number itself

PALLINDROME 
IF NUM == REV(NUM)

ARMSTRONG
IF NUM == Sum of(cube of all its digits)

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

int reverse(int n) {

    int revNum = 0;

    while(n>0) {
        int ld = n%10;
        revNum = (revNum*10) + ld;
        n=n/10;
    }

    return revNum;
}

bool pallindrome(int n) {

    return n == reverse(n);

}

bool ARMSTRONG(int n) {

    int temp=n, sum=0;

    while(temp>0) {
        int ld = temp%10;
        sum = sum + ld*ld*ld;
        temp = temp/10;
    }

//     return n == sum;

// }

// // void printArr(int arr[]) {

// //     int size = sizeof(arr)/sizeof(arr[0]);   //sizeof(arr) returns the  size of the pointer
// //     for(int i=0; i<size; i++) {
// //         std::cout << arr[i] << " ";
// //     }

// //     std::cout << std::endl;

// // }

// int divisors(int n) 
void divisors(int n) 
{
    // int arr[n/2];

    // 1 as first divisor 
    // arr[0] = 1;
    // int idx = 1;

    std::cout << "Factors: {1 ";

    for(int i=2; i<=n/2; i++) {
        if(n%i == 0) {
            // arr[idx] = i;
            // idx += 1;
            std::cout << i << " ";
        }
    }

    // n as last divisor 
    // arr[idx+1] = n;
    std::cout << n << "}" << std::endl;

    // printArr(arr);

    // return arr;
}

void printDivisors(int n) {
    std::vector<int> ls;

    for(int i=1; i*i<=n; i++) {

        // O(sqrt(n))
        if(n%i == 0) {
            ls.push_back(i);

            // to avoid repeating divisors 
            if((n/i) != i) {
                ls.push_back(n/i);
            }
        }

        
    }

    // O(n log n) : where n is the number of factors 
    // O(number of factors * log(no of factors))    
    // sorting the elements of the vector (divisors in this case)
    std::sort(ls.begin(), ls.end());
    
    // O(number of factors)
    for(auto it : ls) std::cout << it << " ";
    std::cout << std::endl;

}


int main() {

    int n;
    std::cin >> n;

    // int it = count(n);
    // int it = reverse(n);

    // std::cout << it << std::endl;

    // if(pallindrome(n)) {std::cout << "Number is a pallindrome" << std::endl;}
    // else {std::cout << "Number is not a pallindrome" << std::endl;}
    // if(ARMSTRONG(n)) {std::cout << "Armstrongerrr" << std::endl;}
    // else {std::cout << "NoArmstrongerrr" << std::endl;}

    // divisors(n);
    printDivisors(n);



    return 0;

}