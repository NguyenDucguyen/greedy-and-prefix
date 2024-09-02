Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là lớn nhất. Vì chi phí nối dây có thể rất lớn nên bạn cần chia dư kết quả cho 10^9 + 7

Gợi ý : Dùng hàng đợi ưu tiên, mỗi bước lấy ra 2 sợi dây dài nhất để nối

Đầu vào
Dòng 1 chứa số nguyên N

Dòng 2 chứa N số nguyên là độ dài các sợ dây

Giới hạn
1<=N<=10^6

Các sợi dây có độ dài không quá 10^9

Đầu ra
Đáp án của bài toán chia dư với 10^9 + 7

Ví dụ :
Input 01
Copy
3
5 6 1
Output 01
Copy
23

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>> Q;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        Q.push(x);
    }
    ll sum = 0;
    while (Q.size() > 1) {
        ll t1 = Q.top() % MOD; Q.pop();
        ll t2 = Q.top() % MOD; Q.pop();
        sum += (t1+t2) % MOD;
        sum%=MOD;
        Q.push(t1+t2);
    }

    cout << sum << endl;
    return 0;
}
