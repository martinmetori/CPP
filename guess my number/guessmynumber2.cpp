#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(0));
bool done;
do{
int i = rand() % 100;
while (true){
cout << "I made a number, try to guess";
system("color 01");
int j;
cin >> j;
if (i > j)
	cout << "My number is more" << endl;
else {
	if (i < j)
		cout << "My number is less" << endl;
	else{
		cout << "My number is equal" << endl;
	break;
		}
  	}
}
	cout << "continue (yes/no)?";
	char c;
	done = (c != 'y');
 }while (!done);
}
