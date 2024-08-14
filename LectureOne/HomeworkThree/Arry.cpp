#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum =sum + arr[i];
    }
    double average = sum / 10;
    cout << "Average: " << average << endl;
    return 0;
}
