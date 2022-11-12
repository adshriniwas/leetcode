class Solution {
    public int reverse(int x) {
        int num = x;
        
        if(x>= Integer.MAX_VALUE || x<= Integer.MIN_VALUE){
            return 0;
        }
        
        
        // making negative number positive
        if(num<0){
            x = x*(-1);
        }
        
        // reverse num
        long rev =0;
        while(x>0){
            int dig = x%10;
            rev = rev*10+dig;
            x= x/10;
            
            if(rev>= Integer.MAX_VALUE){
            return 0;
            }
        }
        
        if(num<0){
            rev = rev*(-1);
        }
        
        return (int) rev;
        
    }
}