#include<stdio.h>
#include<math.h> 
double EPS = 1e-6; //精度 
double f(double x){
	return x*x*x - 5*x*x +10*x -80;
}// 函数 
int main() 
{
	double root,x1=0,x2=100,y;//初始化各值
	root = x1+(x2-x1)/2; //求中间值
	int tried_times;
	tried_times = 1;
	y=f(root); //求中间值对应的函数值
	while (fabs(y)>EPS) //if语句，便于根据精度判断是否停止运算
	{
		if(y>0) x2=root;
		else x1=root; //二分法缩小范围的方向
		root =x1+(x2-x1)/2;
		y=f(root);
		tried_times++; //范围缩小次数 
	 } 
	 printf("the root is %.8lf\n",root);
	 printf("the tried times is %d",tried_times) ;
}
