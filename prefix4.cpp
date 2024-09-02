Cho mảng số nguyên A[] gồm N phần tử, mảng hiệu của mảng A[] là mảng D[] với D[0] = A[0] và D[i] = A[i] - A[i - 1] . Nhiệm vụ của bạn là xây dựng mảng hiệu của mảng A[]

Đầu vào
• Dòng 1 là N

• Dòng 2 là N số nguyên

Giới hạn
• 1<=N<=10^6

• 1<=A[i]<=10^9

Đầu ra
In ra mảng hiệu của mảng A[]

Ví dụ :
Input 01
Copy
5
7 6 9 9 8
Output 01
Copy
7 -1 3 0 -1

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll prev[n];
    for(int i=0;i<n;i++){
        if(i == 0) prev[i] = a[i];
        else prev[i] =a[i] - a[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }


}
