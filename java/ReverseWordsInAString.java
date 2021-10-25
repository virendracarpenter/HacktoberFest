import java.util.*;

// Input: s = "the sky is blue"
// Output: "blue is sky the"



public class RevesreWordsInAString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
      String input  = sc.nextLine();
      System.out.println(reverseWords(input));
    }
    public static String reverseWords(String s) {
        String arr[] = s.split("\\s+"); //splits the string based on whitespace in an array
         String ans = "";
         for(int i=arr.length-1;i>=0;i--){
             ans+=arr[i]+" ";
         }
         
         return ans.trim(); // removes extra spaces at the end
     }
}

