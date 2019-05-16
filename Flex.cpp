#include <iostream>
#include <vector>
#include <string>

template <typename T>
void insertionSort(std::vector<T>& a)
{
	if (a.size() < 2) { return; }
	else
	{
		for (int i = 1; i < a.size(); i++)
		{
			T save = a[i];
			int j = i - 1;
			while (j >= 0 && a[j] > save)
			{
				a[j + 1] = a[j];
				j = j - 1;
			}
			a[j + 1] = save;
		}
	}
}





int main()
{
	std::vector<int> a;
	a.push_back(5);
	a.push_back(1);
	a.push_back(9);
	a.push_back(4);
	a.push_back(3);
	insertionSort <int>(a);
	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << std::endl;

	}
	return 0;
}

