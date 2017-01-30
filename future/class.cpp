#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
class PointA
{
	public:
		void setPoint(int x,int y);
		void printPoint();
	private:
		int xPos;
		int yPos;
};
//上段代码中定义了一个名为Point的类，具有
//两个私密属性，int型的xPos和yPos，分别用
//表示x点和y点。在方法上，setPoint用来设置
//属性，也就是xPos和yPos的值；printPoint用
//来输出点的信息。

//类在定义时有以下几点需要注意：
//1、类的数据成员中不能使用auto,extern和
//等进行修饰，也不能在定义时进行初始化，
//如int xPos=0;错
//2、类定义时private和public关键词出现的顺
//序和次数可以是任意的；
//3、结束时的分号不能省略，切记！
class PointB
{
	public:
		void setPoint(int x,int y)//实现setPoint 函数
		{xPos=x,yPos=y;}
		void printPoint()		  //实现printPoint函数
		{
			printf("x = %d\n",xPos);
			printf("y = %d\n",yPos);
		}
	private:
		int xPos;
		int yPos;
};
int main()
{
	PointB M;
	M.setPoint(10,20);
	M.printPoint();
	return 0;
}
