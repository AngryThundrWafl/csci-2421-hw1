#include <iostream>
#include "my_random.h"

int main()
{
	std::cout << "Hello this program will create a new pseudo-random seed number!" << std::endl;			//welcome screen for the user
	Random r;							//creates a object of class r

	int multiplier = 40;				//this will be the intial value of multiplier
	r.setMultiplier(multiplier);		//sends multiplier into the setmultiplier function 
	int increment = 725;				//this will be the intial value of the increment variable
	r.setIncrement(increment);			//sends increment variable into the setincrement fuction
	int modulus = 729;					//this will hold the intial value for modulus
	r.setModulus(modulus);				//sends modulus variable into set modulus function

	int seed;							//will hold the number of the seed
	std::cout << "Please enter an intial seed number so we can generate a new seed!" << std::endl;			//will ask user for a initial seed number
	std::cin >> seed;																						//user will input seed value

	r.setSeed(seed);					//function will set the intial value for the seed
	r.genSeed();
	int choice;				//will hold the value of the choice
	do
	{

		std::cout << "What would you like to do?" << std::endl;
		std::cout << "1: Generate new seed" << std::endl;
		std::cout << "2: Change seed number" << std::endl;
		std::cout << "3:Quit Program" << std::endl;
		std::cin >> choice;

			if (choice == 1)
			{
				int newSeed = r.getSeed();
				r.genSeed();						//function will generate a new seed number and set that number to the new seed
				std::cout << "Your new seed is " << newSeed<< std::endl;			//will retrieve the seed number and show the user
			}
			else if (choice == 2)
			{
				std::cout << "Enter new seed value" << std::endl;
				std::cin >> seed;																						//user will input seed value

				r.setSeed(seed);
			}
			else
				std::cout << "Wrong input please try again" << std::endl;

	} while (choice != 3);




	return 0;
}
