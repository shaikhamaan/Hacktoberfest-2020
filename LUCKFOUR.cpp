#include <bits/stdc++.h>
using namespace std;

void fours(int n){
    
    int count=0;
    int ans;
    while(n){
        ans=n%10;
        if(ans==4){
            count++;
        }
        n=n/10;
    }
    cout<<count<<'\n';
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int num;
	    cin>>num;
	    fours(num);
	}
	
	return 0;
}
