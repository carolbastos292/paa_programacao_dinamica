#include <iostream>
#include <vector>
#define int long long
using namespace std;

signed main(){
    int n, frutos, k;
    vector<int> loopapoons, pd;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> frutos;
        loopapoons.push_back(frutos);
    }
    cin >> k;
    for(int i=0;i<n;i++){
        if(i==0) pd.push_back(loopapoons[0]);
        else if(i<k) pd.push_back(max(loopapoons[i],pd[i-1]));
        else{
            pd.push_back(max(loopapoons[i]+pd[i-k],pd[i-1]));
        }
    }
    cout << pd[n-1] << endl;
    return 0;
}