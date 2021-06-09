#include <iostream>
using namespace std;

int main() {
	int n,k,h,f;
	cin>>n>>k;
	int totalCandies = n*k;
	int arr[totalCandies];
	int arr1[n];
	int arr2[k];
	for(int i = 0; i<totalCandies;i++){
	    cin>> arr[i];
    }
	for(int j =0;j<n;j++){
	    cin>>arr1[j];
	}for(int g=0;g<k;g++){
	    cin>>arr2[g];
	}
	for(int i = 0;i<totalCandies;i++){
        for(int j =0;j<=i;j++){
            if(arr[i]==arr1[j]){
                arr2[i]++;
            }
        }
	}
	cout<<arr2;
	return 0;
}
