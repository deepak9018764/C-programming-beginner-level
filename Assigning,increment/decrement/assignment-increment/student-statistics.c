//This program will demonstrate a student statistics program
#include<stdio.h>
#include<stdlib.h>// used for exit function in the program
int highest();
int lowest();
int menu();
int report();
int scholarship();
int first_division();
int about();
int pass();
int distinction();
int fail2();
int individual();
int average();
int percentage();
int Z;
int number();
int total_student;
#define A 10
int main()
{
    int respond3;
    printf("                                                            Student Statistics Management System\n");
    printf("Press 1 to use the software\n");
    printf("press 2 for exit\n");
    scanf("%d",&respond3);
    if(respond3==1){
        menu();

    }
    if(respond3==2){
        printf("----------------------------------------------------------------------\n");
        printf("Thankyou for using our system\n");
        exit(0);
    }
}
int menu()
{
    int students,marks,respond;
printf("\n                                             ================ STUDENT STATISTICS ================\n");
printf("\n1. Show Average of the marks obtained by total students in the single section of the class and the grades (5 students allowed)\n"); 
printf("2. Find Highest marks obtained in the class (5 students allowed)\n");
printf("3. Find Lowest marks obtained in the class (5 students allowed) \n");
printf("4. Count total pass Students in the class and how much percentage of students passed (5 students allowed)\n");
printf("5. Count total fail Students in the class and how much percentage of students failled (5 students allowed)\n");
printf("6. Find the percentage for a specific student\n");
printf("7. Individual student result\n");
printf("8. Find Students with Distinction\n");
printf("9. Find the total of first division and second division Students \n");
printf("10. About Program\n");
printf("11. Scholarship eligibility\n");
printf("12. Show complete report\n");
printf("13. Exit\n");
printf("=====Enter your choice:");
scanf("%d", &respond);
if(respond==13){
    printf("----------------------------------------------------------------------\n");
    printf("Thankyou for using the application");
    exit(0);
}
if(respond==12){
    report();
}
if(respond==11){
    scholarship();
}
if(respond==1){
    average();
}
if(respond==10){
    about();
}
if(respond==7){
    individual();
}
if (respond==2){
    highest();
}
if(respond==3){
    lowest();
}
if(respond==4){
    pass();
}
if(respond==5){
    fail2();
}
if(respond==6){
    percentage();
}
if(respond==8){
    distinction();
}
if(respond==9){
    first_division();
}
return 0;
}

int average()
{
    int q,r,s,t,total_student=5,sum,value,x,l;
    float result;
    char grade;
    printf("Enter all the marks of all the students/100 with spaces between them \n");
    scanf("%d %d %d %d %d",&q,&r,&s,&t,&x);
    sum=q+r+s+t+x;
    result=sum/total_student;
    if(result>90){
        printf("----------------------------------------------------------------------\n");
        printf("Grade: A\n");
    }
    if(result>70&&result<90){
        printf("----------------------------------------------------------------------\n");
        printf("Grade: B\n");
    }
    if(result>40&&result<70){
        printf("----------------------------------------------------------------------\n");
       printf("Grade: C\n");

    }
    if(result>30&&result<40){
        printf("----------------------------------------------------------------------\n");
       printf("Grade: D\n");

    }
   printf("----------------------------------------------------------------------\n");
   printf("Average Marks : %f\n",result);
   printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
return 0;

}
int highest()
{
    int l,m,n,o,p,k,max;
    printf("Enter the first student marks out of 100\n");
    scanf("%d",&l);
    printf("Enter the second student marks out of 100\n");
    scanf("%d",&m);
    printf("Enter the third student marks out of 100\n");
    scanf("%d",&n);
    printf("Enter the fourth student marks out of 100\n");
    scanf("%d",&o);
    printf("Enter the fifth student marks out of 100\n");
    scanf("%d",&p);
    max=l;
    if(m>max){
        max=m;
    }
    if(n>max){
        max=n;
    }
    if(o>max){
        max=o;
    }
    if(p>max){
        max=p;
    }
    printf("----------------------------------------------------------------------\n");
    printf("Highest Marks : %d\n",max);
    printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&k);
if(k==1){
menu();
}
if(k==2){
    exit(0);

}
return 0;
}
int lowest()
{
 int a,r,h,j,s,l,lowest;
 printf("Enter the first student marks out of 100\n");
 scanf("%d",&a);
  printf("Enter the second student marks out of 100\n");
 scanf("%d",&r);
  printf("Enter the third student marks out of 100\n");
 scanf("%d",&h);
  printf("Enter the fourth student marks out of 100\n");
 scanf("%d",&j);
  printf("Enter the fifth student marks out of 100\n");
 scanf("%d",&s);
 lowest=a; //a=1
 if(r<lowest){//r=2
    lowest=r;
 }
 if(h<lowest){//h=3
    lowest=h;
 }
 if(j<lowest){//j=4
    lowest=j;
 }
 if(s<lowest){//s=5
    lowest=s;
 }
printf("----------------------------------------------------------------------\n");
 printf("Lowest Marks : %d\n",lowest);
  printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}

