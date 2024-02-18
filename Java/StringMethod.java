public class StringMethod
{
    public static void main (String [] args)
    {
        /*
            String = tipe data objek yang bisa menyimpan lebih dari 1 karakter
                     tipe data objek hanya bisa diubah dengan fungsi tertentu
        
            String function:
            equals      = memeriksa kesamaan nilai dalam String
            length      = mengembalikan panjang karakter String
            charAt      = mengembalikan karakter di posisi indeks tertentu
            indexOf     = mengembalikan indeks dari temuan karakter pertama kali
            isEmpty     = memeriksa apakah String kosong
            toUpperCase = mengembalikan salinan String dengan semua karakter berhuruf kecil
            toLowerCase = mengembalikan salinan String dengan semua karakter berhuruf besar
            trim        = mengembalikan salinan String dengan menghapus spasi di awal dan di akhir
            replace     = mengembalikan salinan String dengan mengganti bagian yang lama dengan yang baru
        */

        String nama = "Dzulkifli Anwar ";

        boolean konfirmasi = nama.equals (nama);
        int panjang = nama.length ();
        char cari = nama.charAt (0);
        int hasil = nama.indexOf ("A");
        boolean kosong = nama.isEmpty ();
        String besar = nama.toUpperCase ();
        String kecil = nama.toLowerCase ();
        String pangkas = nama.trim ();
        String ganti = nama.replace(kecil, pangkas);

        System.out.println (konfirmasi);
        System.out.println (hasil);
    }    
}