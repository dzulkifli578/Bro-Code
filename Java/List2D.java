import java.util.ArrayList;

public class List2D
{
    public static void main (String [] args)
    {
        // array list 2 dimensi = array list di dalam array list

        // menambahkan beberapa ArrayList
        ArrayList <String> makanan = new ArrayList <> ();
        makanan.add ("Sosis");
        makanan.add ("Mie");
        makanan.add ("Nasi");
        ArrayList <String> minuman = new ArrayList <> ();
        minuman.add ("Aqua");
        minuman.add ("Le Minerale");
        minuman.add ("Marjan");
        ArrayList <String> AlatDapur = new ArrayList <> ();
        AlatDapur.add ("Sendok");
        AlatDapur.add ("Garpu");
        AlatDapur.add ("Pisau");

        // menggabungkannya menjadi 1 di dalam ArrayList
        ArrayList <ArrayList <String>> jualan = new ArrayList <> ();
        jualan.add (makanan);
        jualan.add (minuman);
        jualan.add (AlatDapur);

        // memilih semua elemen
        System.out.println (jualan);
        // memilih salah satu array
        System.out.println (jualan.get (1));
        // memilih salah satu elemen di dalam array
        System.out.println (jualan.get (1).get (2));
    }    
}
