Besides using the given test file, which tested all of the constructors and methods, 
including: 
-a default constructor, which also tested the length and toString methods (str1)
-a char* constructor, which again tested length and toString methods (str2)
-a constructor, str3, which took a previously made string as its argument, str2
-a substring, str4, of str2, with 1,4 and then 1,1, which gave an empty string
-then setting the substring as 0,str2.length() and so it is all of str2
and when it is set as a substring with 0,str2.length()+1 it is an out of bounds error, as expected
and when it is -1,str2.length() or 1,0 it threw an error, as expected
-the overloaded == operator was tested with str1, str2, and str3 where str1!=str2, 
str2==str2 and str2==str3, which worked as expected. It also checked if it worked with the substring method
within, and it did
-the overloaded = operator was tested by setting str1 to str2, and setting str3=to a substring of the new str1
-the overloaded += operator, which created a str5 and then += onto str1 and then created a str6
and an str7 and added those together using substrings within as well.
We also tested substring with two negatives and an empty string, both of which returned errors as expected.
We ran into only the expected errors and achieved all of the expected results.