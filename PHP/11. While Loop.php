<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="11. While Loop.php" method = "post">
        <label>Hitung mulai dari</label>
        <input type="number" name = "angka"><br>
        <input type="submit" value = "start" name ="start">
        <input type="submit" value = "stop" name ="stop">
    </form>
</body>
</html>

<?php

/*
    while loop = perulangan blok kode dengan batasan tak tertentu
                 berlaku selama kondisinya benar
*/

    $angka = $_POST ["angka"];
    $status = false;

    if (isset ($_POST ["start"]))
    {
        $status = true;
        while ($status)
            echo "$angka\n";
    }
    if (isset ($_POST ["stop"]))
        $status = false;
?>