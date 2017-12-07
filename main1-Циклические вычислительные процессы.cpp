#include <iostream>

using namespace std;

int main() {
	double a,b,c,xk,xn,dx;
	cout << "Vvedite a,b,c,xn,xk,dx:";
	cin >> a >> b >> c >> xn >> xk >> dx;
	if ((int(a)^ int(b))&~(int (a)| int (c))!=0) {
		for (double x=xn; x <= xk; x=x+dx){
			double f;
			if (c<0 && a!=0)
			f=-a*x*x;
			else if (c>0 && a==0)
			f=(a-x)/(c*x);
			else f=x/c;
			cout << "x= "<<x<<"\tf="<<f<<endl;
		}
	}
	else{
		for (double x=xn; x<=xk;x=x+dx){
			int f;
			if (c<0 && a!=0)
			f=-a*x*x;
			else if (c>0 && a==0)
			f=(a-x)/(c*x);
			else f=x/c;
			cout << "x= "<<x<<"\tf="<<f<<endl;  
		}
	}
	
	return 0;
}
