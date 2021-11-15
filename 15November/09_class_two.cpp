#include<iostream>

using namespace std;

class chicken
{
	private:
		int foot = 2;
		int featherWeight = 0;

	public:
		chicken()
		{
			cout << "chicken()" << endl;
			this->foot = 2;
			this->featherWeight = 0;
		}
		chicken(int i)
		{
			cout << "chicken(int)" << endl;
			this->foot = foot;
			this->featherWeight = 0;
		}
		chicken(int foot, int featherWeight)
		{
			cout << "chicken(int,int)" << endl;
			this->foot = foot;
			this->featherWeight = featherWeight;
		}
		~chicken() // Destrukto // Destruktorr
		{
			cout << "~chicken()" << endl;
			this->foot = 0;
			this->featherWeight = 0;
		}

		int getFeet() { return this->foot; }
		int getFeatherWeight() { return this->featherWeight; }
		void setFoot(int i) { this->foot = i; }
		void setFeatherWeight(int i) { this->featherWeight = i; }
	protected:
		
};

int main()
{
	chicken c1;
	chicken c2(2);
	chicken c3(2,1000);

	return 0;
}

