#include<bits/stdc++.h>
using namespace std;;

bool possible(vector<long long>& v, long long pages, int k) {
    int n = v.size();

    int students = 1;
    long long pagecount = 0;

    for(int i=0; i<n; i++) {
        if(pagecount + v[i] <= pages) {
            pagecount += v[i];
        }
        else {
            pagecount = v[i];
            students++;
        }
    }

    return students<=k;
}

long long BinarySearch(vector<long long>& v, long long k, long long max, long long sum) {
    int n = v.size();

    long long low = max;
    long long high = sum;
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(possible(v, mid, k)) {
            high = mid - 1;
            store = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return store;
}


int main() {
    int n, k;
    cin>>n>>k;
    vector<long long> v(n);
    long long sum=0;
    long long max = LLONG_MIN;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
        if(v[i]>max) {
            max = v[i];
        }
    }
    
    if(v.size()<k) {
        cout<<-1;
        return 0;
    }

    long long result = BinarySearch(v, k, max, sum);
    cout<<result;

    return 0;
}