<?php

class Obj{}

$res = new Obj();
$res->text1 = "<pre>AJAX = Asynchronous JavaScript And XML.

AJAX is not a programming language.

AJAX just uses a combination of:

    A browser built-in XMLHttpRequest object (to request data from a web server)
    JavaScript and HTML DOM (to display or use the data)

AJAX is a misleading name. AJAX applications might use XML to transport data, but it is equally common to transport data as plain text or JSON text.
</pre>";

$res->text2 = "<h2><em>Change my text using AJAX</em></h2>";

$res->button1 = "<button type='button' onclick='changeDocBack()'>Change Content</button>";

$res->button2 = "<button type='button' onclick='changeDoc()'>Change Content</button>";

$my_JSON = json_encode($res);

echo $my_JSON;
?>