#include<iostream>
using namespace std;
int main()
{
     int Num;
     int choice;
     // Quantity 
     int Nrooms = 0, Nvadapav = 0 ,Nnoodles =0,Nmilkshake = 0,Nbiryani = 0,Ndesert=0;
     // Sold items
     int Srooms = 0, Svadapav = 0, Snoodles, Smilkshake = 0, Sbiryani = 0, Sdesert = 0;
     // Total price
     int T_rooms = 0, T_vadapav = 0, T_noodles, T_milkshake = 0, T_biryani = 0, T_desert = 0;
     
     // Amout Available
     cout << "\n\t Quantity of Items we have";
     cout << "\n AVAILABLE ROOMS::";
     cin >> Nrooms;
     cout <<"\n QUANTITY OF VADAPAV";
     cin>> Nvadapav;
     cout <<"\n QUANTITY OF NOODLES";
     cin>> Nnoodles;
     cout <<"\n QUANTITY OF MILKSHAKE";
     cin>> Nmilkshake;
     cout <<"\n QUANTITY OF BIRYANI";
     cin>> Nbiryani;
     cout <<"\n QUANTITY OF DESERT";
     cin>> Ndesert;
     
     // menu
     cout << "\n\t\t\t PLEASE SELECT FROM THE GIVEN MENU";
     cout <<"\n\n1 ROOMS ";
     cout <<"\n2) VADAPAV";
     cout <<"\n3) NOODLES";
     cout <<"\n4) MILKSHAKE";
     cout <<"\n5) BIRYANI";
     cout <<"\n6) DESERT";
     cout <<"\n7)Information regardin SALES";
     cout <<"\n8)Exit";

     cout << " \n\n PLease Enter your choice";
     cin >> choice;

     switch (choice)
     {
          // Rooms
     case 1:
          cout << "\n\n Enter the number of rooms you want:";
          cin >> Num;
          if(Nrooms-Srooms >=Num)
          {
               Srooms = Nrooms + Num;
               T_rooms = T_rooms + Num * 1200;
               cout << "\n\n\t\t" << Num << "Rooms/Rooms have been alloted to you!";
          }
          else
               cout << "\n\tOnly" << Nrooms - Srooms << "Rooms remaining in hotel";
          break;
          // Vadapav
     case 2:
          cout << "\n\n Enter the Vadapav Quantity:";
          cin >> Num;
          if (Nvadapav - Svadapav >= Num)
          {
               Svadapav = Nvadapav + Num;
               T_vadapav = T_vadapav + Num * 250;
               cout << "\n\n\t\t" << Num << "vadapav is the order!!";
          }
          else
               cout << "\n\tOnly" << Nvadapav - Svadapav << "vadapav remaining in hotel";
          break;
          // noodles
     case 3:
          cout << "\n\n Enter the noodles Quantity:";
          cin >> Num;
          if (Nnoodles - Snoodles >= Num)
          {
               Snoodles = Nnoodles + Num;
               T_noodles = T_noodles + Num * 250;
               cout << "\n\n\t\t" << Num << "noodles is the order!!";
          }
          else
               cout << "\n\tOnly" << Nnoodles - Snoodles << "noodles remaining in hotel";
          break;
          // Milkshake
     case 4:
          cout << "\n\n Enter the milkshake Quantity:";
          cin >> Num;
          if (Nmilkshake - Smilkshake >= Num)
          {
               Smilkshake = Nmilkshake + Num;
               T_milkshake = T_milkshake + Num * 250;
               cout << "\n\n\t\t" << Num << "milkshake is the order!!";
          }
          else
               cout << "\n\tOnly" << Nmilkshake - Smilkshake << "milkshake remaining in hotel";
          break;
          // Biryani
     case 5:
          cout << "\n\n Enter the biryani Quantity:";
          cin >> Num;
          if (Nbiryani - Sbiryani >= Num)
          {
               Sbiryani = Nbiryani + Num;
               T_biryani = T_biryani + Num * 250;
               cout << "\n\n\t\t" << Num << "biryani is the order!!";
          }
          else
               cout << "\n\tOnly" << Nbiryani - Sbiryani << "noodles remaining in hotel";
          break;
          // Desert
     case 6:
          cout << "\n\n Enter the desert Quantity:";
          cin >> Num;
          if (Ndesert - Sdesert >= Num)
          {
               Sdesert = Ndesert + Num;
               T_desert = T_desert + Num * 250;
               cout << "\n\n\t\t" << Num << "desert is the order!!";
          }
          else
               cout << "\n\tOnly" << Ndesert- Sdesert << "Desert remaining in hotel";
          break;
     default:
          break;
     }
     
}