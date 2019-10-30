//**********************//
//˳���ʵ��ͷ�ļ�		//
//������1������ͷ�ļ�	//
//		2���ṹ����		//
//		3����������		//
//**********************//


#ifndef SEQLIST_H

#define SEQLIST_H

#include<iostream>

using namespace std;

#define MAXLEN 100

typedef int elementType;

//*********************˳���ṹ*******************************//
typedef struct sList											//
{																//
	elementType data[MAXLEN];									//
	int listLen;												//
}seqList, * seqP;					//���������͡����ָ������//
//**************************************************************//


//**********************��������************************************************************************//
void showSeqList(seqList* L);											//��ӡ˳���					//
elementType getElement(seqList* L, int n);								//��˳����е�i��Ԫ��			//
void insertElement(seqList* L, int n, elementType x);					//�ڵ�i�����ǰ����ֵΪx�Ľ��	//
void deleteElement(seqList* L, int n);									//ɾ��˳����е�i��Ԫ�ؽ��		//
void insertElementOrder(seqList* L, elementType x);						//�ڵ���˳����в���ֵΪx��Ԫ��	//
void separateSeqList(seqList* L, seqList* odd, seqList* even);			//��˳�������żԪ�طֿ�		//
void unionsetIncreaseSeqList(seqList* A, seqList* B, seqList* res);		//�����˳����еĹ���Ԫ��		//
void deleteRepeatElement(seqList* L);									//ɾ��˳����е��ظ�Ԫ��		//
//******************************************************************************************************//


//**********************��������****************************************


//������������ӡ˳���
//���룺˳���ָ��
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

//ʵ��һ.1����˳����е�i��Ԫ�ء�
//���룺˳���ָ�룬Ԫ�����
//����������ڷ���NULL�������򷵻ظ�Ԫ��
elementType getElement(seqList* L, int n)
{
	if (n <= 0 || n > L->listLen)
	{
		cout << "Ԫ��λ�ô���" << endl;
		return NULL;
	}
	else
	{
		return L->data[n - 1];
	}
}

//ʵ��һ.2���ڵ�i�����ǰ����ֵΪx�Ľ�㡣
//���룺˳���ָ�룬����λ�ã�����Ԫ��
void insertElement(seqList* L, int n, elementType x)
{
	int i = L->listLen;
	if (L->listLen >= MAXLEN)
	{
		cout << "˳���������" << endl;
	}
	else if (n <= 0 || n - 1 > L->listLen)
	{
		cout << "Ԫ��λ�ô���" << endl;
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

//ʵ��һ.3��ɾ����i��Ԫ�ء�
//���룺˳���ָ�룬ɾ��λ��
void deleteElement(seqList* L, int n)
{
	if (n < 1 || n > L->listLen)
	{
		cout << "Ԫ��λ�ô���" << endl;
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

//ʵ��һ.4���ڵ���˳����в���ֵΪx��Ԫ�أ��������������
//���룺˳���ָ�룬����Ԫ��
void insertElementOrder(seqList* L, elementType x)
{
	int i = L->listLen - 1;
	if (L->listLen >= MAXLEN)
	{
		cout << "˳���������" << endl;
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

//ʵ��һ.5����˳�������żԪ�طֿ���
//���룺˳�����ż˳���洢λ��
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

//ʵ��һ.6�������˳����еĹ���Ԫ�ء�
//���룺����������˳�����Ž����˳���
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

//ʵ��һ.7��ɾ��˳����е��ظ�Ԫ�أ���ͳ���ƶ�������
//���룺˳���
//�����ڴ�ӡ���ƶ�����
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
	cout << "�ƶ�������" << num << endl;
}

#endif // !SEQLIST_H