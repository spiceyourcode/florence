#!/usr/bin/perl
# Script: sample.pl – Shows the use of variables
#
print(“Enter your name: “);
$name=<STDIN>;
Print(“Enter a temperature in Centigrade: “);
$centigrade=<STDIN>;
$fahr=$centigrade*9/5 + 32;
print “The temperature in Fahrenheit is $fahr\n”;
print “Thank you $name for using this program.”