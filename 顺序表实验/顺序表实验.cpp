//**********************//
//˳���ʵ��������		//
//**********************//

#include"seqList.h"


int main(void) {
	int order = NULL;
	elementType res = NULL;
	//***********ȫ��ʵ��ʹ������************
	seqList text[11] = {
		{
			{5,12,7,13,14,15,16,17,18,19,20,21},
			12
		},
		{
			{},
			0
		},
		{
			{10,20,30,40,50,60,70,80,90,100},
			10
		},
		{
			{1,2,3,4,5,6,7,8,9,10,20,30,40,50,60},
			15
		},
		{
			{1,3,6,10,15,16,17,18,19,20},
			10
		},
		{
			{1,2,3,4,5,6,7,8,9,10,18,20,30},
			13
		},
		{
			{2,4,5,7,8,9,12,22},
			8
		},
		{
			{1,2,3,4,5,6,7,8,9,10},
			10
		},
		{
			{1,2,3,4,5,6,7,8,9},
			9
		},
		{
			{1,1,2,2,2,3,4,5,5,5,6,6,7,7,8,8,9},
			17
		},
		{
			{1,2,3,4,5,5,6,7,8,8,9,9,9,9,9},
			15
		}
	};
	seqList text_1;
	seqList text_5[2];

	while (1)
	{
		cout << "ʵ��һ��˳���ʵ��" << endl;
		cout << "*****************************************************************" << endl;
		cout << "*1����˳����е�i��Ԫ�ء�\t\t\t\t\t*" << endl;
		cout << "*2���ڵ�i�����ǰ����ֵΪx�Ľ�㡣\t\t\t\t*" << endl;
		cout << "*3��ɾ��˳����е�i��Ԫ�ؽ�㡣\t\t\t\t\t*" << endl;
		cout << "*4���ڵ���˳����в���ֵΪx��Ԫ�أ��������������\t\t*" << endl;
		cout << "*5����˳�������żԪ�طֿ���\t\t\t\t\t*" << endl;
		cout << "*6�������˳����еĹ���Ԫ�ء�\t\t\t\t\t*" << endl;
		cout << "*7��ɾ��˳����е��ظ�Ԫ�أ���ͳ���ƶ�������\t\t\t*" << endl;
		cout << "*\t\t\t\t\t\t\t\t*" << endl;
		cout << "*0���˳�����\t\t\t\t\t\t\t*" << endl;
		cout << "*****************************************************************" << endl;
		cout << "������˵���ţ�\t";
		cin >> order;

		switch (order)
		{
		case 1:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�n=12����" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "��5��Ԫ��Ϊ��" << "\t\t";						//һ��һ��
			res = getElement(&text_1, 5);
			if (res)cout << res << endl;
			cout << "��n(n=12)��Ԫ��Ϊ��" << "\t";					//һ�����
			res = getElement(&text_1, 12);
			if (res)cout << res << endl;
			cout << "��0��Ԫ��Ϊ��" << "\t\t";						//һ������
			res = getElement(&text_1, 0);
			if (res)cout << res << endl;
			cout << "��n+1(n=12)��Ԫ��Ϊ��" << "\t";				//һ���Ĵ�
			res = getElement(&text_1, 13);
			if (res)cout << res << endl;
			cout << "��n+2(n=12)��Ԫ��Ϊ��" << "\t";				//һ�����
			res = getElement(&text_1, 14);
			if (res)cout << res << endl;
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�n=0����" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "��0��Ԫ��Ϊ��" << "\t\t";						//����һ��
			res = getElement(&text_1, 0);
			if (res)cout << res << endl;
			cout << "��2��Ԫ��Ϊ��" << "\t\t";						//�������
			res = getElement(&text_1, 2);
			if (res)cout << res << endl;
			//�ڶ�����Խ���*****************************************************
			//*******************************************************************
			break;
		case 2:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�n=12����" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "������λ��Ϊ5ʱ��" << endl;					//һ��һ��
			//text_1 = text[0];
			insertElement(&text_1, 5, 100);
			showSeqList(&text_1);
			cout << "������λ��Ϊn(n=12)ʱ��" << endl;				//һ�����
			text_1 = text[0];	//�ָ�����
			insertElement(&text_1, 12, 100);
			showSeqList(&text_1);
			cout << "������λ��Ϊn+1(n=12)ʱ��" << endl;			//һ������
			text_1 = text[0];	//�ָ�����
			insertElement(&text_1, 13, 100);
			showSeqList(&text_1);
			cout << "������λ��Ϊ0ʱ��" << endl;					//һ���Ĵ�
			text_1 = text[0];	//�ָ�����
			insertElement(&text_1, 0, 100);
			showSeqList(&text_1);
			cout << "������λ��Ϊ1ʱ��" << endl;					//һ�����
			text_1 = text[0];	//�ָ�����
			insertElement(&text_1, 1, 100);
			showSeqList(&text_1);
			cout << "������λ��Ϊn+2(n=12)ʱ��" << endl;			//һ������
			text_1 = text[0];	//�ָ�����
			insertElement(&text_1, 14, 100);
			showSeqList(&text_1);
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�n=0����" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "������λ��Ϊ5ʱ��" << endl;					//����һ��
			insertElement(&text_1, 5, 100);
			showSeqList(&text_1);
			//�ڶ�����Խ���*****************************************************
			//*******************************************************************
			break;
		case 3:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�n=12����" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "��ɾ��λ��Ϊ5ʱ��" << endl;					//һ��һ��
			deleteElement(&text_1, 5);
			showSeqList(&text_1);
			text_1 = text[0];	//�ָ�����
			cout << "��ɾ��λ��Ϊn(n=12)ʱ��" << endl;				//һ�����
			deleteElement(&text_1, 12);
			showSeqList(&text_1);
			text_1 = text[0];	//�ָ�����
			cout << "��ɾ��λ��Ϊ1ʱ��" << endl;					//һ������
			deleteElement(&text_1, 1);
			showSeqList(&text_1);
			text_1 = text[0];	//�ָ�����
			cout << "��ɾ��λ��Ϊn+1(n=12)ʱ��" << endl;			//һ���Ĵ�
			deleteElement(&text_1, 13);
			showSeqList(&text_1);
			text_1 = text[0];	//�ָ�����
			cout << "��ɾ��λ��Ϊ0ʱ��" << endl;					//һ�����
			deleteElement(&text_1, 0);
			showSeqList(&text_1);
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�n=0����" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "��ɾ��λ��Ϊ5ʱ��" << endl;					//����һ��
			deleteElement(&text_1, 5);
			showSeqList(&text_1);
			//�ڶ�����Խ���*****************************************************
			//*******************************************************************
			break;
		case 4:
			system("cls");
			//��һ�����*********************************************************
			cout << "ʵ������Ϊ��" << endl;
			text_1 = text[2];
			showSeqList(&text_1);
			cout << "������Ԫ��Ϊ25ʱ��" << endl;					//һ��һ��
			//text_1 = text[2];
			insertElementOrder(&text_1, 25);
			showSeqList(&text_1);
			cout << "������Ԫ��Ϊ85ʱ��" << endl;					//һ�����
			text_1 = text[2];	//�ָ�����
			insertElementOrder(&text_1, 85);
			showSeqList(&text_1);
			cout << "������Ԫ��Ϊ110ʱ��" << endl;					//һ������
			text_1 = text[2];	//�ָ�����
			insertElementOrder(&text_1, 110);
			showSeqList(&text_1);
			cout << "������Ԫ��Ϊ8ʱ��" << endl;					//һ���Ĵ�
			text_1 = text[2];	//�ָ�����
			insertElementOrder(&text_1, 8);
			showSeqList(&text_1);
			//��һ����Խ���*****************************************************
			//*******************************************************************
			break;
		case 5:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			showSeqList(&text[3]);
			separateSeqList(&text[3], &text_5[0], &text_5[1]);		//һ��һ��
			cout << "��һ��ʵ����Ϊ��" << endl;
			cout << "������" << endl;
			showSeqList(&text_5[0]);
			cout << "ż����" << endl;
			showSeqList(&text_5[1]);
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			showSeqList(&text[2]);
			separateSeqList(&text[2], &text_5[0], &text_5[1]);		//����һ��
			cout << "�ڶ���ʵ����Ϊ��" << endl;
			cout << "������" << endl;
			showSeqList(&text_5[0]);
			cout << "ż����" << endl;
			showSeqList(&text_5[1]);
			//�ڶ�����Խ���*****************************************************
			//*******************************************************************
			break;
		case 6:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			cout << "������һ��";
			showSeqList(&text[4]);
			cout << "���������";
			showSeqList(&text[5]);
			unionsetIncreaseSeqList(&text[4], &text[5], &text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			cout << "������һ��";
			showSeqList(&text[4]);
			cout << "���������";
			showSeqList(&text[6]);
			unionsetIncreaseSeqList(&text[4], &text[6], &text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//�ڶ�����Խ���*****************************************************
			cout << endl;
			//���������*********************************************************
			cout << "������ʵ�����ݣ�" << endl;
			cout << "������һ��";
			showSeqList(&text[1]);
			cout << "���������";
			showSeqList(&text[7]);
			unionsetIncreaseSeqList(&text[1], &text[7], &text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//��������Խ���*****************************************************
			//*******************************************************************
			break;
		case 7:
			system("cls");
			//��һ�����*********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			text_1 = text[8];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//��һ����Խ���*****************************************************
			cout << endl;
			//�ڶ������*********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			text_1 = text[9];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//�ڶ�����Խ���*****************************************************
			cout << endl;
			//���������*********************************************************
			cout << "������ʵ�����ݣ�" << endl;
			text_1 = text[10];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "ʵ������" << endl;
			showSeqList(&text_1);
			//��������Խ���*****************************************************
			//*******************************************************************
			break;
		case 0:
			return 0;
		default:
			system("cls");
			cout << "�������" << endl;
			break;
		}
	}
	return 0;
}