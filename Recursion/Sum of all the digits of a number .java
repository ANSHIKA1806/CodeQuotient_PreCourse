import java.util.Scanner;

class Main
{
  static int sumOfDigits(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += n % 10;
            n = n / 10;
        }
        return ans;
    }
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    int t,no;
    t= sc.nextInt();
    while(t>0)
    {
      no=sc.nextInt();
      System.out.println(sumOfDigits(no));
      t--;
    }
    // Write your code here
  }
}
