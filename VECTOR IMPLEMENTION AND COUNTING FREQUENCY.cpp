#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// creating  function of frequency counting  :
void freq(vector<int>v , int x){
	vector<bool>b(x,false);
	for (int i =0;i<x;i++){
		if (b[i]==true){
			continue;
		}
		int count =1;
		for (int j =i+1;j<x;j++){
			if(v[i]==v[j]){
				b[j]=true;
				count++;
			}
		}
		cout<<v[i]<<" = "<<count<<endl;
	}
}
int main () {
	vector<int >v;	// CREATING VECTOR OF NAME V
	int n;
	cin>>n;
	for (int i =0;i<n;i++){
		int j;
		cin >>j;
		v.push_back(j);			 // INSERTING ELEMENTS IN THE VECTOR 
	
	}
//	v.push_back(4);
//	v.push_back(3);
	cout<<"printing the vector : "<<endl;
	for (int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
		cout<<endl;
			cout<<endl;
	int x = v.size();
	cout<<"the following elements are there in the vector  with their number of frequency --> "<<endl;
		freq(v,x);
	cout<<endl;
	cout<<"printing vector after sorting is : "<<endl;
	
	//sort(v,x); --> sorting vector by user defined function 
	sort(v.begin(),v.end());	// sorting vector using algorithm  (inbuilt function)
	for (int i =0;i<n;i++){
		cout<<v[i]<<" ";
		}
		return 0;
	}
	
