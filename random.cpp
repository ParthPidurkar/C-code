#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int random(int max, int min)
{
static const double f=4.6566e-10;
return min + static_cast<int>(
(max - min + 1) * (rand()*f));
}
int main()
{
	srand(static_cast<int>(time(0)));
	int r,u;
	r = random(100,0);

	do
	{
		cout<<endl;
			cout<<"  Enter Number";
	cout<<endl;
	cin>> u ;
		if (r<u)
	{
		cout<<"Please enter smaller number than  ";
		cout<<u;
	}
	else if (r==u)
	break;
		
	else 
	{
		cout<<"Please enter bigger number than  ";
		cout<<u;
	}
	
}while(r!=u);
cout<<endl<<r<<u<<endl;
cout<<"YOU WON";

}