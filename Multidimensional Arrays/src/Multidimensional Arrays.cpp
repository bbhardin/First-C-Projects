/*
 * Uggg, Multidimensional Arrays!
 */

#include <iostream>
using namespace std;

int main(){

//	string animals[2][3] = {
//			{"fox", "dog", "cat"},
//			{"mouse", "squirrel", "parrot"}
//	};
//
//	for(int i=0; i<2; i++){
//		for(int j = 0; j<3; j++){
//			cout << animals[i][j] << " " << flush;
//		}
//
//		cout << endl;
//
//	}

	int numbers[3][3] = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
	};

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << numbers[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
