#include <iostream>
#include <string>

using namespace std;

struct train{
	string pynkt_nazn;
	int number;
	float time_otpr;
	
};

void vvod(train *M,int N)
{
    
     for (int i=0;i<N;i++)
      {
        
        cout<<"Enter the destination: ";
		getline(cin,M[i].pynkt_nazn);
 
        cout<<"Enter number train: ";
		 cin>>M[i].number;
        cin.ignore();
 
        cout<<"Enter the departure time:";
		cin>>M[i].time_otpr;
        cin.ignore();
        cout <<endl;
 
      }
}

int  main()
{
      int N=6; 
	  string a;
	   int b=0;
	    int l;
	   string p;
	   float m;
      train *M=new train[N];
        vvod(M,N); 
        
        	for (int i=0 ; i<5 ; i++){
		for (int j=i+1 ; j<6;j++){
			if ( (M[i].time_otpr) > (M[j].time_otpr)){
				p =M[i].pynkt_nazn;
				M[i].pynkt_nazn=M[j].pynkt_nazn;
				M[j].pynkt_nazn=p;
				
				l =M[i].number;
				M[i].number=M[j].number;
				M[j].number=l;
				
				m =M[i].time_otpr;
				M[i].time_otpr=M[j].time_otpr;
				M[j].time_otpr=m;
				
			}
		}	
	}
       
        for (int i=0; i<6; i++){
        	cout << M[i].pynkt_nazn << "  " << M[i].number << "  " << M[i].time_otpr << endl;
		}

        cout <<"Enter destination:";
        getline(cin,a);
        for (int i=0; i<6; i++){
        	if ( a == M[i].pynkt_nazn ){
        		cout << M[i].pynkt_nazn << "  " << M[i].number << "  " << M[i].time_otpr <<endl;
        		b=b+1;
			}
				
		}
		if (b==0) cout << "There are no such trains!"; 
        
     delete []M;
}
