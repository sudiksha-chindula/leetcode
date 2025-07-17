# problems

This folder contains solutions to all the leetcode questions I attempt daily. Every 10-15 days, I revisit the problems solved and try to do them from memory again for practice. Following are the questions for reference (although navigating through leetcode would probably be easier).

## 1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

> Input: nums = [2,7,11,15], target = 9
> Output: [0,1]
> Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

> Input: nums = [3,2,4], target = 6
> Output: [1,2]

Example 3:

> Input: nums = [3,3], target = 6
> Output: [0,1]
 

Constraints:

* 2 <= nums.length <= 104
* -109 <= nums[i] <= 109
* -109 <= target <= 109
* Only one valid answer exists.

## 2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1: 

![question](./images/addtwonumber1.jpg)

> Input: l1 = [2,4,3], l2 = [5,6,4]
> Output: [7,0,8]
> Explanation: 342 + 465 = 807.

Example 2:

> Input: l1 = [0], l2 = [0]
> Output: [0]

Example 3:

> Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
> Output: [8,9,9,9,0,0,0,1]
 

Constraints:

* The number of nodes in each linked list is in the range [1, 100].
* 0 <= Node.val <= 9
* It is guaranteed that the list represents a number that does not have leading zeros.

## 3. Longest Substring without Repeating Characters

Given a string s, find the length of the longest substring without duplicate characters.

Example 1:

> Input: s = "abcabcbb"
> Output: 3
> Explanation: The answer is "abc", with the length of 3.

Example 2:

> Input: s = "bbbbb"
> Output: 1
> Explanation: The answer is "b", with the length of 1.

Example 3:

> Input: s = "pwwkew"
> Output: 3
> Explanation: The answer is "wke", with the length of 3.
> Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

* 0 <= s.length <= 5 * 104
* s consists of English letters, digits, symbols and spaces.

## 4. Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

> Input: nums1 = [1,3], nums2 = [2]
> Output: 2.00000
> Explanation: merged array = [1,2,3] and median is 2.

Example 2:

> Input: nums1 = [1,2], nums2 = [3,4]
> Output: 2.50000
> Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

* nums1.length == m
* nums2.length == n
* 0 <= m <= 1000
* 0 <= n <= 1000
* 1 <= m + n <= 2000
* -106 <= nums1[i], nums2[i] <= 106

## 5. Longest Palindromic Substring 

Given a string s, return the longest palindromic substring in s.

Example 1:

> Input: s = "babad"
> Output: "bab"
> Explanation: "aba" is also a valid answer.

Example 2:

> Input: s = "cbbd"
> Output: "bb"
 

Constraints:

* 1 <= s.length <= 1000
* s consist of only digits and English letters.

## 6. Zigzag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N\
A P L S I I G\
Y   I   R\
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

> Input: s = "PAYPALISHIRING", numRows = 3
> Output: "PAHNAPLSIIGYIR"

Example 2:

> Input: s = "PAYPALISHIRING", numRows = 4
> Output: "PINALSIGYAHRPI"
> Explanation:\
> P     I    N\
> A   L S  I G\
> Y A   H R\
> P     I\

Example 3:

> Input: s = "A", numRows = 1
> Output: "A"
 

Constraints:

* 1 <= s.length <= 1000
* s consists of English letters (lower-case and upper-case), ',' and '.'.
* 1 <= numRows <= 1000

## 7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

> Input: x = 123
> Output: 321

Example 2:

> Input: x = -123
> Output: -321

Example 3:

> Input: x = 120
> Output: 21
 

Constraints:

* -231 <= x <= 231 - 1

## 8. String to Integer (atoi)

Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

Whitespace: Ignore any leading whitespace (" ").
Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
Return the integer as the final result.

 

Example 1:

> Input: s = "42"

> Output: 42

> Explanation:

> The underlined characters are what is read in and the caret is the current reader position.
> Step 1: "42" (no characters read because there is no leading whitespace)
         ^
> Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
> Step 3: "42" ("42" is read in)

Example 2:

> Input: s = " -042"

> Output: -42

> Explanation:

> Step 1: "   -042" (leading whitespace is read and ignored)
            ^
> Step 2: "   -042" ('-' is read, so the result should be negative)
             ^
> Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)

Example 3:

> Input: s = "1337c0d3"

> Output: 1337

> Explanation:

> Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
         ^
> Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
         ^
> Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)

Example 4:

> Input: s = "0-1"

> Output: 0

> Explanation:

> Step 1: "0-1" (no characters read because there is no leading whitespace)
         ^
> Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
         ^
> Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)

Example 5:

> Input: s = "words and 987"

> Output: 0

> Explanation:

> Reading stops at the first non-digit character 'w'.

 

Constraints:

* 0 <= s.length <= 200
* s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.

## 9. Palindrome Number

Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

> Input: x = 121\
> Output: true\
> Explanation: 121 reads as 121 from left to right and from right to left.\

Example 2:

> Input: x = -121\
> Output: false\
> Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.\

Example 3:

> Input: x = 10\
> Output: false\
> Explanation: Reads 01 from right to left. Therefore it is not a palindrome.\
 

Constraints:

* -231 <= x <= 231 - 1

## 10. Regular Expression Matching

Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).


Example 1:

> Input: s = "aa", p = "a"
> Output: false
> Explanation: "a" does not match the entire string "aa".

Example 2:

> Input: s = "aa", p = "a*"
> Output: true
> Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

Example 3:

> Input: s = "ab", p = ".*"
> Output: true
> Explanation: ".*" means "zero or more (*) of any character (.)".
 

Constraints:

* 1 <= s.length <= 20
* 1 <= p.length <= 20
* s contains only lowercase English letters.
* p contains only lowercase English letters, '.', and '*'.
* It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.

## 11. Container with Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Example 1:

> Input: height = [1,8,6,2,5,4,8,3,7]\
> Output: 49\
> Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

> Input: height = [1,1]\
> Output: 1
 

Constraints:

* n == height.length\
* 2 <= n <= 105\
* 0 <= height[i] <= 104\

## 12. Integer to Roman

Seven different symbols represent Roman numerals with the following values:

Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000
Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:

If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.
Given an integer, convert it to a Roman numeral.

Example 1:

> Input: num = 3749\
> Output: "MMMDCCXLIX"

> Explanation:

> 3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)\
> 700 = DCC as 500 (D) + 100 (C) + 100 (C)\
>  40 = XL as 10 (X) less of 50 (L)\
>   9 = IX as 1 (I) less of 10 (X)\
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places

Example 2:

> Input: num = 58\
> Output: "LVIII"\

> Explanation:
> 50 = L\
> 8 = VIII\

Example 3:

> Input: num = 1994\

> Output: "MCMXCIV"\

> Explanation:

> 1000 = M\
> 900 = CM\
>  90 = XC\
>   4 = IV\
 

Constraints:

* 1 <= num <= 3999

## 13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

>Input: s = "III"
>Output: 3
>Explanation: III = 3.

Example 2:

>Input: s = "LVIII"
>Output: 58
>Explanation: L = 50, V= 5, III = 3.

Example 3:

>Input: s = "MCMXCIV"
>Output: 1994
>Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

* 1 <= s.length <= 15
* s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
* It is guaranteed that s is a valid roman numeral in the range [1, 3999].

## 14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

>Input: strs = ["flower","flow","flight"]
>Output: "fl"

Example 2:

>Input: strs = ["dog","racecar","car"]
>Output: ""
>Explanation: There is no common prefix among the input strings.
 

Constraints:

* 1 <= strs.length <= 200
* 0 <= strs[i].length <= 200
* strs[i] consists of only lowercase English letters if it is non-empty.

## 15. 3Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

> Input: nums = [-1,0,1,2,-1,-4]
> Output: [[-1,-1,2],[-1,0,1]]
> Explanation: 
> nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
> nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
> nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
> The distinct triplets are [-1,0,1] and [-1,-1,2].
> Notice that the order of the output and the order of the triplets does not matter.

Example 2:

> Input: nums = [0,1,1]
> Output: []
> Explanation: The only possible triplet does not sum up to 0.

Example 3:

> Input: nums = [0,0,0]
> Output: [[0,0,0]]
> Explanation: The only possible triplet sums up to 0.
 

Constraints:

* 3 <= nums.length <= 3000
* -105 <= nums[i] <= 105