#include <iostream>
#include <string>
using namespace std;

class Cow
{

public: string name;
public: string sound;

	   Cow(string nameCow, string soundCow)
	   {
			name = nameCow;
			sound = soundCow;
		}


		void Name()
		{
			cout << "The cow " << name << " ";
		}

		void Sound() 
		{
			cout << " like the next sound "   <<   sound  <<  " \n";
		}
};
