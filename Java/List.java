import java.util.ArrayList;

public class List
{
    public static void main (String [] args)
    {
        /*
            array list = array dinamis
                         elemen bisa ditambahkan atau dihapus
                         menyimpan tipe data objek

            array list function:
            add    = menambah elemen
            set    = mengedit elemen berdasarkan index
            remove = menghapus elemen
            get    = mengambil elemen
            size   = mengambil ukuran array
        */
        
        ArrayList <String> makanan = new ArrayList <String> ();

        makanan.add ("Singkong goreng");
        makanan.add ("Nasi goreng");
        makanan.add ("Mie goreng");

        for (int i = 0; i < makanan.size (); i++)
            System.out.println (makanan.get (i));
    }    
}