import java.util.*;

public class Solution {

    void EvenSeries(int n)
    {
       for(int i=0;i<=n;i+=2)
       {
         System.out.print(i+ " ");
       }
       System.out.println();

    }


    void OddSeries(int n)
    {
       for(int i=1;i<=n;i+=2)
       {
         System.out.print(i+ " ");
       }
       System.out.println();

    }

    void FibbonacciSeries(int n)
    {
        //For large value of n it will be overflow to avoid use Biginteger calss.
        int fib[] = new int[n];
        fib[0] = fib[1] = 1;
        for(int i=2;i<n;i++)
        {
          fib[i] = fib[i-1] + fib[i-2];
        }
        for(int num : fib)
        {
            System.out.print(num+ " ");
        }
        System.out.println();

    }

    void PrimeSeries(int n)
    {
        /// Use seive for large value of N      //https://github.com/knakul853/competitive_programming/blob/master/number_theory/seive.cpp

        for(int i=2;i<=n;i++)
        {
            int f = 0;
            for(int j=2;j*j<=i;j++)
            {
                if(i==j)continue;
                if(i%j == 0){
                    f=1;break;
                }
            }
            if(f==0){
             System.out.print(i+ " ");

            }
        }
    }

    ///http://mathworld.wolfram.com/SeriesExpansion.html

    int fact(int n)
    {
        int r = 1;
        for(int i=1;i<=n;i++)
        {
            r*=i;
        }
        return r;
    }
    double exp(double a , int b)
    {
        double res = 1;
        while(b>0){
            if(b%2==1)res = res*a;
            b = b/2;
            a = a*a;
        }
        return res;
    }

    void SineSeries(int n)
    {
// there might be precission issue due to we are taking PI at two decimal values only

// formula 
        int sign = -1;
       double m = n;
       m = m * (3.14/180);
        double ans = 0;
        // since it is infinte series take our own number of steps.
        for(int i=0;i<5;i++)
        {
            int power = 2*i+1;
            sign*=-1;
            double temp = sign * exp(m , power);
            temp = temp / fact(power);
            ans+=temp;
        }
        
        System.out.println(ans);

    }

    void CosineSeries(int n)
    {

        double m = n;
        int sign = -1;
        m = ((3.14)/180 ) * m;
        double ans = 0;
        for(int i=0;i<5;i++)
        {
            int power = 2*i;
            sign*=-1;
            double temp = sign * exp(m , power);
            temp = temp / fact(power);
            ans+=temp;

        }
         System.out.println(ans);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Solution obj = new Solution();
        // obj.EvenSeries(n);
        // obj.OddSeries(n);
        // obj.FibbonacciSeries(n);
        // obj.PrimeSeries(n);
       // obj.SineSeries(90);
        obj.CosineSeries(45);


    }
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..
  
*/


