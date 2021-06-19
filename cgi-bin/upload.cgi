#!/usr/bin/perl -w 

 use CGI; 

 $upload_dir = "/upload"; 

 $query = new CGI; 

 $filename = $query->param("docs"); 
 $password = $query->param("passwrd"); 
 $filename =~ s/.*[\/\\](.*)/$1/; 
 $valid = "incorrect";

if ($password == "vinsoft")
 {
  $valid = "correct";
  $upload_filehandle = $query->upload("docs"); 

  open UPLOADFILE, ">$upload_dir/$filename"; 

  while ( <$upload_filehandle> ) 
   { 
    print UPLOADFILE; 
   } 

  close UPLOADFILE; 
 }

 print $query->header( ); 
 print <<END_HTML; 

 <HTML> 
 <HEAD> 
 <TITLE>Thanks!</TITLE> 
 </HEAD> 

 <BODY> 

 <P>Thanks for trying to uploading your file</P> 
 <P>Your password was $valid </P> 
 <P>Your file:</P> 
 <a href="/upload/$filename"> open </a> 

 </BODY> 
 </HTML> 

 END_HTML
