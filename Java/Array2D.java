public class Array2D
{
    public static void main (String [] args)
    {
        // array 2 dimensi = array di dalam array

        String [][] makanan = {{"Apel", "Pisang", "Jeruk"},
                               {"Roti", "Keju", "Susu"}};

        for (int i = 0; i < makanan.length; i++)
         {
            for (int j = 0; j < makanan [i].length; j++)
                System.out.print (makanan [i][j] + " ");
            System.out.println ();
        }
    }    
}