import java.io.*;
import java.util.*;

class Interval
{
    int start, end;
    public Interval(int a, int b)
    {
        start = a;
        end = b;
    }
}

class day056
{
    static int totalN = 0; 

    public static void mergeArrays(ArrayList<Interval> intervals)
    {
        int x = 0;

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals.get(x).end >= intervals.get(i).start)
            {
                intervals.get(x).start = Math.min(intervals.get(x).start, intervals.get(i).start);
                intervals.get(x).end = Math.max(intervals.get(x).end, intervals.get(i).end);
            }
            else
            {
                ++x;
                intervals.set(x, intervals.get(i));
            }
        }
        totalN = x;
    }
    public static void main(String args[]) 
    {
        Scanner s = new Scanner(System.in); 
        
        System.out.print("Enter number of intervals: ");
        int n = s.nextInt();

        ArrayList<Interval> intervals = new ArrayList<Interval>();

        for (int i = 0; i < n; ++i)
        {
            System.out.printf("Enter the starting and ending point of the interval %d: ", (i + 1));
            int a = s.nextInt();
            int b = s.nextInt();
            intervals.add(new Interval(a, b));
        }

        s.close();
        intervals.sort((Interval a, Interval b) -> a.start - b.start);
        mergeArrays(intervals);

        System.out.print("Merged array: \n");
        for (int i = 0; i <= totalN; ++i)
            System.out.printf("[%d, %d]\n", intervals.get(i).start, intervals.get(i).end);
    } 
} 