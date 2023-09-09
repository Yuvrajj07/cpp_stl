# include <bits/stdc++.h>
using namespace std;
int main () {
	map<int ,int>m;
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
	cin>>arr[i];
	m[arr[i]]= m[arr[i]]+1;
	}
	map<int ,int> ::iterator it;
	for (it = m.begin();it!=m.end();it++){
		cout<<(*it).first<<" --> "<<(*it).second<<endl;
	}
}
