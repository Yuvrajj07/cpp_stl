//									IMPLEMENTION OF SET --> (STL)
// 									SET USES RED BLACK TREE FOR IMPLEMENTION.
//									NOTE: IN SET EVERY ELEMENT IS STORED IN THE SORTED  ORDER.
//									set STORS ONLY UNIQUE ELEMENTS 

# include <bits/stdc++.h>
using namespace std;
int print (set<int>s){ 							// function for printing set 
	int x = s.size();			// it will return the size of the set (number of unique elements present in the set) 
	cout<<"THE NUMBER OF THE UNIQUE ELEMENTS PRESENT IS THE SET IS  "<<x<<endl;
	set<int> :: iterator it;					// defining an iteraator for the set 
	for (it = s.begin();it!=s.end();it++){
		cout<<(*it)<<endl;						// printing elements of the set using iterator
	}
}
int main () {
	set<int>s;									//defining a set of name --> s
	int n;
	cin>>n;
	for (int i =0;i<n;i++){
		int m;
		cin>>m;
		s.insert(m);							 // inserting elements in the set --> 0(log(N))
	}
	print(s);
	cout<<"enter the element you want to search in the list :"<<endl;
	int a;
	cin>>a;
	
	// s.find() : used to find an element in the set .		complex. -->  0(log(N))
	
	if (s.find(a)!=s.end()){		
		cout<<"element is present ";
	}
	else {
		cout<<"element is not present";
	}
	return 0;
}
// EVERY (MOST OF THE) OPERATION IN THE SET TAKES 0(LON(N)) -->TIMES 
