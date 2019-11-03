#include "random.h"


RandomNumbers::RandomNumbers(unsigned long int s)
:seed(s)
{
	rng = std::mt19937(s);
}

void RandomNumbers::uniform_double(std::vector<double>& vec, double lower, double upper){
	std::uniform_real_distribution<double> distribution(lower, upper);
	for(size_t i(0); i< vec.size(); ++i){
		vec[i] = (distribution(rng));
	}
}
double RandomNumbers::uniform_double(double lower, double upper){
	std::uniform_real_distribution<double> distribution(lower, upper);
	return distribution(rng);

}
void RandomNumbers::normal(std::vector<double>& vec, double mean, double sd){
	std::normal_distribution<double> distribution(mean, sd);
	for(size_t i(0); i< vec.size(); ++i){
		vec[i] = (distribution(rng));
	}
}
double RandomNumbers::normal(double mean, double sd){
	std::normal_distribution<double> distribution(mean, sd);
	return distribution(rng);
}
void RandomNumbers::poisson(std::vector<int>& vec, double mean){
	std::poisson_distribution<int> distribution(mean);
	for(size_t i(0); i< vec.size(); ++i){
		vec[i] =(distribution(rng));
	}
}
int RandomNumbers::poisson(double mean){
	std::poisson_distribution<int> distribution(mean);
	return distribution(rng);
}


