<li><p class="p1" style="width:210px;"><a href="[field:arcurl /]" target="_blank" title="[field:title /]">[field:title function='cn_substr(@me,36)'/]</a></p><span class="s1 color" style=" width:40px; *position:absolute; *margin-right:20px;">[field:pubdate runphp='yes']  
$a="<font color='#ff0000'>";  
$d="<font color='#858585'>";  
$b="</font>";  
$c=strftime("%m-%d","@me");  
$ntime = time();  
$oneday = 3600 * 24;  
if(($ntime - @me)<$oneday) @me = $a.$c.$b;  
else @me = $d.$c.$b;  
[/field:pubdate] </span></li>