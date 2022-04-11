#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,j;
	float det,trace,ev1,ev2;
	float a[2][2]={0};
		cout<<"\n Enter elements of 2*2 matrix :";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				switch(i)
				{
					case 0: cout<<"\n a"<<(j+1)<<":";
					break;
					case 1: cout<<"\n b"<<(j+1)<<":";
					break;
					}
					cin>>a[i][j];
			}
		}
		det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		trace=-a[0][0]-a[1][1];
		ev1=((-trace+sqrt((trace*trace)-(4*det)))/2);
		ev2=((-trace-sqrt((trace*trace)-(4*det)))/2);
		cout<<"\n Eigenvalue 1:"<<ev1;
		cout<<"\n Eigenvalue 2:"<<ev2;
		float x=(a[0][0]-ev1);
		float y=(-a[0][1]);
		float z=(a[0][0]-ev2);
		cout<<"\n Eigenvector 1 \n \t ["<<y<<"\n"<<"\t"<<x<<"]";
		cout<<"\n Eigenvector 2 \n \t ["<<y<<"\n"<<"\t"<<z<<"]";
		return 0;
}