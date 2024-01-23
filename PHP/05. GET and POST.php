<form action = "" method = "post">
    <label>Nama Lengkap:</label><br>
    <input type = "text" name = "nama_lengkap"><br><br>
    <label>Kelas:</label><br>
    <input type = "text" name = "kelas"><br><br>
    <label>Umur</label><br>
    <input type = "number" name = "umur"><br><br>
    <input type = "submit" name = "submit" value = "masuk"><br><br>
</form>


<?php
    /*
        $_GET & $_POST = variabel spesial untuk mengumpulkan data dari form HTML
                         data dikirim ke file di action attribute dari tag <form>
                         <form action = "file.php" method = "get">

        $_GET          = data ditambahkan ke url
                         tidak aman
                         terdapat pembatasan data
                         bookmark dimungkinkan dengan atau tanpa nilai
                         dapat di-cache
                         cocok untul halaman pencari
        
        $_POST         = data dikemas di dalam tubuh permintaan HTTP
                         lebih aman
                         tidak ada pembatasan data
                         tidak bisa bookmark
                         tidak di-cache
                         cocok untuk mengirimkan kredensial
    */

    if (isset ($_POST ["submit"]))
    {
        echo "Halo {$_POST ["nama_lengkap"]} <br>";
        echo "Kamu dari kelas {$_POST ["kelas"]} <br>";
        echo "Umurmu {$_POST ["umur"]} tahun";
    }
?>