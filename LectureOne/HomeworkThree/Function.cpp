#include <iostream>
using namespace std;

int main() {
    int x , y;
    cout << "enter two numbers to swap:" << endl;
    cin >> x;
    cin >> y;
    int z = x;
    x = y;
    y = z;
    
    cout << " first number = " << x << ", second number= " << y << endl;
    return 0;
}