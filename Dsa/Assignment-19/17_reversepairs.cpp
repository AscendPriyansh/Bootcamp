#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& nums, int low, int mid, int high) {
    long long cnt = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
            j++;
        }
        cnt += (j - (mid + 1));
    }

    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
        }
    }
    while (left <= mid) {
        temp.push_back(nums[left++]);
    }
    while (right <= high) {
        temp.push_back(nums[right++]);
    }

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
    return cnt;
}

long long mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) return 0;
    int mid = low + (high - low) / 2;
    long long cnt = mergeSort(nums, low, mid);
    cnt += mergeSort(nums, mid + 1, high);
    cnt += merge(nums, low, mid, high);
    return cnt;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << mergeSort(a, 0, n - 1) << "\n";
    }

    return 0;
}