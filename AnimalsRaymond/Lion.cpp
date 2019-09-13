#include <iostream>
#include <string>
using namespace std;

class Lion
{
public: string name;
public: string sound;

		Lion(string nameLion, string soundLion)
		{
			name = nameLion;
			sound = soundLion;
		}


		void Name()
		{
			cout << "The Lion " << name << " ";
		}

		void Sound()
		{
			cout << " like the next sound "  <<  sound << "\n";
		}
};
