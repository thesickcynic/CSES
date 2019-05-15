#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// #ifndef ONLINE_JUDGE
 //    // for getting input from input.txt
 //    freopen("input.txt", "r", stdin);
 //    // for writing output to output.txt
 //    freopen("output.txt", "w", stdout);
	// #endif
    
    int n, temp;
    ll sum = 0;
    cin>>n;
    long long ans;
    for(int i=0; i<n-1; i++){
        cin>>temp;
        sum+=temp;
    }

    ans = (((ll)n*(ll)(n+1))/2)-sum;
    cout<<ans;
	return 0;
}





















