#include <iostream>

using namespace std;

int main()
{
	float s, a;
	int i;
	
	s = 0; a = 1;
	for (i = 1; i <= 1000; i++) {
		if (i % 2 == 0) {
			s += -(i / a);
		}
		else
		{
			s += +(i / a);
		}
		a++;
		cout << "S =" << s << endl;
	}
}




