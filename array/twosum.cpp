#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& arr, int target, int n) {

    sort(arr.begin(), arr.end());

    int low = 0;
    int high = n - 1;

    while (low < high) {

        int sum = arr[low] + arr[high];

        if (sum == target) {
            return {arr[low], arr[high]};
        }
        else if (sum < target) {
            low++;
        }
        else {
            high--;
        }
    }

    return {-1, -1};
}

int main() {

    int n, target;

    cin >> n >> target;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = twosum(arr, target, n);

    cout << ans[0] << " " << ans[1];

    return 0;
}