import java.util.Scanner;
class SumNo{
	public static void main(String[] args){
		Scanner obj = new Scanner(System.in);
		int a;
		a = obj.nextInt();
		int sum = 0;
		while(a != 0){
			sum = sum + a;
			a = a - 1;
		}
		System.out.println("summation of entered number is " + sum);
		//summation of number of entered number
		/*int r;
		while(a != 0){
			r = a % 10;
			sum = sum + r;
			a = a / 10;
		}
		System.out.println("summation of number of entered number is " + sum);*/
	}
}