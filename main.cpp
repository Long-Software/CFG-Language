#include "lang.h"
int main() {
  //Usage of the language Part 1
  var x គឺ 2;
  var y គឺ 1;
  បញ្ជេញ វត្ថុ "-x = " វត្ថុ ដក x វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x = " វត្ថុ x វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "y = " វត្ថុ y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x + y = " វត្ថុ x បូក y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x - y = " វត្ថុ x ដក y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x * y = " វត្ថុ x គុណ y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x / y = " វត្ថុ x ចែក y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x % y = " វត្ថុ x ម៉ូឌីល y វត្ថុ ចុះបន្ទាត់;
  បញ្ជេញ វត្ថុ "x ^ y = " វត្ថុ ស្វ័យគុណ(x, y) វត្ថុ ចុះបន្ទាត់;
  //Usage of the language Part 2
  9 ធំជាង 5;   //true
  true មិនស្មេីរ false;  //true
  var num1 គឺ 5;    
  var num2 គឺ 5;
  num1 ស្មេីរ num2; //true
  //if and if/else
  បេី(x តូចជាង y){
      បញ្ជេញ វត្ថុ "x is less than y" វត្ថុ ចុះបន្ទាត់;
    }តែបេី(x ធំជាង y){
        បញ្ជេញ វត្ថុ "x is more than y" វត្ថុ ចុះបន្ទាត់;
    }
   //While Loop
   var i គឺ 0;
   ពេលដែល((i តូចជាង 5)){
    បញ្ជេញ វត្ថុ i;
    i តម្លេីង;
   }
   
   បញ្ជេញ វត្ថុ ចុះបន្ទាត់;

   //For loop
   var a គឺ 5;
   var b គឺ 0;
   សម្រាប់((b), (a), (b តម្លេីង)){
    បញ្ជេញ វត្ថុ b;
   } 

   បញ្ជេញ វត្ថុ ចុះបន្ទាត់;
 
 //Test Case 1: Find the age of someone using when they're born
 //Logic: 2024 minus The year they're born
 //Initialize the value
 var currentyear គឺ 2024;
 var birthyear គឺ 0;
 var age គឺ 0;

 //Ask for birthyear
 បញ្ជេញ វត្ថុ "Please enter your birth year: ";

 //Accept the birthyear
 បញ្ជូល birthyear;
 
 //Perform the logic
 age គឺ currentyear ដក birthyear;
 
 //Output
 បញ្ជេញ វត្ថុ "You are: " វត្ថុ age វត្ថុ ចុះបន្ទាត់;

 //Test Case 2 - Accept Name
 អក្សរ firstname;
 អក្សរ lastname;
 បញ្ជេញ វត្ថុ "Enter Your First name: ";
 បញ្ជូល firstname;
 បញ្ជេញ វត្ថុ "Enter Your Last name: ";
 បញ្ជូល lastname;
 បញ្ជេញ វត្ថុ firstname បូក lastname;

}

