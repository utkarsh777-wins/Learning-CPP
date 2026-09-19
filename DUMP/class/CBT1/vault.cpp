#include <iostream>
using namespace std;

/* 
can only access vault if the last digit of passcode is
divisible by 3
0, 3, 6, 9
*/

class vault {
private:
    int count = 0;
    bool verify(int n)  {
        int last_digit = n%10;
        // if (last_digit == 0 || last_digit % 3 == 0) {
        //     return true;
        // } return false;
        return last_digit % 3 == 0;
    }
    void displayAccess(bool verified) {
        if (verified) {
            count += 1;
            cout << "Access Granted" << endl;
        } else cout << "Access Denied" << endl;
    }
    public:
    void checkPasscode(int x, int y, int z) {
        displayAccess(verify(x));
        displayAccess(verify(y));
        displayAccess(verify(z));
        cout << "Vault access granted to : " 
             << count
             << (count == 1 ? " officer" : " officers" )
             << endl;
    }
};

int main() {

    vault access;

    int x, y, z;
    cin >> x >> y >> z;
    access.checkPasscode(x, y, z);

    return 0;
}