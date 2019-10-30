//**********************//
//顺序表实验主程序		//
//**********************//

#include"seqList.h"


int main(void) {
	int order = NULL;
	elementType res = NULL;
	//***********全部实验使用数据************
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
		cout << "实验一：顺序表实验" << endl;
		cout << "*****************************************************************" << endl;
		cout << "*1，求顺序表中第i个元素。\t\t\t\t\t*" << endl;
		cout << "*2，在第i个结点前插入值为x的结点。\t\t\t\t*" << endl;
		cout << "*3，删除顺序表中第i个元素结点。\t\t\t\t\t*" << endl;
		cout << "*4，在递增顺序表中插入值为x的元素，并保持其递增。\t\t*" << endl;
		cout << "*5，将顺序表中奇偶元素分开。\t\t\t\t\t*" << endl;
		cout << "*6，求递增顺序表中的公共元素。\t\t\t\t\t*" << endl;
		cout << "*7，删除顺序表中的重复元素，并统计移动次数。\t\t\t*" << endl;
		cout << "*\t\t\t\t\t\t\t\t*" << endl;
		cout << "*0，退出程序。\t\t\t\t\t\t\t*" << endl;
		cout << "*****************************************************************" << endl;
		cout << "请输入菜单编号：\t";
		cin >> order;

		switch (order)
		{
		case 1:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据（n=12）：" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "第5个元素为：" << "\t\t";						//一组一次
			res = getElement(&text_1, 5);
			if (res)cout << res << endl;
			cout << "第n(n=12)个元素为：" << "\t";					//一组二次
			res = getElement(&text_1, 12);
			if (res)cout << res << endl;
			cout << "第0个元素为：" << "\t\t";						//一组三次
			res = getElement(&text_1, 0);
			if (res)cout << res << endl;
			cout << "第n+1(n=12)个元素为：" << "\t";				//一组四次
			res = getElement(&text_1, 13);
			if (res)cout << res << endl;
			cout << "第n+2(n=12)个元素为：" << "\t";				//一组五次
			res = getElement(&text_1, 14);
			if (res)cout << res << endl;
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据（n=0）：" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "第0个元素为：" << "\t\t";						//二组一次
			res = getElement(&text_1, 0);
			if (res)cout << res << endl;
			cout << "第2个元素为：" << "\t\t";						//二组二次
			res = getElement(&text_1, 2);
			if (res)cout << res << endl;
			//第二组测试结束*****************************************************
			//*******************************************************************
			break;
		case 2:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据（n=12）：" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "当插入位置为5时：" << endl;					//一组一次
			//text_1 = text[0];
			insertElement(&text_1, 5, 100);
			showSeqList(&text_1);
			cout << "当插入位置为n(n=12)时：" << endl;				//一组二次
			text_1 = text[0];	//恢复数据
			insertElement(&text_1, 12, 100);
			showSeqList(&text_1);
			cout << "当插入位置为n+1(n=12)时：" << endl;			//一组三次
			text_1 = text[0];	//恢复数据
			insertElement(&text_1, 13, 100);
			showSeqList(&text_1);
			cout << "当插入位置为0时：" << endl;					//一组四次
			text_1 = text[0];	//恢复数据
			insertElement(&text_1, 0, 100);
			showSeqList(&text_1);
			cout << "当插入位置为1时：" << endl;					//一组五次
			text_1 = text[0];	//恢复数据
			insertElement(&text_1, 1, 100);
			showSeqList(&text_1);
			cout << "当插入位置为n+2(n=12)时：" << endl;			//一组六次
			text_1 = text[0];	//恢复数据
			insertElement(&text_1, 14, 100);
			showSeqList(&text_1);
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据（n=0）：" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "当插入位置为5时：" << endl;					//二组一次
			insertElement(&text_1, 5, 100);
			showSeqList(&text_1);
			//第二组测试结束*****************************************************
			//*******************************************************************
			break;
		case 3:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据（n=12）：" << endl;
			text_1 = text[0];
			showSeqList(&text_1);
			cout << "当删除位置为5时：" << endl;					//一组一次
			deleteElement(&text_1, 5);
			showSeqList(&text_1);
			text_1 = text[0];	//恢复数据
			cout << "当删除位置为n(n=12)时：" << endl;				//一组二次
			deleteElement(&text_1, 12);
			showSeqList(&text_1);
			text_1 = text[0];	//恢复数据
			cout << "当删除位置为1时：" << endl;					//一组三次
			deleteElement(&text_1, 1);
			showSeqList(&text_1);
			text_1 = text[0];	//恢复数据
			cout << "当删除位置为n+1(n=12)时：" << endl;			//一组四次
			deleteElement(&text_1, 13);
			showSeqList(&text_1);
			text_1 = text[0];	//恢复数据
			cout << "当删除位置为0时：" << endl;					//一组五次
			deleteElement(&text_1, 0);
			showSeqList(&text_1);
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据（n=0）：" << endl;
			text_1 = text[1];
			showSeqList(&text_1);
			cout << "当删除位置为5时：" << endl;					//二组一次
			deleteElement(&text_1, 5);
			showSeqList(&text_1);
			//第二组测试结束*****************************************************
			//*******************************************************************
			break;
		case 4:
			system("cls");
			//第一组测试*********************************************************
			cout << "实验数据为：" << endl;
			text_1 = text[2];
			showSeqList(&text_1);
			cout << "当插入元素为25时：" << endl;					//一组一次
			//text_1 = text[2];
			insertElementOrder(&text_1, 25);
			showSeqList(&text_1);
			cout << "当插入元素为85时：" << endl;					//一组二次
			text_1 = text[2];	//恢复数据
			insertElementOrder(&text_1, 85);
			showSeqList(&text_1);
			cout << "当插入元素为110时：" << endl;					//一组三次
			text_1 = text[2];	//恢复数据
			insertElementOrder(&text_1, 110);
			showSeqList(&text_1);
			cout << "当插入元素为8时：" << endl;					//一组四次
			text_1 = text[2];	//恢复数据
			insertElementOrder(&text_1, 8);
			showSeqList(&text_1);
			//第一组测试结束*****************************************************
			//*******************************************************************
			break;
		case 5:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据：" << endl;
			showSeqList(&text[3]);
			separateSeqList(&text[3], &text_5[0], &text_5[1]);		//一组一次
			cout << "第一组实验结果为：" << endl;
			cout << "奇数：" << endl;
			showSeqList(&text_5[0]);
			cout << "偶数：" << endl;
			showSeqList(&text_5[1]);
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据：" << endl;
			showSeqList(&text[2]);
			separateSeqList(&text[2], &text_5[0], &text_5[1]);		//二组一次
			cout << "第二组实验结果为：" << endl;
			cout << "奇数：" << endl;
			showSeqList(&text_5[0]);
			cout << "偶数：" << endl;
			showSeqList(&text_5[1]);
			//第二组测试结束*****************************************************
			//*******************************************************************
			break;
		case 6:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据：" << endl;
			cout << "数据组一：";
			showSeqList(&text[4]);
			cout << "数据组二：";
			showSeqList(&text[5]);
			unionsetIncreaseSeqList(&text[4], &text[5], &text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据：" << endl;
			cout << "数据组一：";
			showSeqList(&text[4]);
			cout << "数据组二：";
			showSeqList(&text[6]);
			unionsetIncreaseSeqList(&text[4], &text[6], &text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第二组测试结束*****************************************************
			cout << endl;
			//第三组测试*********************************************************
			cout << "第三组实验数据：" << endl;
			cout << "数据组一：";
			showSeqList(&text[1]);
			cout << "数据组二：";
			showSeqList(&text[7]);
			unionsetIncreaseSeqList(&text[1], &text[7], &text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第三组测试结束*****************************************************
			//*******************************************************************
			break;
		case 7:
			system("cls");
			//第一组测试*********************************************************
			cout << "第一组实验数据：" << endl;
			text_1 = text[8];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第一组测试结束*****************************************************
			cout << endl;
			//第二组测试*********************************************************
			cout << "第二组实验数据：" << endl;
			text_1 = text[9];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第二组测试结束*****************************************************
			cout << endl;
			//第三组测试*********************************************************
			cout << "第三组实验数据：" << endl;
			text_1 = text[10];
			showSeqList(&text_1);
			deleteRepeatElement(&text_1);
			cout << "实验结果：" << endl;
			showSeqList(&text_1);
			//第三组测试结束*****************************************************
			//*******************************************************************
			break;
		case 0:
			return 0;
		default:
			system("cls");
			cout << "输入错误！" << endl;
			break;
		}
	}
	return 0;
}