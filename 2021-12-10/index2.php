<!DOCTYPE html>
<html lang="en">
<head>
  <title>JavaScript Template</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" type="text/css" href="stilmall.css">
  <script>
function addera(nr1,nr2,summa)
{
  var nummer1 = document.getElementById(nr1).value;
  var number1 = Number(nummer1);
  var nummer2 = document.getElementById(nr2).value;
  var number2 = Number(nummer2);
  var summan = number1+number2;
  document.getElementById(summa).innerHTML = summan;
}

  </script>
</head>

<body>
    <input type="text" id="nr1"><br>
    <input type="text" id="nr2"><br>
    <input type="button" value="Addera" onclick="addera('nr1','nr2','summa');"><br>
    <div id="summa">Här summeras talen</div>


    <?php
    echo "My first PHP script!";
    ?>


</body>

</html>
