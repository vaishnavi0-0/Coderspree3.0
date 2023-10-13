import java.util.*;
public class Solution {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
        int f=0,s=1,t,n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		t=s+f;
		if(n==1)
		System.out.println("1");
		else
		{
		for(int i=2;i<n;i++)
		{
			f=s;
			s=t;
			t=s+f;
		}
		System.out.println(t);
		}



		
	}

}