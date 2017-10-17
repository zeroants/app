<?php
$z[0]=Array("arcurl","",48,64);
$z[1]=Array("title","",89,104);
$z[2]=Array("title","",106,149);
$z[2][4]['function']="cn_substr(@me,36)";
$z[3]=Array("pubdate","  \r\n\$a=\"<font color='#ff0000'>\";  \r\n\$d=\"<font color='#858585'>\";  \r\n\$b=\"</font>\";  \r\n\$c=strftime(\"%m-%d\",\"@me\");  \r\n\$ntime = time();  \r\n\$oneday = 3600 * 24;  \r\nif((\$ntime - @me)<\$oneday) @me = \$a.\$c.\$b;  \r\nelse @me = \$d.\$c.\$b;  \r\n",241,515);
$z[3][4]['runphp']="yes";

?>