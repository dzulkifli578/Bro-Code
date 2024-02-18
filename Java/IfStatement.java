import java.util.Scanner;

public class IfStatement
{
    public static void main (String [] args)
    {
        // if statement = jika kondisi true, blok kode akan dieksekusi

        Scanner scan = new Scanner (System.in);

        System.out.print ("Masukkan umurmu: ");
        int umur = scan.nextInt ();
        scan.close ();
        
        if (umur >= 18) System.out.println ("Kamu sudah dewasa");
        else if (umur == 0) System.out.println ("Kamu belum lahir!");
        else System.out.println ("Kamu belum dewasa");
    }    
}