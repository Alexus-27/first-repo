#include <iostream>
using namespace std;
struct comp
{
	string name,responsible;
	int cost;
};
int main()
{
	comp s[3];
	string name_sort,responsible_sort;
	int max = 0, min = 100000,cost_sort;
	
	for (int i=0;i<3;i++)
	{
		cout<<"Name computer: "<<endl;
		cin>>s[i].name;

		cout<<"Cost computer: "<<endl;
		cin>>s[i].cost;
		
		cout<<"Responsible computer: "<<endl;
		cin>>s[i].responsible;		
	}
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3-1;j++)
		{
			if(s[j].cost >s[j+1].cost)
			{
				cost_sort = s[j].cost;
				name_sort = s[j].name;
				responsible_sort = s[j].responsible;
				
				s[j].cost = s[j+1].cost;
				s[j].name =s[j+1].name;
				s[j].responsible = s[j+1].responsible;
				
				s[j+1].cost = cost_sort;
				s[j+1].name = name_sort;
				s[j+1].responsible = responsible_sort;
			}
		}
	}
	for (int i=0;i<3;i++) cout<<s[i].name<<" "<<s[i].cost<<" "<<s[i].responsible<<endl;
	
	cin.get();
}
