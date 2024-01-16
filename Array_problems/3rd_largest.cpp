#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    
    // Input the size of the vector
    cin >> n;

    // Input the elements of the vector
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Sort the vector in ascending order
    sort(nums.begin(), nums.end());

    // Check if the vector has at least 3 elements
    if (n >= 3) {
        // Print the third largest element
        cout << nums[n - 3] << endl;
    } else {
        // Handle the case where the vector has less than 3 elements
        cout << "Vector should have at least 3 elements." << endl;
    }

    return 0;
}
