#include<iostream>
#include <cstdlib>

using namespace std;

int main()
{
   int jml,i,j,k;

   cout<<"Masukkan sebuah angka : ";
   cin>>jml;

   cout<<"Level 1"<<endl;
   for(i=0;i<jml;i++){
      for(j=0;j<jml;j++){
		   cout<<"*";
		}
		cout<<endl;
   }
   cout<<endl;

   cout<<"Level 2"<<endl;
   for(i=0;i<jml;i++){
      for(j=jml-1;j>=0;j--){
		   if (j<=i)
			   cout<<"*";
		   else
   	      cout<<"-";
		}
		cout<<endl;
   }
   cout<<endl;

   cout<<"Level 3"<<endl;
   for(i=0;i<jml;i++){
      for(j=0;j<jml;j++){
		   if (j<=i)
			   cout<<"*";
		   else
   	      cout<<"-";
		}
		cout<<endl;
   }
   cout<<endl;

   cout<<"Level 4"<<endl;
   for(i=0;i<jml;i++){
      for(j=0;j<jml;j++){
		   if (j<i)
			   cout<<"-";
		   else
   	      cout<<"*";
		}
		cout<<endl;
   }
   cout<<endl;

   cout<<"Level 5"<<endl;
   for(i=0;i<jml;i++){
      for(j=jml;j>0;j--){
		   if (j<=i)
			   cout<<"-";
		   else
   	      cout<<"*";
		}
		cout<<endl;
   }
   cout<<endl;

   cout<<"Level 6"<<endl;
   for(i=0;i<jml;i++){
      for(j=jml-1;j>=0;j--){
		   if (j<=i)
			   cout<<"*";
		   else
   	      cout<<"-";
		}
		for(j=0;j<jml-1;j++){
		   if (j<i)
			   cout<<"*";
		   else
   	      cout<<"-";
		}
		cout<<endl;
    }
    cout<<endl;

    cout<<"Level 7"<<endl;
    for(i=0;i<jml;i++){
      for(j=0;j<jml;j++){
		   if (j<i)
			   cout<<"-";
		   else
   	      cout<<"*";
		}
      for(j=jml-1;j>0;j--){
		   if (j<i+1)
			   cout<<"-";
		   else
   	      cout<<"*";
		}
		cout<<endl;
    }
    cout<<endl;

      cout<<"Level 8"<<endl;
       for(i=0;i<jml;i++){
          for(j=jml-1;j>=0;j--){
               if (j<=i)
                   cout<<"*";
               else
              cout<<"-";
            }
            for(j=0;j<jml-1;j++){
               if (j<i)
                   cout<<"*";
               else
              cout<<"-";
            }
            cout<<endl;

        }
        for(i=0;i<jml;i++){
          for(j=0;j<jml;j++){
               if (j<i)
                   cout<<"-";
               else
              cout<<"*";
            }
          for(j=jml-1;j>0;j--){
               if (j<i+1)
                   cout<<"-";
               else
              cout<<"*";
            }
            cout<<endl;
        }


   system("pause");
   return 0;
}

