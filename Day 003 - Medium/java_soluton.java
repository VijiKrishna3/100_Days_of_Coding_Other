import java.io.*;
import java.util.*;

class day003
{   
    public static void sieve(ArrayList<Boolean> arr)
    {
        arr.set(0, true);
        arr.set(1, true);
        for (int i = 2; i < arr.size() - 1; ++i)
            if (!arr.get(i))
                for (int j = i * i; j < arr.size(); j += i)
                    arr.set(j, true);
    }
    public static void main(String args[]) 
    {
        Scanner s = new Scanner(System.in); 
        
        System.out.print("Enter upper number limit (>2): ");
        int n = s.nextInt();

        ArrayList<Boolean> primes = new ArrayList<Boolean>(Collections.nCopies(n + 1, false));
        sieve(primes);

        for (int i = 0; i < primes.size(); ++i)
            if (primes.get(i) == false) System.out.printf("%d ", i);
        s.close();
    } 
} 