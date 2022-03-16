#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
#define f(i,n) for(int i=0;i<n;i++)
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; cin>>n;
	    string s;
	    cin>>s;
	    int s1[26]={ 0 };
	    int s2[26]={ 0 };
	    int i=0;
	    int lols=0; //length of longest subsequence
	    while(i<n){
	       if(i<n/2){
	           s1[s[i]-'a']+=1;
	           i++;
	       }
	       else{
	           s2[s[i]-'a']+=1;
	           i++;
	       }
	    }
	    i=0;
	    while(i<26){
	        lols+=min(s1[i],s2[i]);
	        i++;
	    }
	    cout<<lols<<endl;
	}
	return 0;
}