return 0;
}
int pass()
{
    int a,b,c,d,e,l,pass=50,count2=0,pass3;
    printf("Enter first student marks out of 100\n");
    scanf("%d", &a);
     printf("Enter second student marks out of 100\n");
    scanf("%d", &b);
     printf("Enter third student marks out of 100\n");
    scanf("%d", &c);
     printf("Enter fourth student marks out of 100\n");
    scanf("%d", &d);
     printf("Enter fifth student marks out of 100\n");
    scanf("%d", &e);
    if(a>=pass){//relational operator
        count2=count2+1;
    }
    if(b>=pass){
        count2=count2+1;
    }
    if(c>=pass){
        count2=count2+1;
    }
    if(d>=pass){
        count2=count2+1;
    }
    if(e>=pass){
        count2=count2+1;
        pass3=(count2/5.0)*100;
        printf("----------------------------------------------------------------------\n");
        printf("Passing Marks : 50\n");
        printf("----------------------------------------------------------------------\n");
        printf("Total student passed : %d\n",count2);
        printf("----------------------------------------------------------------------\n");
        printf("Pass percentage : %d percent\n",pass3);
    }

    
     printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
    

return 0;
    
}
int fail2()
{
    int a,b,c,d,e,l,fail=50,count2=0,fail3;
    printf("Enter first student marks out of 100\n");
    scanf("%d", &a);
     printf("Enter second student marks out of 100\n");
    scanf("%d", &b);
     printf("Enter third student marks out of 100\n");
    scanf("%d", &c);
     printf("Enter fourth student marks out of 100\n");
    scanf("%d", &d);
     printf("Enter fifth student marks out of 100\n");
    scanf("%d", &e);
    if(a<=fail){
        count2=count2+1;
    }
    if(b<=fail){
        count2=count2+1;
    }
    if(c<=fail){
        count2=count2+1;
    }
    if(d<=fail){
        count2=count2+1;
    }
    if(e<=fail){
        count2=count2+1;
    }
    fail3=(count2/5.0)*100;
    printf("----------------------------------------------------------------------\n");
    printf("Total failed students : %d\n",count2);
    printf("----------------------------------------------------------------------\n");
    printf("Failled percentage : %d percent\n",fail3);
     printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
   return 0;     
}
int percentage()
{
    int b,c,d,e,f,l,total;
    char a[50];
    float perc;
    printf("Enter the student name\n");
    scanf("%s",a);
    printf("Enter the marks of %s with space\n",a);
    scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
    total=b+c+d+e+f;
    perc=(b+c+d+e+f)/500.00*100;//c truncates two integer number division as 0
    printf("----------------------------------------------------------------------\n");
    printf("Total Marks is: %d/500\n",total);
    printf("----------------------------------------------------------------------\n");
    printf("Percentage is: %f\n",perc);
    printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
return 0;
}
int individual()
{
    char m[20];
    int b,l,n,o;
    printf("Enter the name of the student\n");
    scanf("%s",m);
    printf("Enter the marks/500 of %s \n",m);
    scanf("%d",&b);
    if(b>150&&b<=499){
        printf("Marks :%d\n",b);
        printf("Status: passed\n");
        printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&o);
if(o==1){
menu();
}
if(o==2){
    exit(0);

}
        
    }
    if(b<150){
         printf("Marks %d\n",b);
        printf("Status:Failled %s",m);
        printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&n);
if(n==1){
menu();
}
if(n==2){
    exit(0);

}
    }
    if(b>500){
        printf("invalid input: Please enter marks between 0 to 500\n");
        printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
    }
    return 0;
}
int distinction()
{
    int a,b,c,d,e,l, dist=0;
   printf("Enter first student marks out of 100\n");
    scanf("%d", &a);
     printf("Enter second student marks out of 100\n");
    scanf("%d", &b);
     printf("Enter third student marks out of 100\n");
    scanf("%d", &c);
     printf("Enter fourth student marks out of 100\n");
    scanf("%d", &d);
     printf("Enter fifth student marks out of 100\n");
    scanf("%d", &e);
    if(a>=75){
        dist=dist+1;
    }
     if(b>=75){
        dist=dist+1;
    }
     if(c>=75){
        dist=dist+1;
    }
     if(d>=75){
        dist=dist+1;
    }
    printf("Students with Distinction :%d\n",dist);
    printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&l);
