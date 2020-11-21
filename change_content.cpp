#include <iostream>

using namespace std;

void change_content(double[]);

int main() {
    
    double x_in[2] {};
    
    for (int i = 0; i < 2; ++i) {
        cout << "Enter number (" << i+1 << ") : ";
        cin >> x_in[i];
    }
    
    change_content(x_in);
    
    return 0;
}

void change_content(double numbers[]) {
    int temp {};
    
    temp = numbers[1];
    numbers[1] = numbers[0];
    numbers[0] = temp;
    
    cout << numbers[0] << ' ' << numbers[1];
}