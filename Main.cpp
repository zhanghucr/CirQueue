#include <iostream>
#include "CirQueue.h"

using namespace std;

int main(int argc, char *argv[])
{
    CirQueue *p = new CirQueue(4);
    
    //元素入队
    p->EnQueue(1);
    p->EnQueue(2);
    p->EnQueue(3);
    p->EnQueue(4);
    //得到此时队列长度为4
    cout <<"queue lenth 1: "<< p->QueueLenth() << endl;
    //遍历队列，此时可以将1,2,3,4都打印出来
    p->QueueTravel();

    //元素出队
    int e = 0;
    p->DeQueue(e);
    //此时队列中的1出队，e得到值1，将打印出1
    cout<< "out 1:"<< e << endl;

    //此时队列中的2出队，e得到值2，将打印出2
    p->DeQueue(e);
    cout <<"out 2: "<< e << endl;

    //得到此时队列长度为2
    cout <<"queue lenth 2: " << p->QueueLenth() << endl;
    p->QueueTravel();
    //清空队列
    p->ClearQueue();
    //什么都打不出来
    p->QueueTravel();

    //调用构销函数
    delete p;
    p = NULL;
}
