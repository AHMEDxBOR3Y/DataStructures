#include <iostream>
using namespace std;

int fact(int n) {
    int ans = 1;
    while (n > 1) {
        ans =ans * n;
        n--;
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Fact= " << fact(number) << endl;
    return 0;
}