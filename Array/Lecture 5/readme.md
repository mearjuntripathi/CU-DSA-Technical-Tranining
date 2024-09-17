# Lecture Day 5

## Question 1a:

Write a program that converts a 10-digit mobile number into words. If a digit appears consecutively, the program should describe it using "double", "triple", etc., as appropriate.

**Input:**
- A string `number` representing a 10-digit mobile number.

**Output:**
- A string where each digit of the mobile number is converted into words, with consecutive repetitions described using "double", "triple", etc. If the input is not a valid 10-digit number, the output should indicate that the number is not valid.

**Example 1:**
```
Input: "8887135277"
Output: "triple eight seven one three five two double seven"
```

**Example 2:**
```
Input: "9988886000"
Output: "double nine triple eight eight six triple zero"
```

**Example 3:**
```
Input: "12345"
Output: "not a valid number"
```

## Solution

### Intuition and Approach

**Intuition:**

The problem is to convert a 10-digit mobile phone number into a textual representation where consecutive digits are expressed in words like "twice" or "triple" to indicate their frequency. The solution involves breaking down the number into segments of repeated digits and converting these segments into readable text.

**Approach:**

1. **Input Validation:**
   - Ensure that the input string `number` has exactly 10 digits. If not, return "not a valid number".

2. **String Conversion:**
   - Traverse the string and keep track of the current digit and its count.
   - Whenever the digit changes, convert the count and digit into its textual representation:
     - "triple" for three consecutive digits.
     - "twice" for two consecutive digits.
   - Append the textual representation of the digit itself.

3. **Handling Edge Cases:**
   - If a digit count reaches three, handle this immediately by appending "triple" and resetting the count.
   - At the end of the string, ensure the last segment is also processed.

### Brute Force Solution

The brute force solution will involve checking each digit and its frequency in the number, appending the corresponding text based on the frequency.

**Pseudo Code:**

```plaintext
FUNCTION stringNumber(val: INTEGER) RETURNS STRING:
    INITIALIZE numbers AS ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    RETURN numbers[val]

FUNCTION numberToText(number: STRING) RETURNS STRING:
    IF LENGTH(number) != 10:
        RETURN "not a valid number"

    INITIALIZE term = 1
    INITIALIZE value = number[0]
    INITIALIZE strNumber = ""

    FOR i FROM 1 TO LENGTH(number) - 1:
        IF number[i] == value:
            term = term + 1
        ELSE:
            IF term == 3:
                strNumber = strNumber + "triple "
            ELSE IF term == 2:
                strNumber = strNumber + "twice "
            strNumber = strNumber + stringNumber(CHAR_TO_INT(value)) + ' '
            term = 1
            value = number[i]

        IF term == 3:
            strNumber = strNumber + "triple "
            strNumber = strNumber + stringNumber(CHAR_TO_INT(value)) + ' '
            term = 1
            value = number[++i]

    IF term == 3:
        strNumber = strNumber + "triple "
    ELSE IF term == 2:
        strNumber = strNumber + "twice "
    strNumber = strNumber + stringNumber(CHAR_TO_INT(value)) + ' '

    RETURN strNumber

FUNCTION main() RETURNS VOID:
    INITIALIZE number AS STRING
    READ number
    PRINT "Your mobile Number is: " + numberToText(number)
```

## Question 1b:

Write a program that converts a string representation of a mobile number (where digits are described in words and consecutive repetitions are described using "double", "triple", etc.) back into a 10-digit number. 

**Input:**
- A string `words` representing the mobile number in words.

**Output:**
- A string representing the 10-digit mobile number. If the input string does not correctly represent a valid 10-digit number, the output should indicate that the input is not valid.

**Example 1:**
```
Input: "triple eight seven one three five two double seven"
Output: "8887135277"
```

**Example 2:**
```
Input: "double nine triple eight eight six triple zero"
Output: "9988886000"
```

**Example 3:**
```
Input: "nine eight seven"
Output: "not a valid number"
```

## Solution

### Intuition and Approach

**Intuition:**

The goal is to convert a textual representation of a phone number back into its numeric form. The text might include words like "triple" or "double" to indicate repeated digits, as well as individual digit names. The task involves interpreting these words and reconstructing the original number from them.

**Approach:**

1. **Parsing Input:**
   - Split the input string into segments based on spaces. Each segment will either be a digit word (e.g., "seven") or a descriptor word (e.g., "triple", "double").

2. **Processing Segments:**
   - Use a loop to process each segment:
     - If the segment is a descriptor word (e.g., "triple", "double"), set the repetition count (`time`) based on the descriptor.
     - If the segment is a digit word, convert it to its numeric form using a predefined mapping and repeat it according to the last `time` value.

3. **Reconstruction:**
   - Construct the numeric string by appending the digits in the correct sequence as determined by the descriptors.

4. **Validation:**
   - After reconstruction, check if the length of the numeric string is exactly 10 digits. If not, return "not a valid number".

### Pseudo Code

```plaintext
FUNCTION numberString(val: STRING) RETURNS CHAR:
    IF val == "zero" RETURN '0'
    IF val == "one" RETURN '1'
    IF val == "two" RETURN '2'
    IF val == "three" RETURN '3'
    IF val == "four" RETURN '4'
    IF val == "five" RETURN '5'
    IF val == "six" RETURN '6'
    IF val == "seven" RETURN '7'
    IF val == "eight" RETURN '8'
    IF val == "nine" RETURN '9'
    RETURN -1

FUNCTION textToNumber(strNumber: STRING) RETURNS STRING:
    INITIALIZE time = 1
    INITIALIZE number = ""
    INITIALIZE num = ""
    INITIALIZE n = LENGTH(strNumber)

    FOR i FROM 0 TO n:
        IF strNumber[i] == ' ' OR i == n:
            IF num == "triple":
                time = 3
            ELSE IF num == "double":
                time = 2
            ELSE:
                WHILE time > 0:
                    number += numberString(num)
                    time = time - 1
                time = 1
            num = ""
        ELSE:
            num += strNumber[i]

    IF LENGTH(number) < 10 OR LENGTH(number) > 10:
        RETURN "not a valid number"

    RETURN number

FUNCTION main() RETURNS VOID:
    INITIALIZE strNumber AS STRING

    SET strNumber TO "triple eight seven one three five two double seven"
    PRINT "Your mobile number is: " + textToNumber(strNumber)

    SET strNumber TO "double nine triple eight eight six triple zero"
    PRINT "Your mobile number is: " + textToNumber(strNumber)

    SET strNumber TO "nine eight seven"
    PRINT "Your mobile number is: " + textToNumber(strNumber)
```

### Explanation:

1. **`numberString(val)`**: This function maps textual representations of digits to their numeric form.
2. **`textToNumber(strNumber)`**: This function processes the input string by:
   - Parsing the input into segments.
   - Interpreting descriptor words to determine how many times to repeat the next digit.
   - Reconstructing the numeric phone number based on these segments.
   - Validating the length of the resulting number to ensure it's a 10-digit phone number.
3. **`main()`**: Handles input and output, demonstrating the conversion of textual representations of phone numbers into numeric form.