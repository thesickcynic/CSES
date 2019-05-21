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

    int n; cin>>n;
    int a = 1;
    int b, i;
    if(n==1){
        cout<<n;
    }
    else if(n==2||n==3){
        cout<<"NO SOLUTION";
    }

    else if(n==4){
        cout<<"2 4 1 3";
    }

    else{
        if(n%2==0){
            b = (n/2)+1;
            for(i=0; i<(n/2); i++){
                cout<<a+i<<" "<<b+i<<" ";
            }
        }
        else{
            b = (n/2)+2;
            for(i=0; i<(n/2);i++){
                cout<<a+i<<" "<<b+i<<" ";    
            }
            cout<<a+i<<" ";
        }
    }
	return 0;
}