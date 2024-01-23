<?php

    /*
        operator logika = membandingkan 2 kondisi atau lebih

        &&              = true apabila semua kondisi benar
        ||              = true apabila setidaknya salah satu kondisi benar
        !               = true apabila kondisi salah
    */

    $suhu = 100;

    if ($suhu >= 0 && $suhu <= 30)
        echo "Cuaca sedang bagus\n";
    else
        echo "Cuaca sedang buruk\n";
?>