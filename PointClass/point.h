#include <iostream>
using namespace std;


class point
{
	private:
		int X, Y;

	public:

		point () {X=0; Y=0;}


		void setPoint(int a, int b)
		{
			X = a;
			Y = b;
		}

		int getX(void)
		{
			return X;
		}
		int getY(void)
		{
			return Y;
		}

};
