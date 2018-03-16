/*
type: DP
url: https://practice.geeksforgeeks.org/problems/subset-sum-problem/0
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    static int n;
    static int totalSum;
    
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		
		int t = s.nextInt();
		
		while(t-- > 0) {
		    totalSum = 0;
		    
		    n = s.nextInt();
		    
		    int[] pat = new int[n];
		    
		    for (int i=0; i<n; i++) {
		        pat[i] = s.nextInt();
		        totalSum += pat[i];
		    }


		    //DP
		    
		    if (totalSum%2 == 0) {
		        totalSum /= 2;
		        System.out.println(f(pat, 0, 0) ? "YES" : "NO");
		    } else {
		        System.out.println("NO");
		    }
		    
		}
	}
	
	static boolean f(int[] pat, int i, int currSum) {
	    if (currSum == totalSum) {
	        return true;
	    }
	    if (i < n && currSum < totalSum) {
	        if (f(pat, i+1, currSum+pat[i])) 
	        	return true;
	        return f(pat, i+1, currSum);
	    } else {
	        return false;
	    }
	}
}