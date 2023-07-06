vector<long long int> twoOddNum(long long int Arr[], long long int N){
        
        long long int xor2 = Arr[0]; /* Will hold XOR of two odd occurring elements */
        long long int set_bit_no; /* Will have only single set bit of xor2 */
        long long int i, x = 0, y = 0;  
          
        /* Get the xor of all elements in Arr[]. The xor will basically  
            be xor of two odd occurring elements */
        for(i = 1; i < N; i++)  
            xor2 = xor2 ^ Arr[i];  
          
        /* Get one set bit in the xor2. We get rightmost set bit  
            in the following line as it is easy to get */
        set_bit_no = xor2 & ~(xor2-1);  
          
        /* Now divide elements in two sets:  
            1) The elements having the corresponding bit as 1.  
            2) The elements having the corresponding bit as 0. */
        for(i = 0; i < N; i++){  
            /* XOR of first set is finally going to hold one odd  
            occurring number x */
            if(Arr[i] & set_bit_no)  
            x = x ^ Arr[i];  
          
            /* XOR of second set is finally going to hold the other  
            odd occurring number y */
            else
            y = y ^ Arr[i];  
        }
        
        vector<long long int>v;
        v.push_back(max(x,y));
        v.push_back(min(x,y));
        return v; 
    }
