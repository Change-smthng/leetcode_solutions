#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int> pq1,pq2;
        for(auto i : g){
            pq1.push(i);
        }
        for(auto i : s){
            pq2.push(i);
        }
        int cnt =0;
       while (!pq1.empty() && !pq2.empty()) {
            if (pq2.top() >= pq1.top()) {
                
                cnt++;
                pq2.pop(); 
                pq1.pop(); 
            } else {
              
                pq1.pop();
            }
        }
        return cnt;

        
    }
};

int main(){

Solution solution;

int g , c ;
cin>>g>>c;
vector <int> greed(g) , cookie(c);
for(int i =0 ; i<g ; i++){
    cin>>greed[i];
}
for(int i =0 ; i<c ; i++){
    cin>>cookie[i];
}


int result = solution.findContentChildren(greed , cookie);
cout<<result;


}