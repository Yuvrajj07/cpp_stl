# include <bits/stdc++.h>
using namespace std;
int main () {
	pair <int,int>p;		// declearing pair
	p= make_pair(4,3);		// defining pair 
	

	pair <string ,int >y; 		// pair < data_type , data_type >name of pair;
	y = make_pair("yuvraj",07); 

	pair<string ,string >a;
	a = make_pair(" aryan", "ran");  // 

	pair <int ,int >pp;
	p ={4,7};

	cout<<p.first<<" "<<p.second<<endl;
	cout<<y.first <<" "<< p.second<<endl;	
	cout<<a.first <<" is --> "<<a.second<<endl;
	cout<<p.first<<" "<<p.second<<endl;
	}
 	/* 
	pair: pair is used to create relation between two things;
	creating pair :	pair<datatype , datatype>name of pair;
	
	to assing values to pair we use :
 1st way -->	make_pair(values ,values);
 2nd way --> name of pair ={values,values};
 
 printing pairs :
 to print pairs we use --> name of pair.indexnumber;
 index number = first ,second (these are the index numbers);
 examle : cout<<pair1.first<<" "<<pair1.second;

	*/
