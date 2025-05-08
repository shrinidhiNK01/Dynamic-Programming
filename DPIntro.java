// Memoization
import java.util.Arrays;
class Hello{
    static int f(int n,int[] dp){
        if(n<=1) return n;
        if(dp[n]!=-1){return dp[n];}
        else{
            return dp[n]=f(n-1,dp)+f(n-2,dp);
        }
    }
}
public class DPIntro{
    public static void main(String[] args) {
    int n=5;
    int dp[]=new int[n+1];
    Arrays.fill(dp,-1);
    System.out.println("Fibonacci number at position " + n + " is: " + Hello.f(n, dp));

        // Optional: Print the entire Fibonacci series up to n
        System.out.print("Fibonacci series up to " + n + " is: ");
        for (int i = 0; i <= n; i++) {
            System.out.print(Hello.f(i, dp));
            if (i != n) {
                System.out.print(", ");
            }
        }
        System.out.println();
    }

   
}
// TC:-O(N)
//SC:-O(N)+O(N)