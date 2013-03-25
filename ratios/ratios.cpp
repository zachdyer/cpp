#include <iostream>
using namespace std; 

int greatestCommonFactor(int a, int b){
	int least;
	if(a < b){
		least = a;
	} else {
		least = b;
	}
	int factor = 0;
	int i;
	for(i = 1; i < least; i++){// I divided by 0 here out of habit and it took me a while to figure out that the computer can't do that XD
		if(a % i == 0 && b % i == 0){
			factor = i;
		}
	}
	return factor;
}

int main(void){
	int a = 30;
	int b = 40;
	int cf = greatestCommonFactor(a,b);
	if(cf){
		cout << "The ratio of " << a << " and " << b << " is " << a/cf << ":" << b/cf;
	} else {
		cout << "This is not a perfect ratio.";
	}
}