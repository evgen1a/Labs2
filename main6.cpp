#include <iostream>
#include <string>
	using namespace std;
	
class Person;
class Fruit {
	friend class Person;
	
	private:
		int weight;
		string color;
		
	public:
		Fruit ( int weight, string color)
		{	
		this->weight=weight;
		this->color=color;
	
		}
          ~Fruit(){   
	   
           } 		
};


	
	class Person{
		
		public:
			void cut(Fruit &d){
				d.weight-=50;
				cout << d.weight << endl;
			
			}
			
		void add (Fruit &d){
			d.weight+=100;
			cout << d.weight << endl;
		}
			
			void salad (Fruit & d , Fruit &apple){
				int massa;
				massa=d.weight+apple.weight;
				cout <<"orange+apple= " << massa;
			}
			
	};
	
		
	
int main() {
	setlocale (LC_CTYPE,"rus");
		Fruit orange (150,"Red");
		Fruit apple (300,"green");
		Person cook;
		cook.cut(orange);
		cook.add(orange);
		cook.add(apple);
	
		cook.salad(orange,apple);
		
	
	return 0;
}
