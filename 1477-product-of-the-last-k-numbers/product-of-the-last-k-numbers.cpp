class ProductOfNumbers {
        int* arr;
        int size;
        int cap;
public:
    ProductOfNumbers() {
        size =0;
        cap = 2;
        arr = new int[2];
    }
    void add(int num) {
        if(size >= cap)
        {
            cap = cap*2;
            int* t = arr;
            arr = new int[cap];
            for(int i=0; i<size; i++)
            {
                arr[i] = t[i];
            }
            delete[] t;

        }
        arr[size] = num;
        size++;   
    }

    
    int getProduct(int k) {
        int prod =1;
        for(int i = size-k; i<size; i++)
        {
            prod = prod* arr[i];
        }
        return prod;    
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */