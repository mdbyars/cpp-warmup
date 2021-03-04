//Monique Byars;
//02 / 24 / 2021;
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	int X, Y, N;
	cin >> X;
	cin >> Y;
	cin >> N;
	for (int i = 1; i < N + 1; i++) {
		if (i % X == 0) {
			if (i % Y == 0) {
				//cout << i;
				cout << "FizzBuzz \n";
			}
			else {
				//cout << i;
				cout << "Fizz \n";
			}
		}
		else if (i % Y == 0) {
			//	cout << i;
			cout << "Buzz \n";
		}
		else {
			cout << i;
			cout << "\n";
		}
	}

}
