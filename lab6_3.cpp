#include<iostream>
using namespace std;

char x, B;
char before(char x){

    if(x == 'A' ){
        B = 'Z';
    }else if(x >= 'A' && x <= 'Z'){
        B = x-1;
    }else if(x < 65 || x > 90 ){
		B = '0';
	}
    return B;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
