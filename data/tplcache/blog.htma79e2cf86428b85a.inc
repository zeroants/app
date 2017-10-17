<?php
$z[0]=Array("global","",444,476);
$z[0][4]['name']="cfg_templets_skin";
$z[1]=Array("global","",549,581);
$z[1][4]['name']="cfg_templets_skin";
$z[2]=Array("global","",835,867);
$z[2][4]['name']="cfg_templets_skin";
$z[3]=Array("global","",936,968);
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("include","",2043,2078);
$z[4][4]['filename']="head.htm";
$z[5]=Array("list"," \n                <article>\n                    <img class=\"mainIMG\" src=\"[field:litpic/]\" alt=\"Main Blog Image\" />\n                    <h2>[field:title/]</h2>\n                    <div class=\"article-wrapper\">\n                        <span class=\"date-info\">[field:pubdate function=\"GetDateTimeMK(@me)\"/] </span>\n                        <span class=\"comment-info\">[field:scores/]  Comments</span>\n                        <p>\n                            [field:description/]...\n                        </p>\n                        <hr />\n                        <a href=\"[field:arcurl/]\">Read more »</a>\n                    </div>\n                </article>\n                ",2464,3174);
$z[5][4]['pagesize']="6";
$z[6]=Array("list","\n    <li> [field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]\n     [<b>[field:typelink/]</b>] <a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a> <span class=\"info\"> <small>日期：</small>[field:pubdate function=\"GetDateTimeMK(@me)\"/] <small>点击：</small>[field:click/] <small>好评：</small>[field:scores/] </span>\n     <p class=\"intro\"> [field:description/]... </p>\n    </li>\n",3213,3746);
$z[6][4]['pagesize']="10";
$z[7]=Array("pagelist","",4182,4260);
$z[7][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[7][4]['listsize']="5";
$z[8]=Array("include","",4451,4488);
$z[8][4]['filename']="footer.htm";

?>