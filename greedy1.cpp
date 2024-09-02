Tại ngân hàng có các tờ tiền có mệnh giá lần lượt là 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Bạn cần tìm ra số tờ tiền ít nhất để có thể có được lượng tiền cho trước là N

Đầu vào
Dòng duy nhất chứa số nguyên N

Giới hạn
0<=N<=10^9

Đầu ra
In ra số tờ tiền ít nhất tìm được

Ví dụ :
Input 01
Copy
1250
Output 01
Copy
3

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
  int cnt =0;
  for(int i = 9;i>=0 ; i--){
     cnt+=n/a[i];
     n%=a[i];
  }
  cout<<cnt;


}
