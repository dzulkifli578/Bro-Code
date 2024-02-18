import java.util.Random;

public class RandomNumber
{
    public static void main (String [] args)
    {
        /*
            random selalu dimulai dari 0 sampai n - 1
            supaya mencapai batas n, tinggal tambahkan 1
        */

        Random rand = new Random ();
        int x = rand.nextInt (6) + 1;

        System.out.println(x);
    }    
}