#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector <int> candies(n,1);
        for(int i=1 ; i<n ; i++){
            if(ratings[i-1] < ratings[i]){
                candies[i] = candies[i-1]+1;
            }

        }

        for(int i=n-2 ; i>=0 ; i--){
            if(ratings[i+1] < ratings[i]){
                candies[i] = max(candies[i] , candies[i+1]+1);
            }
        }

        int res = accumulate(candies.begin(),candies.end(),0);
        return res;
        
    }
};

int main(){

    Solution solution;

    int n ; cin>>n;
    vector <int> v(n);
   for(auto &i : v){
    cin>>i;
   }
    int res = solution.candy(v);
    cout <<res;



}