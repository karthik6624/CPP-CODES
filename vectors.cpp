#include<bits/stdc++.h>
using namespace std;

void vsize(vector<int>v)
{
	cout<<v.size()<<endl;  //time complexity is O(1)
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main()
{
//	//vectors are continuous memory block
//	vector<int>v;          //declaration and ****size=0
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		int x;
//		cin>>x;
//		v.push_back(x);   // time complexity of push_back() is O(1)..
//		vsize(v); 
//	}

	vector<int>v(5);                  // by default all values are 0;
	for(int i=0;i<5;i++)
	{
		cout<<v[i]<<" ";                 // 0 0 0 0 0
		}	
		cout<<endl;
	vector<int>s(10,3);    //initialising 10 blocks with 3;
	for(int i=0;i<10;i++)
	{
		cout<<s[i]<<" ";            // 3 3 3 3 3 3 3 3 3 3  
		}	
	s.pop_back();            //removes last element of the vector
	cout<<endl;
	s.push_back(11);
	for(int i=0;i<10;i++)
	{
		cout<<s[i]<<" ";            // 3 3  3 3  3 3 3  3  11
		}
	vector<int>v2=v;      //make a copy of vector     O(n)time complexity...

	return 0;
}
