class MyCircularDeque {
public:
    
    
    vector<int>deq;
    int K;
    int front;
    int rear;
    int currentcount;
    
    MyCircularDeque(int k) {
        K=k;
        deq=vector<int>(K,0);
        front=0;
        rear=K-1;
        currentcount=0;
            
    }
    
    bool insertFront(int value) {
        
        if(currentcount==K){
            return false;
        }
          front=(front-1+K)%K;
        deq[front]=value;
      
        currentcount++;
        
        return true;
    }
    
    bool insertLast(int value) {
         if(currentcount==K){
            return false;
        }
        
        rear=(rear+1)%K;
        deq[rear]=value;
        
        currentcount++;
        
        return true;
        
        
    }
    
    bool deleteFront() {
        
         if(currentcount==0){
            return false;
        }
        
        
        front=(front+1)%K;
        currentcount--;
        return true;
        
    }
    
    bool deleteLast() {
         if(currentcount==0){
            return false;
        }
        
       
        rear=(rear-1+K)%K;
        currentcount--;
        return true;
        
    }
    
    int getFront() {
        
         if(currentcount==0){
            return -1;
        }
        else{
            return deq[front];
        }
        
        
    }
    
    int getRear() {
        
         if(currentcount==0){
            return -1;
        }
        else{
            return deq[rear];
        }
        
    }
    
    bool isEmpty() {
        
          if(currentcount==0){
            return true;
        }
        return false;
        
    }
    
    bool isFull() {
        
          if(currentcount==K){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */