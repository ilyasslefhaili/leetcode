class Solution {
    public int lengthOfLastWord(String s) {
        int len = s.length();
        if (s.charAt(len - 1) == ' '){
            for (int i = len - 1; i >= 0; i--){
                if (s.charAt(i) != ' '){
                    s = s.substring(0, i + 1);
                    break ;
                }
            }
        }
        int pos = s.lastIndexOf(" ");
        return (pos == -1 ? s.length() : s.length() - (pos + 1));
    }
}
