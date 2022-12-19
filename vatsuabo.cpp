#include <bits/stdc++.h>
using namespace std;

int VASU(int n,int k, int arr[]){
	sort(arr, arr+n, greater<int>());
	int soLit = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] > 0)
		{
			soLit += arr[i];
			arr[i+1] -= k;
			k++;
		}
		else break;
	}
	return soLit;
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("VATSUA.INT", "r", stdin);
		freopen ("VASU.OUT", "w", stdout);
	#endif
	int n,k;
	int arr[10000];
	cin >> n >>k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << VASU(n,k,arr);
	return 0;
}
