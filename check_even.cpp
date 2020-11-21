#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_even(double);
void check_even(vector<double>);

int main() {
    
    double temp {};
    vector<double> x_in {};
    
    // Get 5 numbers
    for (int i = 0; i < 5; ++i) {
        cout << "Enter number (" << i+1 << ") : ";
        cin >> temp;
        x_in.push_back(temp);
    }
    
    check_even(x_in);
    
    return 0;
    
}

bool is_even(double number) {
    return fmod(number, 2) == 0 ? true : false;
}

void check_even(vector<double> numbers) {
    for (double number: numbers) {
        if (is_even(number))
            cout << number << endl;
    }
}

