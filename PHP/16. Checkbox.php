<html lang = "en">
<head>
    <meta charset = "UTF-8">
    <meta name = "viewport" content = "width=device-width, initial-scale = 1.0">
    <title>Document</title>
</head>
<body>
    <form action="16. Checkbox.php" method = "post">
        <input type = "checkbox" name = "makanan[]" value = "Singkong Goreng">Singkong Goreng<br>
        <input type = "checkbox" name = "makanan[]" value = "Pisang Coklat">Pisang Coklat<br>
        <input type = "checkbox" name = "makanan[]" value = "Spaghetti">Spaghetti<br>
        <input type = "checkbox" name = "makanan[]" value = "Burger">Burger<br>
        <input type = "submit" name = "submit">
    </form>
</body>
</html>

<?php

    if (isset ($_POST ["submit"]))
    {
        if (isset ($_POST ["makanan"]))
        {
            $makanan = $_POST ["makanan"];
            foreach ($makanan as $nilai)
                echo "Kamu suka $nilai <br>";
        }
        else echo "Pilih minimal 1";
    }

?>