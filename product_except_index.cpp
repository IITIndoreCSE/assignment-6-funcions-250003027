#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    // TODO: complete the function as per instructions
      // Prefix product
    long long prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= arr[i];
    }

    // Suffix product
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= arr[i];
    }

    return result;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}

