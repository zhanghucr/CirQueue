#include <iostream>
#include "CirQueue.h"

using namespace std;

CirQueue::CirQueue(int queueCapacity)
{
    m_iQueueCapacity = queueCapacity;
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLenth = 0;
    m_pQueue = new int[queueCapacity];
}

CirQueue::~CirQueue()
{
    delete[] m_pQueue;
    m_pQueue = NULL;
}

int CirQueue::QueueLenth()
{
    return m_iQueueLenth;       //返回队列的长度
}

void CirQueue::ClearQueue()
{
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLenth = 0;
}

bool CirQueue::QueueEmpty()
{
    if (m_iQueueLenth == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CirQueue::QueueFull()
{
    if (m_iQueueLenth == m_iQueueCapacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CirQueue::EnQueue(int element)
{
    if (QueueFull())
    {
        return false;
    }
    else
    {
        m_pQueue[m_iTail] = element;
        m_iTail++;
        //因为队列是环形，则m_iTail也应该像环形一样循环
        m_iTail = m_iTail % m_iQueueCapacity;
        m_iQueueLenth++;
        return true;
    }
}

bool CirQueue::DeQueue(int &element)
{
    if (QueueEmpty())
    {
        return false;
    }
    else
    {
        element = m_pQueue[m_iHead];
        m_iHead++;
        //因为队列是环形，则m_iHead也应该像环形一样循环
        m_iHead = m_iHead % m_iQueueCapacity;
        m_iQueueLenth--;    
        return true;
    }

}

void CirQueue::QueueTravel()
{
    for (int i = m_iHead; i < m_iQueueLenth + m_iHead; i++)
    {
        cout << m_pQueue[i % m_iQueueCapacity] << endl;
    }
    
    cout << endl;
}
