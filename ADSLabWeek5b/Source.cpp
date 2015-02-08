#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	int count = 1; //locally defined variable
	for (; count <= 5; count++)
	{
		int count = 1; //expression scoped variable
		cout << count << "\n";
	}
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int count = 1; //locally defined variable
	while (count <= 5)
	{
		int count = 1; //expression scoped variable
		cout << count << "\n";
		count++;
	}
	return 0;
}




