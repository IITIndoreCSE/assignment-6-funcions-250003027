#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
int n = arr.size();
   
   //step 1: if the array size < 2, no second largest
   if (n < 2) return -1;

    // Step 2: Initialize largest and second largest
    int largest = INT_MIN;
    int second = INT_MIN;

    // Step 3: Traverse array
    for (int num : arr) {
        if (num > largest) {
            second = largest;   // update second
            largest = num;      // update largest
        } else if (num > second && num < largest) {
            second = num;       // update second if num < largest
        }
    }

    // Step 4: Return result
    if (second == INT_MIN)
        return -1;  // no second largest found (all elements equal)
    return second;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}

