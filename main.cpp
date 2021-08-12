//PROJECT: Quiz program
//LANGUAGE:c++
//PROGRAMMER:Sujal vishwakarma
//INSTA: @hey_sujal

#include<iostream>
  using namespace std;
  
float score=0;  //score of the player
int ans;     //user input for answer
int wrong=0;   //wrong answers
float final_score;  //accuracy


 int main() //main start of the program
 {

   cout<<"\t\t\t\t******************QUIZZY******************"<<endl<<endl;
  
   //1st question
      cout<<"\t\t\t\t          Q1. Which is the first calculating device?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Abacus                2.Calculator"<<endl;
      cout<<"\t\t\t\t\t3.Pascaline             4.Turning Machine"<<endl;

      cin>>ans;

      if (ans==1)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }


        //2ndquestion
       cout<<"\t\t\t\t             Q2.Who is known as father of Artificial intelligence?"<<endl;
      cout<<"\t\t\t\t\t1.Charles babbage             2.Mark robert\t\t\t"<<endl;
      cout<<"\t\t\t\t\t3.Lee dee forest              4.JP eckert\t\t\t"<<endl;

      cin>>ans;

      if (ans==4)
      {
         score=score+1;

      }
      else{
        wrong=wrong+1;
      }


      //3rd question
      cout<<"\t\t\t\t          Q3. Who is the owner of TESLA.co?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Mark zuckerberg            2.Elon musk"<<endl;
      cout<<"\t\t\t\t\t3.Warren buffet              4.Jeff bezoz"<<endl;

      cin>>ans;

      if (ans==2)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }
      //4th question
      cout<<"\t\t\t\t          Q4. This is Application software?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.MS-paint                     2.MS-word"<<endl;
      cout<<"\t\t\t\t\t3.Both 1st and 2nd             4.Kali linux"<<endl;

      cin>>ans;

      if (ans==3)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }


      //5th question...
      cout<<"\t\t\t\t          Q6. Quality of printer is measured in :?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.DPI                2.UNITS"<<endl;
      cout<<"\t\t\t\t\t3.API                4.APP"<<endl;

      cin>>ans;

      if (ans==1)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }
      //6th question
      cout<<"\t\t\t\t          Q6.Playstation gaming console is a product of: ?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Tesla                2.Microsoft"<<endl;
      cout<<"\t\t\t\t\t3.Xbox                 4.ROG"<<endl;

      cin>>ans;

      if (ans==2)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }
      //7th question
      cout<<"\t\t\t\t          Q7. This is a method of password cracking?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Hacking                2.LAYER"<<endl;
      cout<<"\t\t\t\t\t3.Hello world             4.Dictionary"<<endl;

      cin>>ans;

      if (ans==4)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }

      //8th question
      cout<<"\t\t\t\t          Q8.What is part of a database that holds only one type of information?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Base                2.Field"<<endl;
      cout<<"\t\t\t\t\t3.Joints              4.Turns"<<endl;

      cin>>ans;

      if (ans==5)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }

      //9th question
      cout<<"\t\t\t\t          Q9.What was the active medium used in the first working laser ever constructed?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Neon                      2.Electricity"<<endl;
      cout<<"\t\t\t\t\t3.Methane liquid            4.Carbon dioxide gas"<<endl;

      cin>>ans;

      if (ans==4)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }
  
  //10th question
      cout<<"\t\t\t\t          Q10.Who created C Language?"<<endl;
      cout<<"\n";
      cout<<"\t\t\t\t\t1.Denniese rittchie                      2.Dev strostroup"<<endl;
      cout<<"\t\t\t\t\t3.Robert clarke            4.Mark hazelwood"<<endl;

      cin>>ans;

      if (ans==4)
      {
         score=score+1;

      }
      else{
          wrong=wrong+1;
      }
       
   
     //creating percentage of the answers 
     cout<<"\n";
     cout<<"\t\t\t\t```````````````RESULTS```````````"<<endl;
     cout<<"\t\t\t\t````````Your score:"<<score<<"````"<<endl;
     cout<<"\t\t\t\t`````````Incorrect:"<<wrong<<"````"<<endl;
     score=score-wrong;    //now minusing score fro wrong answers
     final_score=(score/10)*100;  //creating accuracy
     cout<<"\t\t\t\t```````Accurracy:"<<final_score<<"%````"<<endl;


   return 0;
}
