<form action="15. Radio Button.php" method = "post">
    <input type = "radio" name = "kartu_kredit" value = "Visa">Visa<br>
    <input type = "radio" name = "kartu_kredit" value = "Mastercard">Mastercard<br>
    <input type = "radio" name = "kartu_kredit" value = "American Express">American Express<br>
    <input type = "submit" name = "submit" value = "submit">
</form>

<?php

    if (isset ($_POST ["submit"]))
    {
        if (isset ($_POST ["kartu_kredit"]))
        {
            $kartu_kredit = $_POST ["kartu_kredit"];
            switch ($kartu_kredit)
            {
                case "Visa":
                    echo "Kamu memilih Visa";
                    break;
                case "Mastercard":
                    echo "Kamu memilih Mastercard";
                    break;
                case "American Express":
                    echo "Kamu memilih American Express";
                    break;
            }
        }
        else echo "Pilih salah satu";
    }

?>