Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là sắp xếp lại dãy số này để tổng A[0] * 0 + A[1] * 1 + A[2] * 2 + ... + A[N - 1] * (N - 1) đạt giá trị lớn nhất

Đầu vào
Dòng 1 là N

Dòng 2 là N số trong mảng A[] viết cách nhau 1 dấu cách

Giới hạn
1<=N<=10^6

1<=A[i]<=10^9

Đầu ra
In ra kết quả lớn nhất đạt được sau khi chia dư cho 10^9 + 7

Ví dụ :
Input 01
Copy
5
1 1 2 1 3
Output 01
Copy
21

#include<bits/stdc++.h>
using namespace std;
long long mod  = 1e9 +7;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a,a+n);
     long long  sum =0;
     for(int i=0;i<n;i++){
         sum+=(((long long)a[i]*i)% mod);
     }
     cout<<sum%mod;
}
