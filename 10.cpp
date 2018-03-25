#include <iostream>
using namespace std;
class Fruit {
public:
    class citruses{
	private:
			int weight;		
		public:	
		citruses (int weight)
		{	
		this->weight=weight;	
		}	
		
	double getCalories() 
    {
        return  weight * 3;
    }
    double getEnergy() 
    {
        return weight * 2;
    } 	
    
	};
};

int main() {
	setlocale (LC_CTYPE, "rus");
	
	Fruit::citruses orange(30);
    cout << "citruses Calories: " << orange.getCalories() << endl;
 	cout << "citruses Energy: " << orange.getEnergy() << endl;
	return 0;
}
