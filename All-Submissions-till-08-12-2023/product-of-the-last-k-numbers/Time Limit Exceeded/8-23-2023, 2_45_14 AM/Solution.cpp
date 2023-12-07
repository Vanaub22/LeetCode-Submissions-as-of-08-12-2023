// https://leetcode.com/problems/product-of-the-last-k-numbers

class ProductOfNumbers {
public:
    vector<int> prefixProd;
    void add(int num) {
        int n=prefixProd.size();
        for(int i=0;i<n;i++) prefixProd[i]*=num;
        prefixProd.insert(prefixProd.begin(),num);
    }
    int getProduct(int k) {
        return prefixProd[k-1];
    }
};
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */