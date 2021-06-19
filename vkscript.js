<!-- Begin
var out = " ";
var deb = 0;
var fin = 0;
var out="";
var max=0;
var x=0;

function textlist() {
max=textlist.arguments.length;
for (i=0; i<max; i++)
this[i]=textlist.arguments[i];
x = 0;
}


var txtl = new textlist("Get Free Source Code , Softwares and Games..","I can tell that you want me.    :-)"," Yes, I want you to leave.","I Need Some Help provide me more webspace.....vinod","does that really say 'beat detection'?  rawr!  I know i will like it here...","dsfdsfsfs","i am chung from vietnam","Hey all peeps from New Zealand","can you tell me how to write in harddisk through c programming ....Peter","Hi !! I need good resources on VB API programming !! thanks !!","How are you?.....Nishi,Bhopal","open source code","hi i am from US i want to know how to copy files in DOS ......Maria","patrick philip rodriguez sanchez will marry sheila marie imasa","What is THE ONE...The Pandey","hello there from asia","hay i serch about books OOPS","asfa sfsaf asfsfsafasf sfasf","Need yr help to promote this site .....vin","Author : Vinod Kotiya","email: vinodkotiya@yahoo.com  cell:+91-9827394994","Welcome to http://vinodkotiya.tripod.com","Please send your articles , jokes , comments by mail..","your idea will be published on this site","is there any project in c++ ...Twai","I want to publish my source code in your site ...Mark","Ideal Resolution 1024X768 to view this site","I'd go through anything for you.:-)"," Let's start with your bank account.","Haven't I seen you someplace before?   :-)   ","   Yeah, that's why I don't go there anymore.","WEB COMPILER:Select the santance and click any menu,coding will be done automatically","I want to give myself to you.   :-)"," Sorry, I don't accept cheap gifts."," I would go to the end of the world for you.  :-)"," Yes, but would you stay there?   ");
var txt;

function scroll_text() {
txt = txtl[x];//if(fin > txt.length) { deb=0; fin=0; }
out = txt.substring(deb,fin)
if(fin == txt.length) { to=1500; x++; deb=0; fin=0; } else { to=70; out = out + "_"; }
if(x>=max) { x=0; }
document.defil.msg.value = out;
fin++;
setTimeout('scroll_text(txt)',to)
}
// End -->
