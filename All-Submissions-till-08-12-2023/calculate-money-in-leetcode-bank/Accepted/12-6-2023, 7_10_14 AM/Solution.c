// https://leetcode.com/problems/calculate-money-in-leetcode-bank

int totalMoney(int n) {
  int total=0,base=0;
  for(int i=1;i<=n;i++) {
    if(i%7==1) base++;
    if(i%7==0) total+=base+6;
    else total+=base+i%7-1;
  }
  return total;
}