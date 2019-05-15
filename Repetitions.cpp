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
    
    string s;
    int overall_max=0, curr=1;
    cin>>s;
    for(int i=0; i<s.length()-1; i++){
        if(s.at(i+1)==s.at(i))
            curr++;
        else
            curr=1;
        overall_max=max(curr, overall_max);
    }
    cout<<overall_max<<"\n";
    return 0;
}