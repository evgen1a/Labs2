#include <iostream>
#include <string>
	using namespace std;

class Veggies;

class Fruit {
	friend int sum(Fruit , Veggies);
	private:

		int weight;
		string color;
	public:
		static int count;
			Fruit()
			{
			 cout << "�������� ����������� �� ��������� "<< this << endl; 	
			 count++;
			}
		
		Fruit ( int weight, string color)
		{
			
		this->weight=weight;
		this->color=color;
			count++;	
		cout << "�������� ����������� � ����������� "<< this << endl; 
		}
		
		Fruit(const Fruit &other){ 
				
				this->weight=other.weight;
				this->color=other.color;
		
                 cout << "�������� ����������� ����������� "<< this<< endl; 
                 count++;
        } 
          ~Fruit(){ 
                 cout <<"�������� ���������� "<< this<< endl; 
           } 
   
		
};

	int Fruit::count=0;
	
	class Veggies{
		friend int sum(Fruit , Veggies);
		
		private:
			int weight;
			string color;
			
		public:
			Veggies ( int weight, string color)
		{	
		this->weight=weight;
		this->color=color;	
		}
		
		~Veggies(){      
           } 
			
	};
	
	int sum (Fruit orange ,Veggies cucumber ){
		return ( orange.weight + cucumber.weight);
	}	
	
	
	
	
	
int main() {
	setlocale (LC_CTYPE,"rus");
	
		Fruit apple;
		Fruit orange (150,"Red");
		Fruit  mandarin(orange);
		Veggies cucumber (300,"green");
		
	cout  <<"���������� �������� ������ Fruit : " << Fruit::count << endl;
	cout << sum(orange , cucumber) << endl;
	
	return 0;
}
