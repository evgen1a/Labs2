#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main(){
	setlocale (LC_CTYPE,"rus");

int n,m,xar,l=0;
cout<< "¬ведите кол-во строк в матрице:";
cin >> n;
cout <<"¬ведите кол-во столбцов в матрице:";
cin >> m;
int arr [n][m];
int b[m];
cout <<"введите элементы матрицы:";
	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			cin >> arr[i][j];
		}
	}

	for (int i=0;i<n;i++){
		xar=0;
		for (int j=0;j<m;j++){
			if (arr[j][i]%2!=0 && arr[j][i]<0){
				xar=xar+abs(arr[j][i]);
			}
		}
		b[l]=xar;
		l=l+1;
	}
	
	for (int i=0;i<m;i++){
		int min=b[i]; int imin=i;
		for (int j=i;j<m;j++){
			if (b[j]<min){
				min=b[j];imin=j;
			}
		}
		int t=b[i];
		b[i]=b[imin];
		b[imin]=t;
		
			for (int j=0;j<m;j++){
				int t=arr[j][i];
				arr[j][i]=arr[j][imin];
				arr[j][imin]=t;
				
			}
	}
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << arr[i][j]<< '\t';
		}
		cout << endl;
	}
		cout << endl;
	
	for (int f = 0; f < m; f++){
		int sum=0;	
			for (int l=0; l<n; l++){
				
				 if ( arr [l][f]<0 ){
		 			int p=f;
		 			
		 			for (int f = p; f < p+1; f++){	
					for (int l=0; l<n; l++){
		 			sum=sum+ arr[l][f];
		 		
			 }
				
}
break;
}
}
	
	if (sum!=0)
cout << sum << "  " ;
}
	return 0;
}
