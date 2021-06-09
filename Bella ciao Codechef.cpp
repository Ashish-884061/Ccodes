#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T;
	cin>>T;
	while(T--){
	    long long d,D,P,Q,S=0,n;
	    cin>>D>>d>>P>>Q;
	    n = D/d;
	    if(n%2==0){
	        S=d*((n/2)*(2*P+(n-1)*Q));
	    }else{
	        S = d*(n*(P+((n-1)/2)*Q));
	    }
	    S += (D%d)*(P+(n)*Q);
	    
	    cout<<S<<endl;
	}
	return 0;
}
