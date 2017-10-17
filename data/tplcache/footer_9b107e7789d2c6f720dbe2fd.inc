<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>            <!--         Footer   -->
            <footer data-role="footer" data-theme="a" data-position="inline">
                <hr class="divider" />
                <h4>Follow me on</h4>
                <div class="ui-grid-c wrappedWidth shareIcons">
                    <div class="ui-block-a"><a href="#"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/lightGreen/fb.png" alt="Facebook" /></a></div>
                    <div class="ui-block-b"><a href="#"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/lightGreen/digg.png" alt="Digg" /></a></div>
                    <div class="ui-block-c"><a href="#"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/lightGreen/twitter.png" alt="Twitter" /></a></div>
                    <div class="ui-block-d"><a href="#"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/lightGreen/rss.png" alt="RSS" /></a></div>
                </div>

                <h4>Text Widget</h4>
                <p>Dit augue est, elementum id commodo sit amet, pellentesque vel mi.
                    Nulla eu ante id ligula posuere pellentesque. Vivamus rhoncus mattis tellus
                    vitae pretium. Vestibulum ullamcorper congue nisl eget suscipit. Aenean feugiat odio 
                    a velit scelerisque consequat. Fusce congue ipsum quis felis condimentum auctor tincidunt 
                    erat scelerisque. Vestibulum ante ipsum <a href="#">primis in faucibus</a> orci luctus et ultrices posuere 
                    cubilia Curae; Nullam purus eros, consequat in blandit non, adipiscing ut ipsum. In eu diam 
                    lorem. 
                </p>

                <nav class="ui-grid-c">
                    <div class="ui-block-a"><a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/" data-transition="flip">Home</a></div>
                    <?php
$atts = array();
$atts['tagname'] = 'channel';
$atts['type'] = 'top';
$atts['row'] = '10';
$atts['currentstyle'] = '~typename~';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                    <div class="ui-block-b"><a href='[field:typeurl/]' [field:rel/] data-transition="flip">[field:typename/]</a></div>
                    <?php
}
}
?>  
                </nav>
           
            </footer>   
            <!--  Footer     END  -->