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

/*std::vector<T> merge(std::vector<T> left, std::vector<T> right)
{
	std::vector<T> res;
	int i, j;
	for (i = 0; i < left.size(); i++) {
		T save = left[i];
		j = 0;
		while (a[j] > save && j != right.size() + 1)
	}
	return res;
}
std::vector<T> mergeSort(std::vector<T> a)
{
	int s = a.size();
	if (s <= 1)
	{
		return a;
	}
	vector<T> left, right, result;
	int mid = ((a.size() + 1) / 2;

	for (int i = 0; i < mid; i++) {
		left.push_back(a[i]);
	}

	for (int i = mid; i < a.size(); i++) {
		right.push_back(a[i]);
	}

	left = mergeSort(left);
	right = mergeSort(right);
	result = merge(left, right);

	return result;
}
*/
template <typename D>
void quickSort(std::vector<D>& a, int left, int right)
{
	int mid = (left + right + 1) / 2;
	D pivot = a[mid];

	int i = left, j = right;
	while (i < j)
	{

		while (a[i] <= pivot && i < mid)
		{
			i++;
		}
		while (a[j] > pivot && j > mid)//>= ?
		{
			j--;
		}
		if (i <= j) {
			D save = a[i];
			a[i] = a[j];
			a[j] = save;
			i++;
			j--;


		};
		if (left < j)
			quickSort(a, left, j);

		if (i < right)
			quickSort(a, i, right);

	}
}




int main()
{
	std::vector<int> a;
	a.push_back(5);
	a.push_back(1);
	a.push_back(1);
	a.push_back(4);
	a.push_back(3);
	//insertionSort <int>(a);
	quickSort<int>(a, 0, a.size() - 1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << std::endl;

	}
	std::vector<std::string> b;
	b.push_back("we");
	b.push_back("a");
	b.push_back("wewe");
	b.push_back("hd");
	b.push_back("as");
	//insertionSort <std::string>(b);
	quickSort<std::string>(b, 0, b.size() - 1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << b[i] << std::endl;

	}

	return 0;
}

