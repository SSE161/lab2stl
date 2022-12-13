#include <iostream>
#include <set>

using namespace std;

double most_of_all(set<double> k)
{
	return *k.rbegin();
}

double least_of_all(set<double> k)
{
	return *k.begin();
}

double average(set<double> k)
{
	double sum = 0;
	int counter = 0;
	for (auto &item : k )
	{
		sum += item;
		counter++;
	}
	return sum / counter;
}
double sum_of_all(set<double> k)
{
	double sum = 0;
	
	for (auto& item : k)
	{
		sum += item;
		
	}
	return sum;
}

int main()
{
	set<double> k;
	k.insert(2);
	k.insert(4);
	k.insert(6);
	k.insert(7);
	k.insert(8);
	k.insert(9);
	k.insert(10);
	cout<<sum_of_all(k);
	
}
