#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>     
using namespace std;

int main() {

    vector<int> arr = { 2, 6, 1, -20, 10, 4, -35, -25};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    auto maxIt = max_element(arr.begin(), arr.end());
    cout << "Maximum element: " << *maxIt << endl;

    auto lastPosIt = find_if(arr.rbegin(), arr.rend(), [](int x) { return x > 0; });

    int sum = 0;
    if (lastPosIt != arr.rend()) {
        int index = distance(lastPosIt, arr.rend()) - 1; 

        for_each(arr.begin(), arr.begin() + index, [&sum](int x) {
            sum += x;
            });
    }

    cout << "Sum of elements before last positive: " << sum << endl;

    int a = 10, b = 50; 

    auto newEnd = remove_if(arr.begin(), arr.end(), [a, b](int x) {
        return abs(x) >= a && abs(x) <= b;
        });

    fill(newEnd, arr.end(), 0);

    cout << "Compressed array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}