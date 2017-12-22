
#include <iostream> 
#include <fstream>  
#include <string>   
#include <sstream>   
using namespace std;

void Func(char *FileName)
{
	ifstream in(FileName); 

	if(!in.is_open())
	{
		cout << "Не удалось открыть файл." << endl;
		exit(-1);
	}

	string str, word, minStrWord; 
	string allText; 
	int minWord = 71; 
	cout << "Текст файла\n" << endl;
	while(!in.eof()) 
	{
		getline(in, str);    
		allText += str + " ";
		if(str.length() > 70)   
			{
				cout << "Ошибка!Строки файла больше 70 символов.";
				exit(-1);

			}
		cout << str << endl; 

		stringstream ss(str); 

		while(ss >> word) 
		{
		
			if(word.length() < minWord) {
			 minWord = word.length();
			  minStrWord = word;
			   }
		}
	}

	cout << "\nСамое короткое слово \"" << minStrWord << "\",кол-во символов = " << minWord << endl;
	cout << "\n\nНажмите любую клавишу" << endl;
	cout << "\nСлова,содержащие минимальное кол-во символов " << endl;
	

	
	stringstream ss(allText);  

		while(ss >> word) 
		{
			
			if(word.length() == minWord) {
			 cout << word  << '\n';
			  }
		}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	
	Func("input.dat");
	

	return 0;
}
