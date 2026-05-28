#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	int pos [15][15];

	for (int i = 0; i <= 14; i++) {

		for (int j = 0; j <= 14; j++) {

			pos [i][j] = rand () % 10;
			cout << pos [i][j] << " " ;
		}
        cout << endl;
	}
}
