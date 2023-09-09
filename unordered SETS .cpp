//									IMPLEMENTION OF UNORDERED_SET --> (STL)
//									unordered_set DOES NOT STORES ELEMENT IN THE SORTED ORDER 
//									unordered_set STORS ONLY UNIQUE ELEMENTS 
# include <bits/stdc++.h>
using namespace std;
int print (unordered_set<int>s){ 							// function for printing set 
	int x = s.size();			     // it will return the size of the set (number of unique elements present in the set) 
	cout<<"THE NUMBER OF THE UNIQUE ELEMENTS PRESENT IS THE SET IS  "<<x<<endl;
	unordered_set<int> :: iterator it;					// defining an iteraator for the unordered_set 
	for (it = s.begin();it!=s.end();it++){
		cout<<(*it)<<endl;						// printing elements of the unordered_set using iterator
	}
}
int main () {
	unordered_set<int>s;									//defining an  unordered_set of name --> s
	int n;
	cin>>n;
	for (int i =0;i<n;i++){
		int m;
		cin>>m;
		s.insert(m);							 // inserting elements in the unordered_set --> 0(1)
	}
	print(s);
	cout<<"enter the element you want to search in the list :"<<endl;
	int a;
	cin>>a;
	
	// s.find() : used to find an element in the unordered_set .		complex. -->  0(1)
	
	if (s.find(a)!=s.end()){		
		cout<<"element is present ";
	}
	else {
		cout<<"element is not present";
	}
	return 0;
}
