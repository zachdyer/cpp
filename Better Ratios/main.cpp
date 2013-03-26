#include <iostream>

using namespace std;

int simplify(int num){
    if(num % 2 == 0 && num > 2){
        num /= 2;
        simplify(num);
    } else {
        return num;
    }
}

int getGCD(int a, int b){

    if(a > b){
        if(a % b == 0){
            return b;
        }
        else{
            b = a % b;
            getGCD(a, b);
        }
    }
    else{
        if(b % a == 0){
            return a;
        }
        else{
            a = b % a;
            getGCD(a, b);
        }
    }
}

int main()
{
    int a = 16;
    int b = 25;
    cout << getGCD(a,b);
    return 0;
}
