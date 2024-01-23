<?php
    
    /*
        if statement = melakukan sesuatu jika kondisinya benar
        else if      = melakukan sesuatu jika kondisi if salah
        else         = melakukan sesuatu jika kondisi if-else if salah
    */
    
    $umur = 0;

    if ($umur >= 18)
        echo "Kamu bisa masuk ke situs ini\n";
    elseif ($umur == 0)
        echo "Kamu baru saja lahir\n";
    else
        echo "Usiamu minimal harus 18+ untuk masuk\n";
?>