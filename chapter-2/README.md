***
> **CHAPTER - 2**

> **EXPRESSION AND FUNCTIOS.**
***
- **SPECIAL ASSIGNMENT EXPRESSIONS.**

  **TYPE OF SPECIAL ASSIGNMENT EXPRESSIONS.**
   
   **1. Chained expressions.**
            
            #include<iostream>
            using namespace std;
            int main(){
               //chained.
                int a,b,c; 
                a=b=c=15;
                cout << "a :"<< endl
                     << "b :"<< endl
                     << "c :"<< endl;
            }
   **2. Embeded expressions.**

          #include<iostream>
            using namespace std;
            int main(){
               //Embeded.
                int a=10,b,c,d; 
                d=a+(b=5)+(c+15);
                cout << "d :"<< endl
            }
   **3. Compound assign expressions.**

   It's means combined or assignments operator.(+= , -= , *= , /= , %=) 
      
- **REFERENCE VARIABLES.**
    
    Upgraded Pointer.
    Using address of operator(&).
    Reference variable must be initilized.

- **FUNCTION PROTOTYPING.**

   It's means pre declaration.
   
- **INLINE KEYWORD.**

    It boosts performance speed by exchanging function's body while calling.
 
 ***
> **TASK OF CHAPTER 2.**

<u>**Aim 1**</u> : Write a program to find factorial of all elements from given array using inline function.
 
<u>**Program File**</u> : ch-2-1.cpp

<u>**Output**</u> :

<img src="https://github.com/jb-jaydeep/Cpp/blob/main/chapter-2/image/ch-2-1.png" height = "200px" alt = "unable to load image.">

<u>**Aim 2**</u> : Write a program to create a basic calculator with +, -, *, /and % operations using switch case and UDF. Add never ending functionality using loop.

<u>**Program File**</u> : ch-2-2.cpp

<u>**Output**</u> :

<img src="https://github.com/jb-jaydeep/Cpp/blob/main/chapter-2/image/ch-2-2.png" height = "200px" alt = "unable to load image.">
