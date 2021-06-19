#!/usr/bin/perl
#
# counter.cgi - A simple visitor counter
#
# amcf@esoterica.pt, March 96

# Place the file in a directory which the web server can access 
$count_file="/somewhere/count_file";

open(CFILE, $count_file);
@counts=<CFILE>;
close(CFILE);

$doc=$ENV{'DOCUMENT_URI'};    # HTTP_REFERER works for CERN server

# If it was called from the command line consider it an experience 
if ($doc eq "") { $doc = "experience" };

# Aliases for the Homepage
if ($doc eq "/index.html") { $doc = "/" } 

# Read the count file, pick the correct entry and increment it 
$found = 0;
for $line (@counts) {
    chop ($line);
    ($page,$count)=split(/ /, $line);
    $page=~s/'//g;
    if ($page eq $doc)
    {
        $count++;
        $found = 1;
        $line = "'$page' $count";
        $found_count = $count;
    }
    push (@newcount, $line);
}
if ($found == 1) {
    $count = $found_count
} else {
    $count = 1;
    push (@newcount, "'$doc' 1"); 
}
@newcount=sort(@newcount);

# Updates the count file
open (CFILE, ">$count_file");
flock(CFILE, 2);    # lock
for $line (@newcount) { print CFILE "$line\n"; }
flock(CFILE, 8);    # unlock
close CFILE;
print "Content-Type: text/html\n\n";
print "$count";

### End of counter.cgi ### 
