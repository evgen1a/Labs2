#include <iostream>
using namespace std;

class Fruit {
	protected:
		 int weight;
		
	public:
		
		Fruit ( int weight)
		{	
		this->weight=weight;
		}
		
			virtual void Print(){
			cout << " ������ ������  Fruit" << endl;
		}
		
		~Fruit(){      
           } 	
       	
};

class Veggies{
	protected:
				string color;
		public:	
		Veggies (string color)
		{	
		this->color=color;	
		}		
		
		void Print() {
			cout << " ������ ������  Veggies" << endl;
		}
		
		~Veggies(){      
           }  	
	};


class berries: public Fruit{
public:
	int size;
	berries ( int weight,int size):Fruit(weight)
		{	
	this->size=size;
		}
		
		void Print(){
			cout << " ������ ������  berries" << endl;
		}

	~berries(){
	}
};


class Gibrid:  public Fruit ,  public Veggies{
	public:
	Gibrid(int weight,string color):Fruit(weight), Veggies(color){
		
	}

	void Print(){
			cout << " ������ ������  Gibrid" << endl;
		}
	
	~Gibrid(){
	}
};


int main() {
		setlocale (LC_CTYPE, "rus");
	
	Gibrid b(988,"dgdfgdf");

	
	berries c(588,699);

	
	Fruit *p;
	p=&b;
	p->Print();
	
	p=&c;
	p->Print();
	
	
	return 0;
}
