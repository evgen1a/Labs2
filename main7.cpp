#include <iostream>
using namespace std;

class Fruit {

public:
		int weight;
		int height;

	
			Fruit()
			{	
			 
			}
		
		Fruit ( int weight, int height )
		{	
		this->weight=weight;
		this->height=height;
		}
		

		Fruit & operator=(const Fruit & other){
			this->weight=other.weight;
			this->height=other.height;
			return *this;
		}
		
		
		Fruit operator +( const Fruit &other){
			Fruit c;
			c.weight=this->weight+other.weight;
			c.height=this->height+other.height;
			return c;
			
		}

		Fruit operator *( const Fruit &other){
			Fruit c;
			c.weight=this->weight*other.weight;
			c.height=this->height*other.height;
			return c;
			
		}
};

int main() {
	
	
		setlocale (LC_CTYPE,"rus");
	
		Fruit apple(200,7);
		Fruit orange (150,8);
		apple=orange;
		Fruit pear=apple+orange;
		Fruit melon=apple*orange;
		
		
		
		
	cout  << apple.weight <<" "<<  apple.height << endl;
	cout  << orange.weight <<" "<< orange.height << endl;
	cout  << pear.weight <<" "<< pear.height << endl;
	cout  << melon.weight <<" "<< melon.height << endl;	
	
	return 0;
}
