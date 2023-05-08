class Solution {
    //List<String> ans;
    
    public String swap(String s, int i, int j){
        char[] ch=s.toCharArray();
        char temp;
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        return String.valueOf(ch);
    }
    
    public void find_permutation_utils(String S,int l, int h,ArrayList<String> ans){
        if(l==h){
            ans.add(S);
        }
        else{
            for(int i=l;i<=h;i++){
                S = swap(S,l,i);
                find_permutation_utils(S,l+1,h,ans);
                S = swap(S,l,i);
            }
        }
    } 
    
    public List<String> find_permutation(String S) {
        ArrayList<String> ans= new ArrayList<>();
        find_permutation_utils(S,0,S.length()-1,ans);
        Collections.sort(ans);
        return ans;
    }
}