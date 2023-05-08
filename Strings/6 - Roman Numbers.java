class Solution {
    // Finds decimal value of a given roman numeral
    public int romanToDecimal(String str) {
        HashMap<Character, Integer> hm= new HashMap<>();
        hm.put('I',1);
        hm.put('V',5);
        hm.put('X',10);
        hm.put('L',50);
        hm.put('C',100);
        hm.put('D',500);
        hm.put('M',1000);
        int ans=0;
        int i=0,sz=str.length();
        char ch,nch;
        while(i<sz-1){
            ch=str.charAt(i);
            nch=str.charAt(i+1);
            if((ch=='I'||ch=='X'||ch=='C'||ch=='M') && hm.get(ch)<hm.get(nch))
            {
                    ans+=hm.get(nch)-hm.get(ch);
                    i++;
            }
            else
                ans+=hm.get(ch);
             
            i++;
        }
        if(i<sz){
            ch=str.charAt(i);
            ans+=hm.get(ch);
        }
        return ans;
    }
}