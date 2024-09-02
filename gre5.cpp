#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     int n;
     cin>>n;
     ll a[n];
     for(auto & x : a){
        cin>>x;
     }
     int l = 0;
     int r = n-1;
     bool check = false;
     while(l<r){
        for(int i=r-1;i>=l;i--){
            if(a[i]<a[i+1]){
                check = true;
            }
        }
        l++;
        r--;
     }
     if(check ) cout<<"YES";
     else cout<<"NO";

}
