#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int c = 0;
    for(int i = 0; i <= n - 2; i++){
        int j = min_element(arr+i, arr+n) - arr;
        reverse(arr+i, arr+j+1);
        c += j - i + 1;
    }
    return c;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int ans = solve();
        cout << "Case #" << t+1 << ": " << ans << "\n";
    }
}
