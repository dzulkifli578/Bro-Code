<?php

    function identitas ($nama, $umur, $tinggi_badan, $alamat)
    {
        echo "Nama          : {$nama}".PHP_EOL;
        echo "Umur          : {$umur} tahun".PHP_EOL;
        echo "Tinggi badan  : {$tinggi_badan}".PHP_EOL;
        echo "Alamat        : {$alamat}".PHP_EOL;
    }

    identitas ("Dzulkifli Anwar", 17, 170.5, "Masgar")
?>