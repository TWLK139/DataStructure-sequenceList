//**********************//
//顺序表实验头文件		//
//包含：1，依赖头文件	//
//		2，结构定义		//
//		3，函数声明		//
//**********************//


#ifndef SEQLIST_H

#define SEQLIST_H

#include<iostream>

using namespace std;

#define MAXLEN 100

typedef int elementType;

//*********************顺序表结构*******************************//
typedef struct sList											//
{																//
	elementType data[MAXLEN];									//
	int listLen;												//
}seqList, * seqP;					//定义结点类型、结点指针类型//
//**************************************************************//


//**********************函数声明************************************************************************//
void showSeqList(seqList* L);											//打印顺序表					//
elementType getElement(seqList* L, int n);								//求顺序表中第i个元素			//
void insertElement(seqList* L, int n, elementType x);					//在第i个结点前插入值为x的结点	//
void deleteElement(seqList* L, int n);									//删除顺序表中第i个元素结点		//
void insertElementOrder(seqList* L, elementType x);						//在递增顺序表中插入值为x的元素	//
void separateSeqList(seqList* L, seqList* odd, seqList* even);			//将顺序表中奇偶元素分开		//
void unionsetIncreaseSeqList(seqList* A, seqList* B, seqList* res);		//求递增顺序表中的公共元素		//
void deleteRepeatElement(seqList* L);									//删除顺序表中的重复元素		//
//******************************************************************************************************//


//**********************函数定义****************************************


//辅助函数：打印顺序表
//输入：顺序表指针
void showSeqList(seqList* L)
{
	int i = 0;
	while (i < L->listLen)
	{
		cout << L->data[i] << "\t";
		i++;
	}
	cout << endl;
}

//实验一.1，求顺序表中第i个元素。
//输入：顺序表指针，元素序号
//输出：不存在返回NULL，存在则返回该元素
elementType getElement(seqList* L, int n)
{
	if (n <= 0 || n > L->listLen)
	{
		cout << "元素位置错误！" << endl;
		return NULL;
	}
	else
	{
		return L->data[n - 1];
	}
}

//实验一.2，在第i个结点前插入值为x的结点。
//输入：顺序表指针，插入位置，插入元素
void insertElement(seqList* L, int n, elementType x)
{
	int i = L->listLen;
	if (L->listLen >= MAXLEN)
	{
		cout << "顺序表已满！" << endl;
	}
	else if (n <= 0 || n - 1 > L->listLen)
	{
		cout << "元素位置错误！" << endl;
	}
	else
	{
		while (i >= n)
		{
			L->data[i] = L->data[i - 1];
			i--;
		}
		L->data[i] = x;
		L->listLen++;
	}
}

//实验一.3，删除第i个元素。
//输入：顺序表指针，删除位置
void deleteElement(seqList* L, int n)
{
	if (n < 1 || n > L->listLen)
	{
		cout << "元素位置错误！" << endl;
	}
	else
	{
		while (n < L->listLen)
		{
			L->data[n - 1] = L->data[n];
			n++;
		}
		L->listLen--;
	}
}

//实验一.4，在递增顺序表中插入值为x的元素，并保持其递增。
//输入：顺序表指针，插入元素
void insertElementOrder(seqList* L, elementType x)
{
	int i = L->listLen - 1;
	if (L->listLen >= MAXLEN)
	{
		cout << "顺序表已满！" << endl;
	}
	else
	{
		while (x < L->data[i] && i >= 0)
		{
			L->data[i + 1] = L->data[i];
			i--;
		}
		L->data[i + 1] = x;
		L->listLen++;
	}
}

//实验一.5，将顺序表中奇偶元素分开。
//输入：顺序表，奇偶顺序表存储位置
void separateSeqList(seqList* L, seqList* odd, seqList* even)
{
	int i = 0;
	odd->listLen = 0;
	even->listLen = 0;
	while (i < L->listLen)
	{
		if (L->data[i] % 2)
		{
			odd->data[odd->listLen] = L->data[i];
			odd->listLen++;
		}
		else
		{
			even->data[even->listLen] = L->data[i];
			even->listLen++;
		}
		i++;
	}
}

//实验一.6，求递增顺序表中的公共元素。
//输入：两个递增的顺序表，存放结果的顺序表
void unionsetIncreaseSeqList(seqList* A, seqList* B, seqList* res)
{
	int ia = 0, ib = 0;
	res->listLen = 0;
	while (ia < A->listLen && ib < B->listLen)
	{
		if (A->data[ia] < B->data[ib])
		{
			ia++;
		}
		else if (A->data[ia] == B->data[ib])
		{
			res->data[res->listLen] = A->data[ia];
			res->listLen++;
			ia++;
			ib++;
		}
		else
		{
			ib++;
		}
	}
}

//实验一.7，删除顺序表中的重复元素，并统计移动次数。
//输入：顺序表
//函数内打印：移动次数
void deleteRepeatElement(seqList* L)
{
	int num = 0, iNow = 1, iSave = 0;
	while (iNow < L->listLen)
	{
		if (L->data[iNow] > L->data[iSave])
		{
			iSave++;
			if (iNow > iSave)
			{
				L->data[iSave] = L->data[iNow];
				num++;
			}
		}
		iNow++;
	}
	L->listLen = iSave + 1;
	cout << "移动次数：" << num << endl;
}

#endif // !SEQLIST_H