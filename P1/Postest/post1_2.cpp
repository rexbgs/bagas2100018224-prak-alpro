#include <iostream>
#include <string>
#include <math.h>

using namespace std;
 float hitung (int px,int py){
 	
	float hasil; 
	hasil = sqrt(px+py);
	return hasil;
 }
       

int main()
{
   string raptor_prompt_variable_zzyz;
   int y1;
   float hasil;
   float jarak;
   int px;
   int x2;
   int y2;
   int py;
   int x1;

   raptor_prompt_variable_zzyz ="masukkan nilai A1 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="masukkan nilai A2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="masukkan nilai B1 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="masukkan nilai B2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   px =(x2-x1)*(x2-x1);
   py =(y2-y1)*(y2-y1);
   jarak =sqrt(px+py);
   cout << "jarak antara dua titik adalah "<< jarak << endl;    
   cout << "jarak antara dua titik fungsi adalah "<<hitung(px,py)<< endl;  
   return 0;
}
