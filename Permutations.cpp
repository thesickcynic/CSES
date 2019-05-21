#include <bits/stdc++.h>

using namespace std;

int n=3;

vector<int> subset;

int search(int k){
	if(k==n+1){
		return 1;
	}

	else{
		subset.push_back(k);
		for(int i=0; i<subset.size(); i++){
			cout<<subset.at(i);
		}
		cout<<endl;
		search(k+1);

		subset.pop_back();
		for(int i=0; i<subset.size(); i++){
			cout<<subset.at(i);
		}
		cout<<endl;
		search(k+1);	
	}

	
}


int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif



	int k = search(0);
	cout<<"Hua";
	return 0;
}