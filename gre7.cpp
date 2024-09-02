Cho N công việc với thời gian bắt đầu và kết thúc, tại mỗi thời điểm bạn chỉ thể thực hiện 1 công việc. Bạn hãy tìm ra số lượng công việc lớn nhất mà bạn có thể thực hiện mà các công việc không bị trùng lặp thời gian, biết rằng 2 công việc không trùng lặp thời gian nếu thời gian bắt đầu của công việc hiện tại lớn hơn thời gian kết thúc của công việc trước đó thực hiện.

Đầu vào
Dòng thứ nhất là số nguyên N

N dòng tiếp theo mỗi dòng là thời gian bắt đầu, kết thúc của một công việc.

Giới hạn
1<=N<=10^6

Thời gian bắt đầu và kết thúc là số nguyên 32bit, thời gian kết thúc của 1 công việc luôn lớn hơn hoặc bằng thời gian bắt đầu của nó.

Đầu ra
In ra số công việc tối đa có thể thực hiện

Ví dụ :
Input 01
Copy
4
1 10
2 3
4 5
4 9
Output 01
Copy
2

#include<bits/stdc++.h>
using namespace std;
bool check(pair<int,int> pe1,pair<int,int> pe2){
 return pe1.second<pe2.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> pe(n);
    for(int i=0;i<n;i++){
        cin>>pe[i].first>>pe[i].second;
    }
    sort(pe.begin(),pe.end(),check);
    int cnt = 0;
    int current = 0;
    for(int i=0;i<n;i++){
        if(pe[i].first> current){
            cnt++;
            current = pe[i].second;
        }
     }
    cout<<cnt;
}
