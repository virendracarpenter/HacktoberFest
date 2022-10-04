import java.util.*;
import java.lang.*;
import java.io.*;


class Vowels
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sn = new Scanner(System.in);
		int n=sn.nextInt();
		
		String temp="";
		String[] str = new String[n];
		for(int i = 0; i< n ;i++){
			str[i]=sn.next();}
		
		for(int i=0; i < n; i++) {
		char b[]=str[i].toCharArray();
			int count=0;	
			for(int j=0;j<b.length;j++){
         if(b[j] == 'a'|| b[j] == 'e'|| b[j] == 'i' || b[j] == 'o' || b[j] == 'u' || b[j] == 'A'|| b[j] == 'E'|| b[j] == 'I' || b[j] == 'O' || b[j] == 'U') {
			 count++;
		 }
            
         }
				 System.out.println(count);
		}

	}
	}
