//#pragma warning(disable : 4996)
////Cpp Basics - Strings
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
////[3] Usage of some string functions
//
//// this function returns floating point part of a number-string
//string returnFloatingPart(string str)
//{
//    int pos = str.find(".");
//    if (pos == string::npos)
//        return "";
//    else
//        return str.substr(pos + 1);
//}
//
//// This function checks whether a string contains all digit or not
//bool containsOnlyDigit(string str)
//{
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str.at(i) < '0' || str.at(i) > '9')
//            return false;
//    }
//    //  if we reach here all character are digits
//    return true;
//}
//
//// this function replaces all single space by %20
//// Used in URLS
//string replaceBlankWith20(string str)
//{
//    string replaceby = "%20";
//    int n = 0;
//
//    // loop till all space are replaced
//    while ((n = str.find(" ", n)) != string::npos)
//    {
//        str.replace(n, 1, replaceby);
//        n += replaceby.length();
//    }
//    return str;
//}
//
//
//
//
//
//
//
//int main()
//{
//    //[1] Various Constructors of String Class
//
//   //Initialization by raw string
//    string str1("First String");
//
//    //Initialization by another string
//    string str2(str1);
//
//    //Initialization by character with number of occurrence
//    string str3(5, '#');
//
//    //Initialization by part of another string
//    string str4(str1, 6, 6); //from 6th index (second parameter), 6 characters (third parameter)
//
//    //Initialization by part of another string : iterator version
//    string str5(str2.begin(), str2.begin() + 5);
//
//    cout <<"Initialization by raw string: "<< str1 << endl;
//    cout << "Initialization by Another String: " << str2 << endl;
//    cout << "Initialization by Character with Number of Occurrence: " << str3 << endl;
//    cout << "Initialization by Part of Another String: " << str4 << endl;
//    cout << "Initialization by Part of Another String : Iterator Version: " << str5 << endl;
//
//
//    //[2] Other Operations
//
//    //assignment operator
//    string str6 = str4;
//
//    // clear function deletes all character from string
//    str4.clear();
//
//    //  both size() and length() return length of string and they work as synonyms
//    int len = str6.length(); // Same as "len = str6.size();"
//    cout << "(.length() usage) Length of String is : " << len << endl;
//
//
//    // a particular character can be accessed using at [] operator
//    char ch = str6.at(2); //  Same as "ch = str6[2];"
//    cout << "(.at() usage) Third Character of String is : " << ch << endl;
//
//
//    //  front return first character and back returns last character of string
//    char ch_f = str6.front();  // Same as "ch_f = str6[0];"
//    char ch_b = str6.back();   // Same as "ch_b = str6[str6.length() - 1];"
//    cout << "(.front() usage) First char is : " << ch_f << ", (.back() usage) Last char is : "<< ch_b << endl;
//
//    
//    // c_str returns null terminated char array version of string
//    const char* charstr = str6.c_str();
//    printf("(.c_str() usage) : %s\n", charstr);
//
//
//    // append add the argument string at the end
//    str6.append(" extension");//same as str6 += " extension"
//
//
//    // another version of append, which appends part of other string
//    str4.append(str6, 0, 6);  // at 0th position 6 character
//    cout <<" (.append() usage 1) "<< str6 << endl;
//    cout <<" (.append() usage 2) "<< str4 << endl;
//
//
//    //  find returns index where pattern is found.
//    //If pattern is not there it returns predefined
//    //  constant npos whose value is -1
//    if (str6.find(str4) != string::npos)
//        cout << "(.find() usage) str4 found in str6 at " << str6.find(str4)
//        << " pos" << endl;
//    else
//        cout << "str4 not found in str6" << endl;
//    
//
//
//    //  substr(a, b) function returns a substring of b length starting from index a
//    cout << str6.substr(7, 3) << endl;
//
//
//    //  if second argument is not passed, string till end is taken as substring
//    cout << str6.substr(7) << endl;
//
//
//    //  erase(a, b) deletes b characters at index a
//    str6.erase(7, 4);
//    cout << str6 << endl;
//
//
//    //  iterator version of erase
//    str6.erase(str6.begin() + 5, str6.end() - 3);
//    cout << str6 << endl;
//
//
//    str6 = "This is a examples";
//    //  replace(a, b, str)  replaces b characters from a index by str
//    str6.replace(2, 7, "ese are test");
//    cout << str6 << endl;
//
//
//
//    //[3] Usage of some string functions
//
//    string fnum = "23.342";
//    cout << "Floating part is : " << returnFloatingPart(fnum)
//        << endl;
//
//    string num3 = "3452";
//    if (containsOnlyDigit(num3))
//        cout << "string contains only digit" << endl;
//
//    string urlex3 = "google com in";
//    cout << replaceBlankWith20(urlex3) << endl;
//}