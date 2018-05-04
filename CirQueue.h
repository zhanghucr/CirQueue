/* CirQueue.h */
#ifndef __CIR_QUEUE_H__
#define __CIR_QUEUE_H__

class CirQueue
{
public:
    CirQueue(int queueCapacity);    //队列初始化
    ~CirQueue();                    //构销函数

    int QueueLenth();               //得到队列长度

    bool EnQueue(int element);      //元素入队
    bool DeQueue(int &element);     //元素出队
    bool QueueEmpty();              //队列判空
    bool QueueFull();               //队列判满
    void ClearQueue();              //清空队列

//遍历需要注意循环条件
    void QueueTravel();             //队列遍历

private:
    int *m_pQueue;                  //队列指针
    int m_iHead;                    //队列头       
    int m_iTail;                    //队列尾
    int m_iQueueLenth;              //队列长度
    int m_iQueueCapacity;           //队列容量
};

#endif  /* __CIR_QUEUE_H__ */