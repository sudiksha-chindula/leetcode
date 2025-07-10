# problems

This folder contains solutions to all the leetcode questions I attempt daily. Every 10-15 days, I revisit the problems solved and try to do them from memory again for practice.

## Questions

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
           ^
Example 2:

> Input: s = " -042"

> Output: -42

Explanation:

> Step 1: "   -042" (leading whitespace is read and ignored)
            ^
> Step 2: "   -042" ('-' is read, so the result should be negative)
             ^
> Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
               ^
Example 3:

> Input: s = "1337c0d3"

> Output: 1337

> Explanation:

> Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
         ^
> Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
         ^
> Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)
             ^
Example 4:

> Input: s = "0-1"

> Output: 0

> Explanation:

> Step 1: "0-1" (no characters read because there is no leading whitespace)
         ^
> Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
         ^
> Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)
          ^
Example 5:

> Input: s = "words and 987"

> Output: 0

> Explanation:

> Reading stops at the first non-digit character 'w'.

 

Constraints:

* 0 <= s.length <= 200
* s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.