if(l==1){
menu();
}
if(l==2){
    exit(0);

}
return 0;
}
int first_division()
{
     int a,b,c,d,e,l, div=0,div2=0;
   printf("Enter first student marks out of 100\n");
    scanf("%d", &a);
     printf("Enter second student marks out of 100\n");
    scanf("%d", &b);
     printf("Enter third student marks out of 100\n");
    scanf("%d", &c);
     printf("Enter fourth student marks out of 100\n");
    scanf("%d", &d);
     printf("Enter fifth student marks out of 100\n");
    scanf("%d", &e);
    if(a>=75){
        div=div+1;//a90
    }
    if(a>=39&&a<75){
        div2=div2+1;//
    }

     if(b>=75){//b76
        div=div+1;
    }
    if(b>=39&&b<75){
        div2=div2+1;
    }
     if(c>=75){//54
        div=div+1;
    }
    if(c>=39&&c<75){
        div2=div2+1;
    }

    if(d>=75){//43
        div=div+1;
    }
    if(d>=39&&d<75){
        div2=div2+1;
    }
     
    if(e>=75){//54
        div=div+1;
    }
    if(e>=39&&e<75){
        div2=div2+1;
    }
    

    printf("----------------------------------------------------------------------\n");
    printf("Students with first division  :%d\n",div);
    printf("----------------------------------------------------------------------\n");
    printf("Students with second division  :%d\n",div2);
    printf("Press 1 to go back or press 2 to exit\n");
    scanf("%d",&l);
    if(l==1){
     menu();
 }
    if(l==2){
    exit(0);

} 
return 0;
}
int about()
{
    int a;
printf("Student Statistics System\n");
printf("----------------------------------------------------------------------\n");
printf("Developed by:DEEPAK SHARMA\n");
printf("----------------------------------------------------------------------\n");
printf("Version:1.0\n");
printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&a);
if(a==1){
menu();
}
if(a==2){
    exit(0);

}
 return 0;
}
int scholarship()
{
    int b,c,d;
    char a[20];
    printf("Enter the name of the student\n");
    scanf("%s",a);
    printf("Enter the total marks achieved by %s /500\n",a);
    scanf("%d",&b);
    printf("Enter the total distance in km from your location to institute\n");
    scanf("%d",&c);
    if(b>450&&c>600){
        printf("Congratulation %s you are eligible for the scholarship\n",a);
    }
    else{
         printf("Sorry %s you are not eligible for the scholarship.\n",a);
    }
    printf("Press 1 to go back or press 2 to exit\n");
scanf("%d",&d);
if(d==1){
menu();
}
if(d==2){
    exit(0);

}
return 0;
}
int report()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum,max,total_student=25,lowest,count2=0,pass3,count3=0,fail=50,pass=50,fail3;
    float result;
printf("Enter the marks of all students with spaces between them\n");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u,&v,&w,&x,&y); 
 sum=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y;
    result=sum/total_student;
    if(result>90){
        printf("----------------------------------------------------------------------\n");
        printf("Grade: A\n");
    }
    if(result>70&&result<90){
        printf("----------------------------------------------------------------------\n");
        printf("Grade: B\n");
    }
    if(result>40&&result<70){
        printf("----------------------------------------------------------------------\n");
       printf("Grade: C\n");

    }
    if(result>30&&result<40){
        printf("----------------------------------------------------------------------\n");
       printf("Grade: D\n");

    }
  // average will be printed by result variable


  max=e;
    if(a>max){
        max=a;
    }
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    if(f>max){
        max=f;
    }
    if(g>max){
        max=g;
    }
    if(h>max){
        max=h;
    }
    if(i>max){
        max=i;
    }
    if(j>max){
        max=j;
    }
    if(k>max){
        max=k;
    }
    if(l>max){
        max=l;
    }
    if(m>max){
        max=m;
    }
    if(n>max){
        max=n;
    }
    if(o>max){
        max=o;
    }
    if(p>max){
        max=p;
    }
    if(q>max){
        max=q;
    }
    if(r>max){
        max=r;
    }
    if(s>max){
        max=s;
    }
    if(t>max){
        max=t;
    }
    if(u>max){
        max=u;
    }
    if(v>max){
        max=v;
    }
    if(w>max){
        max=w;
    }
    if(x>max){
        max=x;
    }
    if(y>max){
        max=y;
    }

   //max variable has the result
  lowest=a; //a=1
 if(b<lowest){//r=2
    lowest=b;
 }
 if(c<lowest){//h=3
    lowest=c;
 }
 if(d<lowest){//j=4
    lowest=d;
 }
 if(e<lowest){//s=5
    lowest=e;
 }
  if(f<lowest){//s=5
    lowest=f;
 }
  if(g<lowest){//s=5
    lowest=g;
 }
  if(h<lowest){//s=5
    lowest=h;
 }
  if(i<lowest){//s=5
    lowest=i;
 }
   if(j<lowest){//s=5
    lowest=j;
 }
  if(k<lowest){//s=5
    lowest=k;
 }
  if(l<lowest){//s=5
    lowest=l;
 }
  if(m<lowest){//s=5
    lowest=m;
 }
  if(n<lowest){//s=5
    lowest=n;
 }
  if(o<lowest){//s=5
    lowest=o;
 }
  if(p<lowest){//s=5
    lowest=p;
 }
  if(q<lowest){//s=5
    lowest=q;
 }
  if(r<lowest){//s=5
    lowest=r;
 }
  if(s<lowest){//s=5
    lowest=s;
 }
  if(t<lowest){//s=5
    lowest=t;
 }
  if(u<lowest){//s=5
    lowest=u;
 }
  if(v<lowest){//s=5
    lowest=v;
 }
  if(w<lowest){//s=5
    lowest=w;
 }
  if(x<lowest){//s=5
    lowest=x;
 }
  if(y<lowest){//s=5
    lowest=y;
 }
