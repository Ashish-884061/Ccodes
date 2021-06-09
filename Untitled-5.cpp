#include <iostream>
using namespace std;

int main() {
	int num,n=0;
	cin>>num;
	for(int i=0;i<num;i++){
	    for(int j=0;j<5;j++){
	        n++;
	        if(i%2==0){
	            cout<<n<<" ";
	        }else{
	            for(j=num;j>=5;j--){
	            cout<<n<<" ";    
	            }
	        }
	    }cout<<"\n";
	}
	return 0;
}
