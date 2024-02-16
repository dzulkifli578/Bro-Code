public class Swap
{
    public static void main (String [] args)
    {
        String X = "Air";
        String Y = "Minyak";
        String temp = null;
        
        System.out.println ("Sebelum ditukar:");
        System.out.println ("X: " + X);
        System.out.println ("Y: " + Y);

        temp = X;
        X = Y;
        Y = temp;

        System.out.println ("\nSetelah ditukar:");
        System.out.println ("X: " + X);
        System.out.println ("Y: " + Y);
    }    
}