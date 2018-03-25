#include <iostream>
using namespace std;
class driedFruits {
public:
    class Fruit{
	private:
			int weight;		
		public:	
		Fruit (int weight)
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
	
	driedFruits::Fruit orange(30);
    cout << "orange Calories: " << orange.getCalories() << endl;
 	cout << "orange Energy: " << orange.getEnergy() << endl;
	return 0;
}
