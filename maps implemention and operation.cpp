// find the sum of all  the unique elements of the the array
# include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];								// creating an array
	for (int i =0;i<n;i++){	
		cin>>arr[i];						// taking input in the array
	}
	map<int ,char>m;						// created a map 
	for (int i =0;i<n;i++){
		m[arr[i]]=' ';						// puting values in the map
	}
	int sum =0;										
	cout<<"THE ELEMENTS OF THE MAP ARE : "<<endl;
	
	map<int ,char> :: iterator it;			// declearing an iterator 
	
		m.erase(3);								// it is  used to delete an element or key from the map
	for (it = m.begin();it!=m.end();it++){
		cout<<(*it).first<<" ";					// printing the elements of the  map  
	}
	for (it= m.begin();it!=m.end();it++){
		sum = sum+(*it).first;					// getting the sum of all the elements of the map 
	}
	int size = m.size();						// it will return ther size of the map
	cout<<endl;
	cout<<size;
	cout<<endl;
	cout<<"sum of all the unique elements of the array is "<<sum<<endl;     // printing the sum of unique elements of the array
	// WE CAN ALSO FIND AN  ELEMENT IN A  MAP BY --> M.FIND()  FUNCTION
	cout<<"enter the key element you want to find in the map ??"<<endl;
	int key;
	cin>>key;
	
	for (it=m.begin();it!=m.end();it++){
		
	if ((*it).first==key){
		cout<<(*it).first <<" is present in the map "<<endl;
		break;
	}
	else {
	cout<<"value not present in the map" <<endl;
	break;
	}
}
	return 0;
	}
	
	/*
	NOTE :
	copmlexity of insertion  in map is --> O log(n)
	
	copmlexity of accessing elements in map is --> log(n)
	
	copmlexity of FINDING ELEMENTS in map is --> log(n)
	*/