printf("----------------------------------------------------------------------\n");
 //lowest have the result
 if(a>=pass){//relational operator
        count2=count2+1;
    }
    if(b>=pass){
        count2=count2+1;
    }
    if(c>=pass){
        count2=count2+1;
    }
    if(d>=pass){
        count2=count2+1;
    }
    if(e>=pass){
        count2=count2+1;
    }
     if(f>=pass){
        count2=count2+1;
    }
     if(g>=pass){
        count2=count2+1;
    }
     if(h>=pass){
        count2=count2+1;
    }
     if(i>=pass){
        count2=count2+1;
    }
     if(j>=pass){
        count2=count2+1;
    }
     if(k>=pass){
        count2=count2+1;
    }
     if(l>=pass){
        count2=count2+1;
    }
     if(m>=pass){
        count2=count2+1;
    }
     if(n>=pass){
        count2=count2+1;
    }
     if(o>=pass){
        count2=count2+1;
    }
     if(p>=pass){
        count2=count2+1;
    }
     if(q>=pass){
        count2=count2+1;
    }
     if(r>=pass){
        count2=count2+1;
    }
     if(s>=pass){
        count2=count2+1;
    }
     if(t>=pass){
        count2=count2+1;
    }
     if(u>=pass){
        count2=count2+1;
    }
     if(v>=pass){
        count2=count2+1;
    }
     if(w>=pass){
        count2=count2+1;
    }
     if(x>=pass){
        count2=count2+1;
    }
     if(y>=pass){
        count2=count2+1;
         pass3=(count2/5.0)*100;
    }

    if(a<=fail){
        count3=count3+1;
    }
    if(b<=fail){
        count3=count3+1;
    }
    if(c<=fail){
        count3=count3+1;
    }
    if(d<=fail){
        count3=count3+1;
    }
    if(e<=fail){
        count3=count3+1;
    }
    if(f<=fail){
        count3=count3+1;
    }
    if(g<=fail){
        count3=count3+1;
    }
    if(h<=fail){
        count3=count3+1;
    }
    if(i<=fail){
        count3=count3+1;
    }
    if(j<=fail){
        count3=count3+1;
    }
    if(k<=fail){
        count3=count3+1;
    }
    if(l<=fail){
        count3=count3+1;
    }
    if(m<=fail){
        count3=count3+1;
    }
    if(n<=fail){
        count3=count3+1;
    }
    if(o<=fail){
        count3=count3+1;
    }
    if(p<=fail){
        count3=count3+1;
    }
    if(q<=fail){
        count3=count3+1;
    }
    if(r<=fail){
        count3=count3+1;
    }
    if(s<=fail){
        count3=count3+1;
    }
    if(t<=fail){
        count3=count3+1;
    }
    if(u<=fail){
        count3=count3+1;
    }
    if(v<=fail){
        count3=count3+1;
    }
    if(w<=fail){
        count3=count3+1;
    }
    if(x<=fail){
        count3=count3+1;
    }
    if(y<=fail){
        count3=count3+1;
    }

    fail3=(count2/5.0)*100;
    printf("                                                         ========================================\n");
    printf("                                                                    STUDENT REPORT SUMMARY\n");
    printf("                                                         ========================================\n");
    printf("Average:%f\n",result);
    printf("Highest marks:%d\n",max);
    printf("Lowest marks:%d\n",lowest);
    printf("\nPassing Marks : 50\n");
    printf("Total student passed : %d\n",count2);
    printf("Total failed students : %d\n",count3);

     printf("\nPress 1 to go back or press 2 to exit\n");
scanf("%d",&z);
if(z==1){
menu();
}
if(z==2){
    exit(0);

}

return 0;

}



