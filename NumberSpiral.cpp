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

    int t;

    cin>>t;

    long long int y, x, init, ans;

    while(t--){
        cin>>y>>x;
        
        if(x>y){
            if(x%2!=0){
                init = x*x;
                ans = init-y+1;
            }
            
            else{
                init = ((x-1)*(x-1))+1;
                ans = init+y-1;
            }
        }

        else{
            if(y%2==0){
                init = y*y;
                ans = init-x+1;
            }
            else{
                init = ((y-1)*(y-1))+1;
                ans = init+x-1;
            }
        }
        cout<<ans<<endl;
    }
 
	return 0;
}