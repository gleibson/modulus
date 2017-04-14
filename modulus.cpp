#include<iostream>

int main()
{
	const int lbs_per_stn = 14;
	int lbs;
	

	std::cout << "Enter your weight in pounds: "; 
	std::cin >> lbs;
	int stone = lbs / lbs_per_stn;
	int pounds = lbs % lbs_per_stn;
	std::cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds(s). \n";

	return 0;

}