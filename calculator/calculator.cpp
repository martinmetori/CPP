#include<iostream>

using namespace std;

int main()
{
	long long  a , b ,j;
	char c;
	for(;;)
	{
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':
		j = a + b;
			break;
	case '-':
		j = a - b;
			break;
	case '*':
		j = a * b;
			break;
	case '/':
		j = a / b;
			break;
	case '^':
	switch (b)
	{
	case 0:
	j = 1;
	break;
	default:
	j = a;
	for (int i = 1; i < b; i++)
	j = j * a;
	break;
	}	
	break;
	}
	system ("cls");
	cout << a << " " << c << " " << b << "=" <<  j << endl;
	system ("pause");
	system ("cls"); 
	}

	
}
