<!DOCTYPE html>
<html lang = "en">
<head>
    <meta charset = "UTF-8">
    <meta name = "viewport" content = "width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action = "06. Math Function.php" method = "post"></form>
    <label>x:</label>
    <input type = "text" name = "x"><br><br>
    <input type = "submit" value = "total">
</body>
</html>

<?php
    $x = $_POST ["x"];
    // $total = abs ($x);
    // $total = round ($x);
    // $total = floor ($x);
    // $total = ceil ($x);
    // $total = sqrt ($x);
    // $total = pow ($x, $y);
    // $total = max ($x, $y, $z);
    // $total = min ($x, $y, $z);
    // $total = pi ();
    $total = rand (1, 100);

    echo $total;
?>