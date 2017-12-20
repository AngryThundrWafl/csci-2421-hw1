#pragma once

class Random
{
private:
	int seed;						//will hold the seed number
	int multiplier;					//holds the multiplier value
	int increment;					//holds the increment value
	int modulus;					//holds the modulus value
public:
	Random();						//default constructor
	void setSeed(int x);			//function that sets the seed number
	void setMultiplier(int x);		//function that sets the multiplier
	void setIncrement(int x);		//function that sets the increment 
	void setModulus(int x);			//function that sets the modulus
	int getSeed();				//function that gets the seed number from the class
	void genSeed();			//function that will change the intial seed value and then generate a new seed

	~Random();						//destructor for the class random



};
