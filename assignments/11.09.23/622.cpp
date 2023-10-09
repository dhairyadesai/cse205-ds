// Here firstIndex keeps track of front Element in Queue while Performing various Operations in Queue
// nextIndex is the index at which new element is inserted in queue while performing enqueue operation in queue
//size variable maintain size of vector data while enqueuing or dequeuing element in queue

class MyCircularQueue {
public:
    vector<int> data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;
    
    MyCircularQueue(int k) {
        data.resize(k,0);
        firstIndex=-1;
        nextIndex=0;
        size=0;
        capacity=k;
    }
    
    bool enQueue(int value) {
        if(size==capacity)   return false;
        data[nextIndex]=value;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1){
            firstIndex=0;
        }
        size++;
        return true;
    }
    
    bool deQueue() {
        if(size==0)   return false;
        int x=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(size==0)    return -1;
        else return data[firstIndex];
    }
    
    int Rear() {
        if(size==0)   return -1;
        if(nextIndex==0)   return data[capacity-1];
        else return data[nextIndex-1];
    }
    
    bool isEmpty() {
        if(size==0)   return true;
        else return false;
    }
    
    bool isFull() {
        if(size==capacity)   return true;
        else return false;
    }
};