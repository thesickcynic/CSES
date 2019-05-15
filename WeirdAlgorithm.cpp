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
	
	/*#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif*/

    long long int n;

    cin>>n;

    while(n!=1){
    	cout<<n<<" ";
    	if(n%2==0)
    		n = n/2;
    	else
    		n = (n*3)+1;
    }

    cout<<n;



	return 0;
}





















