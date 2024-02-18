public class Switch
{
    public static void main (String [] args)
    {
        // switch = alternatif if-else if untuk kondisi berturut-turut

        String bulan = "Februari";

        switch (bulan)
        {
            case "Januari":
                System.out.println ("Ini adalah bulan Januari");
                break;
            case "Februari":
                System.out.println ("Ini adalah bulan Februari");
                break;
            case "Maret":
                System.out.println ("Ini adalah bulan Maret");
                break;
            case "April":
                System.out.println ("Ini adalah bulan April");
                break;
            case "Mei":
                System.out.println ("Ini adalah bulan Mei");
                break;
            case "Juni":
                System.out.println ("Ini adalah bulan Juni");
                break;
            case "Juli":
                System.out.println ("Ini adalah bulan Juli");
                break;
            case "Agustus":
                System.out.println ("Ini adalah bulan Agustus");
                break;
            case "September":
                System.out.println ("Ini adalah bulan September");
                break;
            case "Oktober":
                System.out.println ("Ini adalah bulan Oktober");
                break;
            case "November":
                System.out.println ("Ini adalah bulan November");
                break;
            case "Desember":
                System.out.println ("Ini adalah bulan Desember");
                break;
            default:
                System.out.println ("Ini bukanlah nama bulan");
                break;
        }
    }    
}