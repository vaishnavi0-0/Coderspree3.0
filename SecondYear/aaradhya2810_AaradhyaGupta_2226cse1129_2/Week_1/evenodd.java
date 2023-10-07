import java.util.*;
public class Main {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int sumEven=0;
		int sumOdd=0;
		while(n!=0){
			int a=n%10;
			if(a%2==0){
				sumEven+=a;
			}
			else{
				sumOdd+=a;
			}
			n=n/10;
		}
		System.out.print(sumEven+" ");
		System.out.print(sumOdd);
		// Write your code here

	}
}