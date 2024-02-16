import java.util.Scanner;

public class Input
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        System.out.println ("Siapa namamu?");
        String nama = scan.nextLine ();
        System.out.println ("Berapa umurmu?");
        String umur = scan.nextLine ();
        System.out.println ("Apa makanan favoritmu?");
        String makanan = scan.nextLine ();

        scan.close ();

        System.out.println ("Halo " + nama);
        System.out.println ("Kamu berumur " + umur + " tahun");
        System.out.println ("Kamu menyukai " + makanan);
    }
}