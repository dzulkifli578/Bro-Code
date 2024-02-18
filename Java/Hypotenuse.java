import java.util.Scanner;

public class Hypotenuse
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        System.out.print ("Masukkan sisi X: ");
        double X = scan.nextDouble ();
        System.out.print ("Masukkan sisi Y: ");
        double Y = scan.nextDouble ();
        scan.close ();

        double Z = Math.sqrt (Math.pow (X, 2) + Math.pow (Y, 2));
        System.out.println ("Hasil: " + Z);
    }
}