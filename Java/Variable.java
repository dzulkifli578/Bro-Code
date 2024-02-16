public class Variable
{
    public static void main (String [] args)
    {
        boolean konfirmasi = true;
        System.out.println ("Tipe data boolean  : " + konfirmasi);
        System.out.println ("Ukuran             : " + String.valueOf (konfirmasi).getBytes ().length + " byte");
        System.out.println ();

        byte index = 127;
        System.out.println (index);
        System.out.println ("Tipe data byte     : " + index);
        System.out.println ("Ukuran             : " + String.valueOf (index).getBytes ().length + " byte");
        System.out.println ();
        
        short angka = 32_767;
        System.out.println ("Tipe data short    : " + angka);
        System.out.println ("Ukuran             : " + String.valueOf (angka).getBytes ().length + " byte");
        System.out.println ();
        
        int bilangan = 2_147_483_647;
        System.out.println ("Tipe data int      : " + bilangan);
        System.out.println ("Ukuran             : " + String.valueOf (bilangan).getBytes ().length + " byte");
        System.out.println ();
        
        long pangkat = 900_000_000;
        System.out.println ("Tipe data long     : " + pangkat);
        System.out.println ("Ukuran             : " + String.valueOf (pangkat).getBytes ().length + " byte");
        System.out.println ();



    }
}
