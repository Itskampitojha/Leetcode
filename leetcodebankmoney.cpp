class Solution {
public:
    int totalMoney(int n) {
      int result = 0;  

      int mondayMoney = 1;

      while(n>0){

          int money = mondayMoney;
          for(int day = 1; day <= min(n , 7); day++){
           result += money;
           money++;
          }
          n-=7;
          mondayMoney++;

      }
      return result;
    }
};
