#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i =0;
        vector<vector<int>> ans;
        while(i<n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i+=1;
        }

        while(i<n && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(intervals[i][0] , newInterval[0]);
            newInterval[1]  = max(intervals[i][1] , newInterval[1]);
            i+=1;
        }
        ans.push_back(newInterval);

        while(i<n){
            ans.push_back(intervals[i]);
            i+=1;
        }

        return ans;
    }
};

int main(){

    Solution solution;

    vector<vector<int>> v = {{1,3},{6,9}};
    vector<int> v1 = {2,5};

    
    vector<vector<int>> v2 = solution.insert(v,v1);

    for(auto rw : v2){
       
        for(auto i : rw){
            cout<<i<<" ";
        }
       
    }
}