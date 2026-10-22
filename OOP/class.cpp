#include <iostream>
using namespace std;

class Gamer {

private:
    int id;
    int rank;

public:
    void setRank() 
    {
        cout << "Enter gamer ID: ";
        cin >> id;
        cout << "Enter gamer Rank: ";
        cin >> rank;
    }
    void getRank();
};

void Gamer::getRank() 
{
    cout << "Gamer #" << id << " has ranked #" << rank << " in the Bharat Server" << endl;
}

class Counter {
public:
    inline static int count = 0;

    Counter () {
        count++;
    }

    static int getCount() {
        return count;
    }
};  // Counter::getCount() returns the number of constructed objects, assuming no other code changes count.

int main() {

    Gamer me;
    me.setRank();
    me.getRank();
    
    return 0;
}