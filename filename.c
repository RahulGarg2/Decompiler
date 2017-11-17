mov;r0;#0;
$LABEL$;loop;
add;r0;r0;#1;
cmp;r0;#10;
blt;loop;
swi;0x11;
