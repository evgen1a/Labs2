#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_CTYPE,"rus");
	int n,k,m,p;
	cout << "Введите кол-во элементов массива:";
	cin >> n;
	float arr[n];
	cout <<"Введите элементы массива:";
	for (int i=0; i<n;i++)
	cin >> arr[i];
	 float min,c=0;
	 min=arr[0];
	 for (int i=0; i<n;i++){
	 	if (arr[i]< min){
	 		min=arr[i];
	 		k=i;
		 }
	 }	
	 
	for (int i=0; i<n;i++){
		if (arr[i] < 0 ){
		m=i;
		break;	
		
		}
	}
	for (int i=m+1; i<n;i++){
		if (arr[i] < 0 ){
		p=i;
		break;	
		}
	}
	 
	 for (int i=m+1; i<p;i++){
	 	c=c+arr[i];
	 }
	
	 float b,count=0;
	 for (int ii=0; ii<n; ii++){
	 	for (int i=0; i<n;i++){
	 		if (i==n-1)
	 			break;
			 
	 		if (abs(arr[i]) >= 1 && abs(arr[i+1]) < 1){
	 			b=arr[i];
	 			arr[i]=arr[i+1];
	 			arr[i+1]=b;
			 }
	 }
	 }
		for (int i=0; i<n;i++){
			cout << endl << arr[i];
		
}
    cout << "Номер минимального элемента массива="<< k << endl << "Сумма элементов массива,расположенные между 1 и 2 отриц. элементами=" <<  c;
	return 0;
}
