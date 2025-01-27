#include <iostream>
using namespace std;

void swap_variables(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 2;
    int z = 5;

    cout << "Original variable values x: " << x << ", z: " << z << endl;
    swap_variables(x, z);
    cout << "Swapped variable values x: " << x << ", z: " << z << endl;

    return 0;
};