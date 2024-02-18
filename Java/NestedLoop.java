import java.util.Scanner;

public class NestedLoop
{
    public static void main (String [] args)
    {
        // nested loop = loop di dalam loop

        Scanner scan = new Scanner (System.in);

        System.out.print ("Masukkan jumlah baris: ");
        int baris = scan.nextInt ();
        System.out.print ("Masukkan jumlah kolom: ");
        int kolom = scan.nextInt ();
        System.out.print ("Masukkan simbol: ");
        String simbol = scan.next ();
        scan.close ();

        for (int i = 0; i < kolom; i++)
        {
            for (int j = 0; j < baris; j++)
                System.out.print (simbol);
            System.out.println ();
        }
    }
}