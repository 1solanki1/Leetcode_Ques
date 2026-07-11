class MyCircularQueue {
public:
vector<int>q;
int cursize=0,f=0,r=-1,cap;

    MyCircularQueue(int k) {
        cap=k;
        q.resize(k);

    }
    
    bool enQueue(int value) {
       if(cursize==cap) return false;
       r=(r+1)%cap;
       q[r]=value;
       cursize++;
       return true;
    }
    
    bool deQueue() {
        if(cursize==0)return false;
        f=(f+1)%cap;
        cursize--;
        return true;
    }
    
    int Front() {
        return cursize?q[f]:-1;
    }
    
    int Rear() {
        return cursize?q[r]:-1;
    }
    
    bool isEmpty() {
       return  cursize==0;
    }
    
    bool isFull() {
        return cursize==cap;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */