
Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là nhỏ nhất

Đầu vào
Dòng 1 chứa số nguyên N

Dòng 2 chứa N số nguyên là độ dài các sợ dây

Giới hạn
1<=N<=10^5

Các sợi dây có độ dài không quá 10^5

Đầu ra
In ra chi phí nối dây tối thiểu

Ví dụ :
Input 01
Copy
4
1 2 3 4
Output 01
Copy
19

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    priority_queue<ll, vector<ll>,greater<ll>>Q;
    for(int i=0;i<n ; i++){
        ll x;
        cin>>x;
        Q.push(x);
    }
    ll sum =0;
    while(Q.size()>1){
        ll t1 = Q.top() ; Q.pop();
        ll t2 = Q.top() ; Q.pop();
        sum +=(t1+t2);
        Q.push(t1+t2);
    }
    cout<<sum;

}
