#include <iostream>

using namespace std;

double abs(double);

int main() {
    
    double x_in;
    
    cout << "Enter number : ";
    cin >> x_in;
    
    cout << "\nAbsolute of " << x_in << " is " << abs(x_in) << endl;
    
    return 0;
}

double abs(double number) {
    if (number > 0)
        return number;
    else
        return number * -1;
}