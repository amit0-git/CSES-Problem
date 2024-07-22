#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long n;
    long long val;
    long long ans=0;

    cin>>n;
    for (int i=1;i<n;i++){
        cin>>val;
        ans+=val;
        
    }
    cout <<(n*(n+1)/2)-ans;
    return 0;
}