#include <iostream>
using namespace std;


int main() {
	int T,a,b,c,d,e,f,g;
	cin>>T;
	while(T--){
	    do {
        cin >> a;
    } while (a < 100 || a > 200 && c%a==0);
    do {
        cin >> b;
    } while (b < 400 || b > 500 && d%b==0);
    do {
        cin >> c;
    } while (c < 1000 || c > 1200);
    do {
        cin >> d;
    } while (d < 1000 || d > 1500);
    
    e = c/a;
    f = d/b;
    cout<<e+f<<endl;
	}
	return 0;
}
