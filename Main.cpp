#include <iostream>
#include "CirQueue.h"

using namespace std;

int main(int argc, char *argv[])
{
    CirQueue *p = new CirQueue(4);
    
    //Ԫ�����
    p->EnQueue(1);
    p->EnQueue(2);
    p->EnQueue(3);
    p->EnQueue(4);
    //�õ���ʱ���г���Ϊ4
    cout <<"queue lenth 1: "<< p->QueueLenth() << endl;
    //�������У���ʱ���Խ�1,2,3,4����ӡ����
    p->QueueTravel();

    //Ԫ�س���
    int e = 0;
    p->DeQueue(e);
    //��ʱ�����е�1���ӣ�e�õ�ֵ1������ӡ��1
    cout<< "out 1:"<< e << endl;

    //��ʱ�����е�2���ӣ�e�õ�ֵ2������ӡ��2
    p->DeQueue(e);
    cout <<"out 2: "<< e << endl;

    //�õ���ʱ���г���Ϊ2
    cout <<"queue lenth 2: " << p->QueueLenth() << endl;
    p->QueueTravel();
    //��ն���
    p->ClearQueue();
    //ʲô���򲻳���
    p->QueueTravel();

    //���ù�������
    delete p;
    p = NULL;
}
