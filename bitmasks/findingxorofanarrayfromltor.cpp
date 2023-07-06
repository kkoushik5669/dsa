 int func(int x){
      
      if(x%4==0){
          return x;
      }
      if(x%4==1){
          return 1;
      }
      if(x%4==2){
          return x+1;
      }
      if(x%4==3){
          return 0;
      }
  }
    int findXOR(int l, int r) {
        
        return func(l-1)^func(r);

    }
