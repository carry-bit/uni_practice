#include <iostream>
#include <vector>

using namespace std;

double average(vector<float> nums);

int main() {
    
    int temp {0};
    vector<float> nums {0};
    
    cout << "Enter -1 to calculate average!\n\n";
    
    for (int i=0; i >= 0; ++i) {
        cout << "Enter number (" << i+1 << ") : ";
        cin >> temp;
        
        if(temp != -1)
            nums.push_back(temp);
        else
            break;
    }

    
    cout << "\naverage is : " << average(nums);
    
    
    return 0;
}

double average(vector<float> nums) {
    double sum {0};
    int numbers {0};
        
    for (unsigned int i=1; i < nums.size(); ++i) { 
        sum += nums.at(i);
        ++numbers;
    }
    
    return (numbers == 0) ? 0 : sum / numbers;
    
}

