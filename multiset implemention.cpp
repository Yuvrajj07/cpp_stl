//	implementing mutiset
// 	multiset takes duplicate values also 								
# include <bits/stdc++.h>
using namespace std;
int main (){
	multiset<int>m; 				//defining multiset of name - m
	m.insert(4);					// adding elements to the multiset
	m.insert(3);					// insertion complexity --> log(N)
	m.insert(2);
	m.insert(6);
	m.insert(4);
									
    //m.erase(4); 	// if we will delete like this it will delete all elements having value 4
	multiset<int>::iterator it;		// creating an iterator for multiset
// deleting single element only 
	it =m.find(4);      			// finding element complexity -->  log(N)
	if (it !=m.end()){
		m.erase(it);      // it will first element  whose value matches to the deleting element 
	}
	for (it=m.begin();it!=m.end();it++){
		cout<<(*it)<<endl;			//printing elements of the multiset
	}
	return 0;
} 
