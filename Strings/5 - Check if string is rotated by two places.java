class Solution
{
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    public static boolean isRotated(String str1, String str2)
    {
        if(str1.length()<=1){
            return str1.equals(str2);
        }
        boolean val1=true,val2=true;
        String test = str1 + str1;
        int i=2,j=0;
        while(j<str2.length()){
            if(test.charAt(i)!=str2.charAt(j)){
                val1=false;
                break;
            }
            i++;
            j++;
        }
        i=str1.length()-2;
        j=0;
        while(!val1&&j<str2.length()){
            if(test.charAt(i)!=str2.charAt(j)){
                val2=false;
                break;
            }
            i++;
            j++;
        }
        
        return val1||val2;
    }
    
}