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
//�϶δ����ж�����һ����ΪPoint���࣬����
//����˽�����ԣ�int�͵�xPos��yPos���ֱ���
//��ʾx���y�㡣�ڷ����ϣ�setPoint��������
//���ԣ�Ҳ����xPos��yPos��ֵ��printPoint��
//����������Ϣ��

//���ڶ���ʱ�����¼�����Ҫע�⣺
//1��������ݳ�Ա�в���ʹ��auto,extern��
//�Ƚ������Σ�Ҳ�����ڶ���ʱ���г�ʼ����
//��int xPos=0;��
//2���ඨ��ʱprivate��public�ؼ��ʳ��ֵ�˳
//��ʹ�������������ģ�
//3������ʱ�ķֺŲ���ʡ�ԣ��мǣ�
class PointB
{
	public:
		void setPoint(int x,int y)//ʵ��setPoint ����
		{xPos=x,yPos=y;}
		void printPoint()		  //ʵ��printPoint����
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
