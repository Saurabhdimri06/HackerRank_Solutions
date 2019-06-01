//Inheritence Basic 

#include <iostream>

using namespace std;


class Triangle{						//Parent Class

    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{				//Child Class - Isosceles
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		void description(){
              cout<<"In an isosceles triangle two sides are equal\n";
          }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}

