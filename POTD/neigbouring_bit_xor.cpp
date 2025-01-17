#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res = 0;
        for(auto i : derived){
            res ^=i;
        }
        return (res==0) ? true : false;
        
    }
};

int main(){
    Solution Solution;
    int n ; cin>>n;
    vector <int> v(n);
    for(int i =0 ; i<n ; i++){
        cin>>v[i];
    }
    int x = Solution.doesValidArrayExist(v);
    if(x){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
