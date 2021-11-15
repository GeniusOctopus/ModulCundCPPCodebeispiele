#include<cstddef>

#ifndef animal_hpp
#define animal_hpp
class animal
{
	private:
		int legCount = 0;
		int weight = 0;
		char *species = NULL;
	public:
		animal();
		animal(char *);
		animal(int,int);
		animal(int,int,char *);
		void setLegCount(int);
		void setWeight(int);
		int getLegCount();
		int getWeight();
		char * getSpecies();
	protected:
};
#endif
