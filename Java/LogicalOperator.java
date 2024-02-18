import java.util.Scanner;

public class LogicalOperator
{
    public static void main (String [] args) 
    {
        /*
            logical operator = operator yang menentukan 2 kondisi atau lebih

            && (AND) = bernilai true, jika semua kondisi true
            || (OR)  = bernilai true, jika setidaknya satu kondisi true
            ! (NOT)  = bernilai true, jika semua kondisi false
        */

        Scanner scan = new Scanner (System.in);
        String username = "DA-578";
        String password = "Dzulkifli Anwar";

        System.out.print ("Masukkan username anda: ");
        String ConfirmUsername = scan.nextLine ();
        System.out.print ("Masukkan password anda: ");
        String ConfirmPassword = scan.nextLine ();
        scan.close ();

        if (ConfirmUsername.equals (username))
            System.out.println ("Username anda salah");
        else if (ConfirmPassword.equals (password))
            System.out.println ("Password anda salah");
        else
            System.out.println ("Username & password anda salah");
    }    
}