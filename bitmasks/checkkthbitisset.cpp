 bool checkKthBit(int n, int k)
    {
        //On 1, we perform Left shift operation k times.
        //Then we perform AND operation on n and the result
        //obtained after performing left shift on 1.
        //returning the answer in true or false.
        return ((n&(1<<(k)))!=0);
    }
