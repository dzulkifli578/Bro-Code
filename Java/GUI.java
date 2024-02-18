import javax.swing.JOptionPane;

public class GUI
{
    public static void main (String [] args)
    {
        /*
            JOptionPane       = GUI dialog box
            showInputDialog   = input box
            showMessageDialog = output box
         */

        String nama = JOptionPane.showInputDialog ("Masukkan namamu");
        JOptionPane.showMessageDialog (null, "Halo " + nama);

        int umur = Integer.parseInt (JOptionPane.showInputDialog("Masukkan umurmu"));
        JOptionPane.showMessageDialog (null, "Umurmu " + umur + " tahun");
    
        double tinggi = Double.parseDouble (JOptionPane.showInputDialog("Masukkan tinggi badanmu"));
        JOptionPane.showMessageDialog (null, "Tinggi badanmu " + tinggi + " cm");
    }
}