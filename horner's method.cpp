#include<iostream>
using namespace std;

int main(){
	int n ;
	cout<<"enter the degree:";
	cin>>n;
	
	double a[n+1];
	cout<<"enter the cofficents (a0-an):"<<endl;
	 for (int i = 0; i <= n; ++i) {
        cin >> a[i];
    }
    
    double x;
    cout<<"enter the value at which polynomial to be evaluated :";
    cin>>x;
	
	double bn = a[n];
	while(n>0){
		bn = a[n-1] + bn*x;
		n--;
	}
	
	cout<<"P("<<x<<")="<<bn;
}
