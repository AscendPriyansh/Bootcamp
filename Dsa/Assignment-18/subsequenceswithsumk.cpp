#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> f(int n, vector<long long>& v, long long k, int idx, vector<vector<long long>>& path, int row, vector<vector<long long>>& ans) {
    if(idx==v.size()) {
        long long sum=0;
        for(int i=0; i<path[row].size(); i++) {
            sum+=path[row][i];
        }
        if(sum==k) {
            
            for(int i=0; i<path[row].size(); i++) {
                ans[row].push_back(path[row][i]);
            }
        }
        row++;
        return ans;
    }

    path[row].push_back(v[idx]);
    f(n, v, k, idx+1, path, row, ans);
    path[row].pop_back();

    f(n, v, k, idx+1, path, row, ans);
}

int main() {
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<vector<long long>> path;
    vector<vector<long long>> ans;
    int row=0;
    f(n, v, k, 0, path, row, ans);

    cout<<row<<"\n";
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}