public class Array
{
    public static void main (String [] args)
    {
        // array = struktur data yang menampung banyak nilai pada 1 variabel

        String [] makanan = {"Singkong Goreng", "Roti Bakar", "Mie Goreng"};
        makanan [0] = "Nasi Goreng";

        for (int i = 0; i < makanan.length; i++)
            System.out.println (makanan [i]);
    }    
}