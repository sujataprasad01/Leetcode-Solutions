class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int i=0;
      while(i<=30){
          if((pow(2,i))==n){
              return true;
        break; 
          }
        i++;
      }
     if((pow(2,i))!=n){
        return false;
     }
     return 0;
    }
};