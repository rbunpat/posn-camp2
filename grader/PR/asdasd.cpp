#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll out1,out2,out3;
    bool sol = false;
    for (out1=-10000;out1<=a;out1++){
        for (out2=-10000;out2<=a-out1;out2++){
            out3 = a-out1-out2;
            if (out1 * out2 * out3 == b && out1*out1 +out2*out2+out3*out3 == c){
                sol = true;
                break;
            }
        }
        if (sol) break;
    }
    if (sol) cout << out1 << ' ' << out2 << ' ' << out3;
    else cout << "No solution.";
}