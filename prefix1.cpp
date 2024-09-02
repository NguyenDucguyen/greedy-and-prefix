Cho mảng số nguyên A[] gồm N phần tử, mảng cộng dồn của A[] là mảng F[] với tính chất F[i] lưu tổng các phần tử từ chỉ số 0 tới chỉ số i của mảng A[]. Bạn hãy xây dựng mảng cộng dồn F[]

Công thức xây dựng mảng cộng dồn : F[0] = A[0], F[i] = F[i - 1] + A[i] với i > 0

Đầu vào
• Dòng 1 là N

• Dòng 2 là N số nguyên

Giới hạn
• 1<=N<=10^6

• 1<=A[i]<=10^9

Đầu ra
In ra mảng cộng dồn

Ví dụ :
Input 01
Copy
6
8 7 6 5 6 6
Output 01
Copy
8 15 21 26 32 38

#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
   int n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   ll prev[n];
   for(int i=0;i<n;i++){
      if(i==0){
        prev[i] = a[i];
      }
      else {
        prev[i] = prev[i-1] + a[i];
      }
   }
   for(int i=0;i<n;i++){
     cout<<prev[i]<<" ";
   }
}
