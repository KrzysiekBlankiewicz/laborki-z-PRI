#include <iostream>
#include "newInt.h"
#include <string>
#include <cmath>

using namespace std;

bigInt::bigInt()
{
    for(int i = 0; i < N; i++){
        tab[i] = 0;
    }
    invalid = false;
    sgn = 1;
}

bigInt::bigInt(string input){
    if(input.length() > N){
        invalid = true;
        return;
    }

}

bigInt::bigInt(int input){
    if(input > pow(10, N)){
        invalid = true;
        return;
    }
	if(input < 0) sgn = -1;
	else sgn = 1;
    for(int i = 1; i < N+1; i++){
        tab[N-i] = static_cast<unsigned char>(input%10 + 48);
        input = input/10;
    }
    invalid = false;
}

void bigInt::print()
{
    for(int i = 0; i < N; i++){
        std::cout << tab[i] << " ";
    }
    std::cout << endl << endl;
}

void bigInt::setPosition(int i, unsigned char c)
{
    tab[i] = c;
}

unsigned char bigInt::getPosition(int i)
{
    return tab[i];
}

bigInt bigInt::operator+(bigInt y)
{
    bigInt sum;
    int help, helpUpgraded;
    int carriage = 0;
	if(sgn == y.sgn){
		for(int i = N-1; i >= 0; i--)
		{
			help = ((int)tab[i] - 48) + ((int)y.getPosition(i) - 48) + carriage;
			helpUpgraded = help%10;
			if(helpUpgraded != help) carriage = 1;
			else carriage = 0;
			sum.setPosition(i, ((unsigned char)helpUpgraded + 48));
		}
		if(carriage != 0) sum.invalid = true;
		sum.sgn = sgn;
		return sum;
	}
	//Dalej nie dokonczone
	/*else{
		for(int i = N-1; i >= 0; i--)
		{
			help = sgn*((int)tab[i] - 48) + y.sgm*((int)y.getPosition(i) - 48) + carriage;
			if(help < 0){
				help += 10;
				carriage = -1;
			}
			else carriage = 0;
			sum.setPosition(i, ((unsigned char)help + 48));
		}
	*/
}

