<form action = "13. Associative Array.php" method = "post">
    <label>Masukkan nama negara</label>
    <input type = "text" name = "negara">
    <input type = "submit"><br>
</form>

<?php

    // associative array = array yang dibuat dari '=>'

    $ibukota = array ('USA' => 'Washington D.C.',
                      'Jepang' => 'Kyoto',
                      'Korea Selatan' => 'Seoul',
                      'India' => 'New Delhi');

    /*
        function
        array_keys ($ibukota);
        array_value ($ibukota);
        array_flip ($ibukota);
    */

    $negara = $ibukota [$_POST ["negara"]];
    echo "Ibukotanya adalah $negara";
?>