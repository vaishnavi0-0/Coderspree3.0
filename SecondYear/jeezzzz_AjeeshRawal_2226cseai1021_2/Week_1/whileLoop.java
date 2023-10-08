import java.util.*;
public class Main {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int sum_even=0,sum_odd=0;
		while(n!=0)
		{
			int d=n%10;
			if(d%2==0)
			sum_even+=d;
			else
			sum_odd+=d;
			n/=10;
		}
		System.out.println(sum_even+" "+sum_odd);

	}
}
