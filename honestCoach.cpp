#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n, i, temp;
cin>>t;
int arr[1000];
while(t--){
	cin>>n;

	for(i=0; i<n; i++){
		cin>>arr[i];
	}

	sort( arr, arr+n );
    vector<int> a;

	for(i=1; i<n; i++){
		temp = abs(arr[i] - arr[i-1]);
		a.push_back(temp);
	}

	sort(a.begin(), a.end());
	cout<<a[0]<<endl;

}



}
