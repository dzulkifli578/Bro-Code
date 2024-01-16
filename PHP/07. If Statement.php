<?php
    
    /*
        if statement = jika kondisi benar, akan melakukan sesuatu
        else if      = jika kondisi if salah, akan melakukan sesuatu
        else         = jika kondisi elseif salah, akan melakukan sesuatu
    */
    
    $umur = 0;

    if ($umur >= 18)
        echo "Kamu bisa masuk ke situs ini\n";
    elseif ($umur == 0)
        echo "Kamu baru saja lahir\n";
    else
        echo "Usiamu minimal harus 18+ untuk masuk\n";
?>