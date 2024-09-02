Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc số '6' thành số '5'. Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

Đầu vào
Dòng duy nhất chứa 2 số A và B

Giới hạn
1<=A<=B<=10^16

Đầu ra
In ra tổng lớn nhất, nhỏ nhất tìm được

Ví dụ :
Input 01
Copy
607 53
Output 01
Copy
670 560

#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,b;
   cin>>a>>b;
   string c=a;
   string d =b;
   for(int i=0;i<c.size();i++){
          if(c[i] == '5') c[i] ='6';
   }
     for(int i=0;i<d.size();i++){
          if(d[i] == '5') d[i] ='6';
   }
   cout<< stoll(c)+stoll(d)<<" ";
     for(int i=0;i<a.size();i++){
          if(a[i] == '6') a[i] ='5';
   }
     for(int i=0;i<b.size();i++){
          if(b[i] == '6') b[i] ='5';
   }
   cout<< stoll(a)+stoll(b);



}
