package org.example.string.is_subsequence;

public class solution {
    public static void main(String[] args) {
        String s1 = "abc";
        String s2 = "ahbgdc";

//        boolean ans = findSubsequence(s1,s2);
        boolean ans = findSubsequence("axc","ahbgdc");

        System.out.println("This is the sequence : " + ans);
    }

    private static boolean findSubsequence(String s1, String s2) {
        int i = 0;
        for (char c1 : s2.toCharArray()){
            for (char c2 : s1.toCharArray()){
                if(c2 == c1){
                    i++;
                }
            }
        }

        int length = s1.length();

        if (i == length){
            return true;
        }else{
            return false;
        }
    }
}
