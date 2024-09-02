Cho mảng số nguyên A[] gồm N phần tử, có Q truy vấn, mỗi truy vấn là 2 số L, R bạn hãy tính tổng các số từ chỉ số L tới chỉ số R của mảng.

Đầu vào
• Dòng 1 là N và Q

• Dòng 2 là N số nguyên

• Q dòng tiếp theo mỗi dòng là 1 truy vấn

Giới hạn
• 1<=N,Q<=10^6

• 1<=A[i]<=10^9

• 0<=L<=R<=N-1

Đầu ra
In ra kết quả của mỗi truy vấn trên 1 dòng

Ví dụ :
Input 01
Copy
11 3
6 5 9 7 7 6 7 7 5 9 7
1 9
1 10
0 8
Output 01
Copy
62
69
59

#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
   int n,q;
   cin>>n>>q;
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
   for(int i=1;i<=q;i++){
      int l,r;
      cin>>l>>r;
      if(l ==0){
        cout<<prev[r]<<endl;
      }
      else  cout<<prev[r]-prev[l-1]<<endl;
   }


}
