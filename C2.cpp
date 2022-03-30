#include<iostream>
#include<cmath>
int Max (int a[])
{
	int max = a[0];
	for(int i=1;i<4;i++)
	{
		if(a[i]>max) max = a[i];
	}
	return max;
}

int Min(int b[])	
{
	int min = b[0];
	for(int i=1;i<4;i++)
	{
		if(b[i]<min) min = b[i];
	}
	return min;
}
int main()
{
	int x1,y1,x2,y2;
	int a1,b1,a2,b2;
	std::cin>>x1>>y1>>x2>>y2;
	std::cin>>a1>>b1>>a2>>b2;
	int c[4],d[4];
	c[0]=x1; c[1]=x2; c[2]=a1; c[3]=a2;
	d[0]=y1; d[1]=y2; d[2]=b1; d[3]=b2;
	int Xmin,Xmax,Ymin,Ymax;
	Xmax = Max(c);
	Xmin = Min(c);
	Ymax = Max(d);
	Ymin = Min(d);
	if((Xmax-Xmin)<(Ymax-Ymin)) std::cout<<pow(Ymax-Ymin,2);
	else std::cout<<pow(Xmax-Xmin,2);
	return 0;	
}
