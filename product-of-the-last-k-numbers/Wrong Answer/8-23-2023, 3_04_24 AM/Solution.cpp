// https://leetcode.com/problems/product-of-the-last-k-numbers

class ProductOfNumbers {
public:
    vector<int> prefixProd;
    ProductOfNumbers() {
        prefixProd={1};
    }
    void add(int num) {
        if(num!=0) prefixProd.push_back(prefixProd.back()*num);
        else ProductOfNumbers();
    }
    int getProduct(int k) {
        int n=prefixProd.size();
        if(k>=n-1) return 0;
        else return prefixProd.back()/prefixProd[n-k-1];
    }
};
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */