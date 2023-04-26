class Solution {
    public int maximumValue(String[] strs) {
        List<Integer> list = new ArrayList<Integer>();
        for (int i = 0;i < strs.length;i++){
            if (strs[i].matches("\\d+"))
                list.add(Integer.parseInt(strs[i]));
            else
                list.add(strs[i].length());
        }
        return (Collections.max(list));
    }
}
