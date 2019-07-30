#include <iostream>
#include <string>
using namespace std;

/*
Challenge 3: (Lo Shu Magic Square)
A Lo Shu Magic Square is a grid with 3 rows and 3 columns. (2-dimensional array)

Here are the rules of the square:
1. The square must have all of the numbers 1-9  in any order.
2. The sum of each row, each column, and each diagonal all add up to the same number.

Write a program that accepts a 2-dimensional array and determines whether the array is a Lo Shu Magic Square.
*/



/*
	square[0][0]   square[0][1]   square[0][2]
	
	square[1][0]   square[1][1]   square[1][2]
	
	square[2][0]   square[2][1]   square[2][2]
*/


string magicSquare(int square[][3]) {

	int H1, H2, H3, V1, V2, V3, D1, D2;

	H1 = square[0][0] + square[0][1] + square[0][2];
	H2 = square[1][0] + square[1][1] + square[1][2];
	H3 = square[2][0] + square[2][1] + square[2][2];

	V1 = square[0][0] + square[1][0] + square[2][0];
	V2 = square[0][1] + square[1][1] + square[2][1];
	V3 = square[0][2] + square[1][2] + square[2][2];

	D1 = square[0][0] + square[1][1] + square[2][2];
	D2 = square[2][0] + square[1][1] + square[0][2];

	if (H1 == H2 && H2 == H3 && H3 == V1 && V1 == V2 && V2 == V3 && V3 == D1 && D1 == D2) {
		return "Yes! It is a magic square.";
	}
	else {
		return "No! It is not a magic square.";
	}
}

int main() {

	int square[3][3] = 
	{
	{4,9,2},
	{3,5,7},
	{8,1,6}
	}; 

	string answer = magicSquare(square);

	cout << answer << endl;
	
		
	system("Pause");
	return 0;


}