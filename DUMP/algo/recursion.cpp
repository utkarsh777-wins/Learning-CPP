#include <iostream>

int cnt=0;
void print() {
    if(cnt == 4) return;
    std::cout << cnt << std::endl;
    cnt++;
    print();
}

int main() {

    print();

    return 0;

}