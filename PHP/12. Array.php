<?php

    /*
        array = variabel yang bisa menampung lebih dari 1 nilai

        function
        array_push ($Makanan, "silverqueen");
        array_pop ($Makanan);
        array_shift ($Makanan);
        array_reverse ($Makanan);
    */

    $Makanan = array ('mie goreng', 'nasi uduk', 'singkong goreng');

    echo 'Jumlah elemen array: ';
    echo count ($Makanan).PHP_EOL.PHP_EOL;

    $Makanan_terbalik = array_reverse ($Makanan);

    echo implode (" ", $Makanan) . PHP_EOL.PHP_EOL;

    echo implode (" ", $Makanan_terbalik);
?>