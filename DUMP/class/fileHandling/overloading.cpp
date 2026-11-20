#include <iostream> 
using namespace std;
int sum(int, int);
double sum(double, double);
double sumI(int, double);


int main()
{

    int a= 10, b=30;
    double c = 20.4. d = 45.45;
    cout << sum(a,b) << endl;
    cout << sum(c,d) << endl;
    cout << sum(a,c) << endl;
 
    return 0;

}

int sum(int x, int y) {
    return(x+y);
}
double sum(double x, double y) {
    return(x+y);
}
double sum(int x, double y) {
    return(x+y);
}