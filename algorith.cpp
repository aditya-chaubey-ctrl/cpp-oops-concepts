#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a = 2;
	int b = 3;
	swap(a,b);
	int arr[] = {7,3,87,4,5};
	int n = 5;
	sort(arr,arr+1);
	for(int i = 0 ; i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"a = "<<a;
	cout<<"b = "<<b;
	return 0;
}
