# include <iostream>
using namespace std;

int main()
{
  
	//lesson2 task1
  
	int a = 22;
	float b = 5.0;
	char d = 'U';
	int arr [] ={1,2,3,4,5};

	//lesson2 task2
	enum symbolsXO {empty='_', player1='X', player2='O'};

	//lesson2 task3

	symbolsXO field[3][3] = {empty};
	field[1][2] = player1;
	field[2][0] = player2;
	field[0][0] = empty;
	cout << "pl1" << field[1][2] << endl;
	cout << "pl2" << field[2][0] << endl;
	cout << "em" << field[0][0] << endl;

	//lesson2 tsk4

	struct field{
	  int szY;
	  int szX;
	  symbolsXO map[3][3];
	};

	   return 0;   
}	   
