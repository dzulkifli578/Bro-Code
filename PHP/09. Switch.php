<?php

    // switch = alternatif if statement jika punya kondisi berturut-turut

    $peringkat = "A";
    
    switch ($peringkat)
    {
        case "A":
            echo "Kamu melakukannya dengan sangat baik\n";
            break;
        case "B":
            echo "Kamu melakukannya dengan baik\n";
            break;
        case "C":
            echo "Kamu melakukannya dengan cukup baik\n";
            break;
        case "D":
            echo "Kamu melakukannya dengan buruk\n";
            break;
        case "D":
            echo "Kamu melakukannya dengan sangat buruk\n";
            break;
        default:
            echo "{$peringkat} tidak valid\n";
    }
?>