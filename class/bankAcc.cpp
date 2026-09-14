#include <iostream>

using namespace std;

struct account {

private:
    // double balance;
    // we can also initialise the variable 
    double balance = 10;


public:

    void deposit(double balance1) 
    {

        if(balance>0) 
        balance = balance + balance1;

    }

    void withdraw(double balance1) 
    {

        if(balance1 > 0 && balance > balance1)
        balance = balance - balance1;

    } 

    void showBalance() 
    {

        cout << "Balance is : " << balance << endl;

    }

};

int main() {

    account obj;
    obj.deposit(1111);
    obj.showBalance();
    obj.withdraw(510);
    obj.showBalance();


    return 0;

}