#include<iostream>
#include<math.h>
using namespace std;

double f(double x){
	return 3*x*x-6*x+2;
}

double bisection(double a, double b, double error){
	if(f(a)*f(b)>=0){
		cout<<"error: one must be negative";
		return NAN;
	}



double c = a;
while( (b-a)/b >= error ){
	c=(a+b)/2;
	
	if(f(c)==0.0){
		break;
	}
	else if( f(c) * f(a) < 0){
		b=c;
	}
	else{
		a=c;
	}

}
	return c;
}

int main(){
	double a, b, error;
	cout << "Enter interval [a, b] where the root lies:" << endl;
	cout<<"a :";
	cin>>a;
	cout<<"b :";
	cin>>b;
	
	cout<<"error pression :";
	cin>>error;
	
	double root = bisection(a,b,error);
	
	if(!isnan(root)){
		cout<<"root = "<<root;
	}
	else{
		cout<<"error";
	}
	
	
}
