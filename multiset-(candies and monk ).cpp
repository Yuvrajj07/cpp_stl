/*
Q-->
 monk loves candies .
1)- he found N bags in the park.
2)- each bag is having some candies which is known to him .
3)- he is having k minutes and in each minutes he can only eat one bag.
4)-the bags are magical.
5)- whenever he picks a bag and eats candies and put on ground the candies get half in quantity .
   ex-> let the bag has 4 candies .then after eating when he pull the bag down .
   2 more candies are added on the bag
6)-so find the maxximum candies he can eat in k minutes .
 
*/

# include <bits/stdc++.h>
using namespace std;
int main () {
	int n,k;
	cout<<"enter time "<<endl;
	cin>>k;
	cout<<"enter number of bags ";
	cin>>n;
	multiset<long long int>m;		// defining a multiset for storing candies in ascending order.
	for (int i =0;i<n;i++){
		long long int a;
		cin>>a;
		m.insert(a);					
	}
	int long long tcnd= 0;
	for (int i =0;i<k;i++){
		multiset<long long int>:: iterator it;
		it = (--m.end());
		long long int cndcnt= *it;
		tcnd+=cndcnt; 
		m.erase(it) ;
		m.insert(cndcnt/2);
	}
	cout<<tcnd<<endl;
}
/*
LOGIC --> 
		THE LAST ELEMENT OF THE MULTISET WILL BE THE LARGEST ELEMENT.
		THE MONK WILL  PICK-UP AND EAT THE LAST BAG AND DROP IT DOWN .
		add a number --> half of amount of candies  the picked bag is having. 
		THE HALF OF THE ORIGINAL NUMBER OF THE CHOCOLATES WILL BE ADDED IN THE BAG.
		again he will pick the last bag which is having the maxximum numbert of the  candies .
		the process will repeat K number of times .
			
*/
