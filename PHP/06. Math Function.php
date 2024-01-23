<form action = "06. Math Function.php" method = "post">
    <label>x:</label>
    <input type = "number" name = "x"><br><br>
    <input type = "submit" name = "submit" value = "total">
</form>
</body>
</html>

<?php
    $x = $_POST ["x"];
    
    /*
        nilai absolut
        $total = abs ($x);

        membulatkan bilangan
        $total = round ($x);

        membulatkan bilangan ke bawah
        $total = floor ($x);

        membulatkan bilangan ke atas
        $total = ceil ($x);

        akar kuadrat
        $total = sqrt ($x);

        perpangkatan
        $total = pow ($x, $y);

        nilai maksimal
        $total = max ($x, $y, $z);

        nilai minimal
        $total = min ($x, $y, $z);

        nilai pi
        $total = pi ();

        random
        $total = rand (1, 100);
    */
    if (isset ($_POST ["submit"]))

    echo $x;
?>