#include "my_random.h"

Random::Random()
{
	setSeed(0);						//this is the default constructor giving all the variables in the class zero
	setMultiplier(0);
	setIncrement(0);
	setModulus(0);

}

void Random::setSeed(int x)
{
	seed = x;						//gives the class variable seed the value of x
}

void Random::setMultiplier(int x)
{
	multiplier = x;					//gives the class variable multiplier the value of x
}

void Random::setIncrement(int x)
{
	increment = x;					//gives the class variable increment the value of x
}

void Random::setModulus(int x)
{
	modulus = x;					//gives the class variable modulus the value of x
}

int Random::getSeed()
{
	return seed;					//gets the value of the class varible seed and returns it 
}

void Random::genSeed()
{
	int tempSeed;
	tempSeed = (multiplier * seed + increment) % modulus;
	setSeed(tempSeed);
}

Random::~Random()
{

}
