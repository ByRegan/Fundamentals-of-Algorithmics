#include<stdio.h>
#include<math.h> 
double EPS = 1e-6; //���� 
double f(double x){
	return x*x*x - 5*x*x +10*x -80;
}// ���� 
int main() 
{
	double root,x1=0,x2=100,y;//��ʼ����ֵ
	root = x1+(x2-x1)/2; //���м�ֵ
	int tried_times;
	tried_times = 1;
	y=f(root); //���м�ֵ��Ӧ�ĺ���ֵ
	while (fabs(y)>EPS) //if��䣬���ڸ��ݾ����ж��Ƿ�ֹͣ����
	{
		if(y>0) x2=root;
		else x1=root; //���ַ���С��Χ�ķ���
		root =x1+(x2-x1)/2;
		y=f(root);
		tried_times++; //��Χ��С���� 
	 } 
	 printf("the root is %.8lf\n",root);
	 printf("the tried times is %d",tried_times) ;
}
