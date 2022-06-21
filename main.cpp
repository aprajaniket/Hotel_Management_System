// Hotel_Management_System
// C++
// Switch-Case statement
// if-else statement
// goto statement

#include<iostream>
using namespace std;
int main()
{
     int Num ;
     int choice;
     // Quantity initialize
     int Nrooms = 0, Nvadapav = 0 ,Nnoodles = 0,Nmilkshake = 0,Nbiryani = 0,Ndesert= 0;
     // Sold items initialize
     int Srooms = 0, Svadapav = 0, Snoodles = 0, Smilkshake = 0, Sbiryani = 0, Sdesert = 0;
     // Total price initialize
     int T_rooms = 0, T_vadapav = 0, T_noodles = 0, T_milkshake = 0, T_biryani = 0, T_desert = 0;
     

     // Preenter the having amount by user/Owner
     cout << "\n\t\t\t!! QUANTITY OF ITEMS WE HAVE!! ";
     cout << "\n AVAILABLE ROOMS: ";
     cin >> Nrooms;
     cout <<"\n QUANTITY OF VADAPAV: ";
     cin >> Nvadapav;
     cout <<"\n QUANTITY OF NOODLES: ";
     cin >> Nnoodles;
     cout <<"\n QUANTITY OF MILKSHAKE: ";
     cin >> Nmilkshake;
     cout <<"\n QUANTITY OF BIRYANI: ";
     cin >> Nbiryani;
     cout <<"\n QUANTITY OF DESSERT: ";
     cin >> Ndesert;

     
     m:
     // menu choose by customer
     cout << "\n\t\t\t!! PLEASE SELECT FROM THE GIVEN MENU !!";
     cout <<"\n\n1) ROOMS ";
     cout <<"\n2) VADAPAV";
     cout <<"\n3) NOODLES";
     cout <<"\n4) MILKSHAKE";
     cout <<"\n5) BIRYANI";
     cout <<"\n6) DESSERT";
     cout <<"\n7) Information regarding SALES";
     cout <<"\n8) Exit";

     cout << " \n\n PLease Enter your choice no: ";
     cin >> choice;

     // Use switch-case statement to to made choice and alot items from present available items
     switch (choice)
     {
          // Rooms
     case 1:
          cout << "\n\n\t Enter the number of rooms you want: ";
          cin >> Num;
          // if-else statement
          if(Nrooms-Srooms >=Num)
          {
               Srooms = Srooms + Num;
               T_rooms = T_rooms + Num * 1200;
               cout << "\n\n\t\t" << Num << " Room/Rooms have been alloted to you!";
          }
          else
               cout << "\n\tOnly " << Nrooms - Srooms << " Rooms remaining in hotel";
          break;
          // Vadapav
     case 2:
          cout << "\n\n Enter the Vadapav Quantity:";
          cin >> Num;
          if (Nvadapav - Svadapav >= Num)
          {
               Svadapav = Svadapav + Num;
               T_vadapav = T_vadapav + Num * 20;
               cout << "\n\n\t\t" << Num << " vadapav is the order!!";
          }
          else
               cout << "\n\tOnly " << Nvadapav - Svadapav << " vadapav remaining in hotel";
          break;
          // noodles
     case 3:
          cout << "\n\n Enter the noodles Quantity: ";
          cin >> Num;
          if (Nnoodles - Snoodles >= Num)
          {
               Snoodles = Snoodles + Num;
               T_noodles = T_noodles + Num * 100;
               cout << "\n\n\t\t" << Num << " noodles is the order!!";
          }
          else
               cout << "\n\tOnly " << Nnoodles - Snoodles << " noodles remaining in hotel";
          break;
          // Milkshake
     case 4:
          cout << "\n\n Enter the milkshake Quantity:";
          cin >> Num;
          if (Nmilkshake - Smilkshake >= Num)
          {
               Smilkshake = Smilkshake + Num;
               T_milkshake = T_milkshake + Num * 50;
               cout << "\n\n\t\t" << Num << " milkshake is the order!!";
          }
          else
               cout << "\n\tOnly " << Nmilkshake - Smilkshake << " milkshake remaining in hotel";
          break;
          // Biryani
     case 5:
          cout << "\n\n Enter the biryani Quantity: ";
          cin >> Num;
          if (Nbiryani - Sbiryani >= Num)
          {
               Sbiryani = Sbiryani + Num;
               T_biryani = T_biryani + Num * 200;
               cout << "\n\n\t\t" << Num << " biryani is the order!!";
          }
          else
               cout << "\n\tOnly " << Nbiryani - Sbiryani << " biryani remaining in hotel";
          break;
          // Dessert
     case 6:
          cout << "\n\n Enter the dessert Quantity: ";
          cin >> Num;
          if (Ndesert - Sdesert >= Num)
          {
               Sdesert = Sdesert + Num;
               T_desert = T_desert + Num * 150;
               cout << "\n\n\t\t" << Num << " dessert is the order!!";
          }
          else
               cout << "\n\tOnly " << Ndesert- Sdesert << " dessert remaining in hotel";
          break;
     case 7:
     // gives details of sales
          cout << "\n\t\t\t !! DETAILS OS TODAYS SALES AND COLLECTIONS !!";
          // rooms
          cout<<"\n\n Number of rooms we had: "<<Nrooms;
          cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
          cout<<"\n\n Remaining rooms: "<<Nrooms - Srooms;
          cout<<"\n\n Total rooms collection of the day: "<<T_rooms<<" Rs";
          // vadapav
          cout << "\n\n Number of vadapav we had: " << Nvadapav;
          cout << "\n\n Number of vadapav we sold: " << Svadapav;
          cout << "\n\n Remaining vadapav: " << Nvadapav - Svadapav;
          cout << "\n\n Total vadapav collection of the day: " << T_vadapav<<" Rs";
          // noodles
          cout << "\n\n Number of noodles we had: " << Nnoodles;
          cout << "\n\n Number of noodles we sold: " << Snoodles;
          cout << "\n\n Remaining noodles: " << Nnoodles - Snoodles;
          cout << "\n\n Total noodles collection of the day: " << T_noodles<<" Rs";
          // milkshake
          cout << "\n\n Number of milkshake we had: " << Nmilkshake;
          cout << "\n\n Number of milkshake we sold: " << Smilkshake;
          cout << "\n\n Remaining milkshake: " << Nmilkshake - Smilkshake;
          cout << "\n\n Total milkshake collection of the day: " << T_milkshake<<" Rs";
          // biryani
          cout << "\n\n Number of biryani we had: " << Nbiryani;
          cout << "\n\n Number of biryani we sold: " << Sbiryani;
          cout << "\n\n Remaining biryani: " << Nbiryani - Sbiryani;
          cout << "\n\n Total biryani collection of the day: " << T_biryani<<" Rs";

          // dessert
          cout << "\n\n Number of dessert we had: " << Ndesert;
          cout << "\n\n Number of dessert we sold: " << Sdesert;
          cout << "\n\n Remaining dessert: " << Ndesert - Sdesert;
          cout << "\n\n Total dessert collection of the day: " << T_desert<<" Rs";

          // Tptal collection of the day
          cout << "\n\n\n TOTAL COLLECTION OF THE DAY IS : "<<T_biryani+T_desert+T_milkshake+T_rooms+T_vadapav+T_noodles<<" Rs";

     case 8:
          exit(0);

     default:
          cout << "\n\n Please select the numbers mentioned above!!";
          break;
     }
     goto m;
}