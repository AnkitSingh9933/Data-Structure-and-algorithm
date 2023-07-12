class Solution {
public:
    int bitwiseComplement(int n) {//example of 5-101;
        int m=n;//storing the value if n in m;
        int mask=0;//(mask=00000000--0000);
        int ans=0;
        if(n==0){
            return 1;
        }
        
        while(m!=0){//(until all bits became 0)

            mask= (mask<<1)|1;//00000000--00000 |(or) with 1 then it became 000000000--00001;
            m=  m>>1;//00000000--000101 to 000000000--00010
        }
        ans=(~n)&mask;
     
        return ans;
    
    }
};


//T.C -> 0(log(n));
//  S.C -> 0(1);
