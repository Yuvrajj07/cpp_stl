# include <bits/stdc++.h>
using namespace std;
void funct(vector<int>v){
	int sum;
	for (int  i =0;i<v.size();i++){
		for (int j=i+1;j<=v.size();j++){
			if (v[j]<v[i]){
				sum = v[j];
				v[j]=v[i];
				v[i]=sum;
			}
		}
	}
	for (int i =1;i<=v.size();i++){
		if (v[i]!=v[i+1]){
			cout<<v[i];
			break;
		}
	}
	
}
int main () {
	vector<int>v;
	int n;
	cin>>n;
	for (int i =0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	funct(v);
	
}
