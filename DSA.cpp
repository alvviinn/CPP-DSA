#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int solution(vector<int> &A) {
    int n = A.size();
    if (n == 0) return 0;

    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            //  overflow limit
            if (A[i] == -2147483648) {
                A[i] = 2147483647;
            } else {
                A[i] = abs(A[i]);
            }
        }
    }
    // Quick Sort
    sort(A.begin(), A.end());
    // Binary Search jumps
    int count = 0;
    auto it = A.begin();
    while (it != A.end()) {
        count++;
        // Binary Search finds the next value that is different
        it = upper_bound(it, A.end(), *it);
    }
    return count;
}
int main() {
    vector<int> A = {-5, -3, -1, 0, 3, 6};

    cout << "Absolute Distinct Count: " << solution(A) << endl;

    return 0;
}