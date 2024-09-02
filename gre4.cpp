Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy chia mảng thành 2 tập con (không cần liên tiếp) có K và N - K phần tử sao cho độ chênh lệch giữa tổng của 2 tập con là lớn nhất có thể.

Đầu vào
Dòng 1 chứa 2 số nguyên N và K

Dòng thứ 2 gồm N số của mảng A[]

Giới hạn
1<=K<=N<=10^6

0<=A[i]<=10^9

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
5 3
2 8 9 1 3
Output 01
Copy
17

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>>n>>k;
     long long a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a,a+n,greater<long long>());
     if(n/k ==1){
        long long sum1=0;
        long long sum2=0;
       for(int i=0;i<k;i++){
        sum1+=a[i];
       }
       for(int i=k;i<n;i++){
         sum2+=a[i];
       }
       cout<<sum1-sum2;

     }
     else{
        long long sum1=0;
        long long sum2=0;
        for(int i=0;i<n-k;i++){
        sum1+=a[i];
       }
       for(int i=n-k;i<n;i++){
         sum2+=a[i];
       }
       cout<<sum1-sum2;
     }
}

