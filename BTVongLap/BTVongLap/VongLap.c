/*
	Ho Ten:Pham Duc Huy
	Ngày  :6/10/2020
	BT    :Tinh tich phan cua ham f(x)=x^2 trên đoạn [a,b] theo pp hinh thang 
	voi tan so lay mau 1000 lan
	Voi  f(x)=x^2
*/
#include<stdio.h>
void main()
{
	int a, b;
	a = 2;
	b = 18;
	float h = (float)(b - a) / 1000;
	float s = 0;
	for (float i = a; i < b; i = i + h)
	{
		s += (i * i + (i + h) * (i + h)) / 2 * h;
	}
	printf("%.3f", s);
}