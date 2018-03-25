#include <iostream>
using namespace std;


class Fruit {

public:
    virtual double getCalories() =0;
    virtual double getEnergy() =0;
    virtual void className()=0;
};

class citruses: public Fruit{

	private:
			int weight;
				
		public:	
		
		
		citruses (int weight)
		{	
		this->weight=weight;
			
		}	
		
	double getCalories() override
    {
        return  weight * 2;
    }
    double getEnergy() override
    {
        return weight * 2 + 200;
    } 	
    
    void className()
    {
        cout << "citruses" << endl;
    }
    
    
	};


class berries: public Fruit{
	private:
			int size;
			int weight;

public:
	
	berries ( int weight,int size)
		{	
	this->weight=weight;
	this->size=size;
	
		}
		
double getCalories() override
    {
        return size * size ;
    }
    double getEnergy() override
    {
        return 2 * weight+500;
    }
    void className()
    {
        cout << "berries" << endl;
    }
};





int main() {
	setlocale (LC_CTYPE, "rus");
	
	citruses orange(30);
    berries blueberries(30,50);
     
    cout << "citruses Calories: " << orange.getCalories() << endl;
 	cout << "berries Calories: " << blueberries.getCalories() << endl;
 	
 	cout << "citruses Energy: " << orange.getEnergy() << endl;
 	cout << "berries Energy: " << blueberries.getEnergy() << endl;
 	
	
	return 0;
}
