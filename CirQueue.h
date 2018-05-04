/* CirQueue.h */
#ifndef __CIR_QUEUE_H__
#define __CIR_QUEUE_H__

class CirQueue
{
public:
    CirQueue(int queueCapacity);    //���г�ʼ��
    ~CirQueue();                    //��������

    int QueueLenth();               //�õ����г���

    bool EnQueue(int element);      //Ԫ�����
    bool DeQueue(int &element);     //Ԫ�س���
    bool QueueEmpty();              //�����п�
    bool QueueFull();               //��������
    void ClearQueue();              //��ն���

//������Ҫע��ѭ������
    void QueueTravel();             //���б���

private:
    int *m_pQueue;                  //����ָ��
    int m_iHead;                    //����ͷ       
    int m_iTail;                    //����β
    int m_iQueueLenth;              //���г���
    int m_iQueueCapacity;           //��������
};

#endif  /* __CIR_QUEUE_H__ */