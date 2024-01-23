<form action = "" method = "post">
    <label>username: </label><br>
    <input type = "text" name = "username"><br>
    <label>password: </label><br>
    <input type = "password" name = "password"><br>
    <input type = "submit" value = "log in" name = "login"><br>
</form>

<?php

    /*
        isset () = true jika variabel ada nilainya (bukan null)
        empty () = true jika variabel null (tidak ada nilainya)
    */

    if (isset ($_POST ["login"]))
    {
        $username = $_POST ["username"];
        $password = $_POST ["password"];

        if (empty ($username))
            echo "Username tidak ada";
        elseif (empty ($password))
            echo "Password tidak ada";
        else
            echo "Halo $username";
    }
?>