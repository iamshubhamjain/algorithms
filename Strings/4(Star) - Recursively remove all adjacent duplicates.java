class Solution{
    static String removeUtils(String s, char lastRemoved){
        if(s.length()==0||s.length()==1)
            return s;
        if(s.charAt(0)==s.charAt(1)){
            lastRemoved=s.charAt(0);
            while(s.length()>1&&s.charAt(1)==s.charAt(0))
                s=s.substring(1,s.length());
            s=s.substring(1,s.length());
            return removeUtils(s,lastRemoved);
        }
        String remStr=removeUtils(s.substring(1,s.length()),lastRemoved);
        if(remStr.length()!=0&&remStr.charAt(0)==s.charAt(0)){
            lastRemoved=s.charAt(0);
            return remStr.substring(1,remStr.length());
        }
        if(remStr.length()==0&&s.charAt(0)==lastRemoved)
            return remStr;
        return (s.charAt(0)+remStr);
    }
    
    static String remove(String s) {
        char lastRemoved='\0';
        return removeUtils(s,lastRemoved);
    }
}