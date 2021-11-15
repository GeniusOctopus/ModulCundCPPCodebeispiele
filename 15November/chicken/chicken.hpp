#ifndef chicken_h
#define chicken_h
class chicken
{
	private:
		int foot = 2;
		int featherWeight = 0;

	public:
		chicken();
		chicken(int);
		chicken(int,int);
		void setFeatherWeight(int);
		void setFoot(int);
		int getFoot();
		int getFeatherWeight();

	protected:
};
#endif

