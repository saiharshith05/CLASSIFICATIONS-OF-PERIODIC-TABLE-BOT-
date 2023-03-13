#include<stdio.h>
void main()
{
	int atomic_num;
	double mass_num;
	char option;
	printf("\n*********************************************************************************************");
	printf("\n\t**************** WELCOME TO MODERN PERIODIC TABLE*******************************");
	printf("\n*********************************************************************************************");
    printf("\n\nTo search by atomic number Enter 'A': \n To search to by mass number enter 'M': ");
    scanf("%c",&option);
    switch(option)
    case 'A':
    {
         printf("\nEnter the Atomic Number of Element :");
         scanf("%d",&atomic_num);
         if(atomic_num==1)
              printf("\n Element name: Hydrogen\n Symbol: H\n Mass number: 1.01\n Group number: IA or 1\n Group name: Alkali metals\n Period number: 1\n Block: s-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==2)
                printf("\n Element name: Helium\n Symbol: He\nMass number: 4.00\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 1\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==3)
                  printf("\n Element name: Lithium\n Symbol: Li\n Mass number: 6.94\n Group number: IA or 1\n Group name: Alkali metals\n Period number: 2\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==4)
                  printf("\n Element name: Beryllium\n Symbol: Be\n Mass number: 9.01\n Group number: IIA or 2\n Group name: Alkali Earth metals\n Period number: 2\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==5)
                  printf("\n Element name: Boron\n Symbol: B\n Mass number: 10.81\n Group number: IIIA or 13\n Group name: Boron Family\n Period number: 2\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==6)
                  printf("\n Element name: Carbon\n Symbol: C\n Mass number: 12.01\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 2\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(atomic_num==7)
                  printf("\n Element name: Nitrogen\n Symbol: N\n Mass number: 14.01\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==8)
                  printf("\n Element name: Oxygen\n Symbol: O\n Mass number: 16.00\n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==9)
                  printf("\n Element name: Fluorine\n Symbol: F\n Mass number: 19.00\n Group number: VII A or 17\n Group name: Halogens\n  Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==10)
                  printf("\n Element name: Neon\n Symbol: Ne\n Mass number: 20.18\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==11)
                  printf("\n Element name: Sodium\n Symbol: Na\n Mass number: 22.99   \n Group number:  IA  or 1\n Group name: Alkali metals\n Period number: 3\n Block: s-block\n Physical state: Solid\n It is Non-metal\n");

         else if(atomic_num==12)
                  printf("\n Element name: Magnesium\n Symbol: Mg\n Mass number: 24.31   \n Group number:  IIA  or 2\n Group name: Alkali Earth metals\n Period number: 3\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==13)
                  printf("\n Element name: Aluminium\n Symbol: Al\n Mass number: 26.98   \n Group number:  IIIA  or 13\n Group name: Boron Family\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==14)
                  printf("\n Element name: Silicon\n with Symbol: Si\n Mass number: 28.09  \n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==15)
                  printf("\n Element name: Phosphorus\n Symbol: P\n Mass number: 30.97  \n Group number: V A or 15\n Group name: Pnictogens\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(atomic_num==16)
                  printf("\n Element name: Sulphur\n Symbol: S\n Mass number: 32.06   \n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(atomic_num==17)
                  printf("\n Element name: Chlorine\n Symbol: Cl\n Mass number: 35.45   \n Group number: VII A or 17\n Group name: Halogens\n Period number: 3\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==18)
                  printf("\n Element name: Argon\n Symbol: Ar\n Mass number: 39.95   \n Group number: 0 or 18\n Group name: Noble gases\n Period number: 3\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==19)
                  printf("\n Element name: Potassium\n Symbol: K\n Mass number: 39.10   \n Group number:  IA  or 1\n Group name: Alkali metals\n Period number: 4\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==20)
                  printf("\n Element name: Calcium\n Symbol: Ca\n Mass number: 40.08   \n Group number:  IIA  or 2\n Group name: Alkali Earth metals\n Period number: 4\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==21)
                  printf("\n Element name: Scandium\n Symbol: Sc\n Mass number: 44.96  \n Group number: III B or 3\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==22)
                  printf("\n Element name: Titanium\n Symbol: Ti\n Mass number: 47.90  \n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==23)
                  printf("\n Element name: Vanadium\n Symbol: V\n Mass number: 50.94  \n Group number: V B or 5\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==24)
	              printf("\n Element name: Chromium\n Symbol: Cr\n Mass number: 51.99  \n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==25)
	              printf("\n Element name: Manganese\n Symbol: Mn\n Mass number: 54.94   \n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==26)
	              printf("\n Element name:  Iron\n Symbol: Fe\n Mass number: 55.85   \n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==27)
	              printf("\n Element name: Cobalt\n Symbol: Co\n Mass number: 58.93   \n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==28)
	              printf("\n Element name: Nickel\n Symbol: Ni\n Mass number: 58.70   \n Group number: VIII or 10 Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==29)
	              printf("\n Element name: Copper\n Symbol: Cu\n Mass number: 63.55   \n Group number: I B or 11\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==30)
	              printf("\n Element name: Zinc\n Symbol: Zn\n Mass number: 65.38   \n Group number: II B or 12\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==31)
	              printf("\n Element name: Gallium\n Symbol: Ga\n Mass number: 69.72   \n Group number: III A or 13\n Group name: Boron Family\n Period number: 4\n Block: p-block\n Physical state: Liquid\n It is Metal\n");

         else if(atomic_num==32)
	              printf("\n Element name: Germanium\n Symbol: Ge\n Mass number: 72.59   \n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==33)
	              printf("\n Element name: Arsenic\n Symbol: As\n Mass number: 74.92  \n Group number: V A or 15\n Group name: Pnictogens\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==34)
	              printf("\n Element name: Selenium\n Symbol: Se\n Mass number: 78.97   \n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(atomic_num==35)
	              printf("\n Element name: Bromine\n Symbol: Br\n Mass number: 79.90   \n Group number: VII A or 17\n Group name: Halogens\n Period number: 4\n Block: p-block\n Physical state: Liquid\n It is Non-metal\n");

         else if(atomic_num==36)
	              printf("\n Element name: Krypton\n Symbol: Kr\n Mass number: 83.80   \n Group number: 0 or 18\n Group name: Noble gases\n Period number: 4\n Block: p-block\n  \n is a   Gas . It is Non-metal\n");

         else if(atomic_num==37)
	              printf("\n Element name: Rubidium\n Symbol: Rb\n Mass number: 85.47   \n Group number: I A or 1\n Group name: Alkali metals\n Period number: 5\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==38)
	              printf("\n Element name: Strontium\n Symbol: Sr\n Mass number: 87.62   \n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 5\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==39)
                  printf("\n Element name: Yttrium\n Symbol: Y\n Mass number: 88.91   \n Group number: III B or 3\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==40)
	              printf("\n Element name: Zirconium\n Symbol: Zr\n Mass number: 91.22   \n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==41)
	              printf("\n Element name: Niobium\n Symbol: Nb\n Mass number: 92.91   \n Group number: V B or 5\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==42)
	              printf("\n Element name: Molybdenum\n Symbol: Mo\n Mass number: 95.94   \n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==43)
	              printf("\n Element name: Technetium\n Symbol: Tc\n Mass number: 98.91   \n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n  \n is a  Synthetic . It is Metal\n");

         else if(atomic_num==44)
	              printf("\n Element name: Ruthenium\n Symbol: Ru\n Mass number: 101.07   \n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==45)
	              printf("\n Element name: Rhodium\n Symbol: Rh\n Mass number: 102.91   \n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==46)
	              printf("\n Element name: Palladium\n Symbol: Pd\n Mass number: 106.42   \n Group number: VIII or 10 Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==47)
	              printf("\n Element name: Silver\n Symbol: Ag\n Mass number: 107.87   \n Group number: I B or 11\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==48)
	              printf("\n Element name: Cadmium\n Symbol: Cd\n Mass number: 112.41   \n Group number: II B or 12\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==49)
	              printf("\n Element name: Indium\n Symbol: In\n Mass number: 114.82   \n Group number: III A or 13\n Group name: Boron Family\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==50)
	              printf("\n Element name: Tin\n Symbol: Sn\n Mass number: 118.71   \n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==51)
	              printf("\n Element name: Antimony\n Symbol: Sb\n Mass number: 121.76   \n Group number: V A or 15\n Group name: Pnictogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==52)
	              printf("\n Element name: Tellurium\n Symbol: Te\n Mass number: 127.60   \n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(atomic_num==53)
	              printf("\n Element name: Iodine\n Symbol: I\n Mass number: 126.90   \n Group number: VII A or 17\n Group name: Halogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Non-metal\n  ");

         else if(atomic_num==54)
	              printf("\n Element name: Xenon\n Symbol: Xe\n Mass number: 131.30   \n Group number: 0 or 18\n Group name: Noble gases\n Period number: 5\n Block: p-block\n Physical state: Gas\n It is Non-metal\n  ");

         else if(atomic_num==55)
	              printf("\n Element name: Caesium\n Symbol: Cs\n Mass number: 132.91   \n Group number: I A or 1\n Group name: Alkali metals\n Period number: 6\n Block: s-block\n Physical state: Liquid\n It is Metal\n");

         else if(atomic_num==56)
	              printf("\n Element name: Barium\n Symbol: Ba\n Mass number: 137.33   \n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 6\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==57)
                  printf("\n Element name: Lanthanum\n Symbol: La\n Mass number: 138.91   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==58)
	              printf("\n Element name: Cerium\n Symbol: Ce\n Mass number: 140.12   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==59)
	              printf("\n Element name: praseodymium\n Symbol: Pr\n Mass number: 140.91   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==60)
	              printf("\n Element name: Neodymium\n Symbol: Nd\n Mass number: 144.24   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==61)
	              printf("\n Element name: Promethium\n Symbol: Pm\n Mass number: 144.91   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==62)
	              printf("\n Element name: Samarium\n Symbol: Sm\n Mass number: 150.36   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==63)
	              printf("\n Element name: Europium\n Symbol: Eu\n Mass number: 151.96   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==64)
	              printf("\n Element name: Gadolinium\n Symbol: Gd\n Mass number: 157.25   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==65)
	              printf("\n Element name: Terbium\n Symbol: Tb\n Mass number: 158.93  \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==66)
	              printf("\n Element name: Dysprosium\n Symbol: Dy\n Mass number: 162.50   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==67)
	              printf("\n Element name: Holmium\n Symbol: Ho\n Mass number: 164.93   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==68)
	              printf("\n Element name: Erbium\n Symbol: Er\n Mass number: 167.26   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==69)
	              printf("\n Element name: Thulium\n Symbol: Tm\n Mass number: 168.93   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==70)
	              printf("\n Element name: Ytterbium\n Symbol: Yb\n Mass number: 173.06   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==71)
	              printf("\n Element name: Lutetium\n Symbol: Lu\n Mass number: 174.97   \n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==72)
	              printf("\n Element name: Hafnium\n Symbol: Hf\n Mass number: 178.49   \n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==73)
	              printf("\n Element name: Tantalum\n Symbol: Ta\n Mass number: 180.95   \n Group number: V B or 5\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==74)
	              printf("\n Element name: Tungsten\n Symbol: W\n Mass number: 183.85   \n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==75)
	              printf("\n Element name: Rhenium\n Symbol: Re\n Mass number: 186.21   \n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==76)
	              printf("\n Element name: Osmium\n Symbol: Os\n Mass number: 190.23   \n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==77)
	              printf("\n Element name: Iridium\n Symbol: Ir\n Mass number: 192.22   \n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==78)
	              printf("\n Element name: Platinum\n Symbol: Pt\n Mass number: 195.09   \n Group number: VIII or 10\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==79)
	              printf("\n Element name: Gold\n Symbol: Au\n Mass number: 196.97   \n Group number: I B or 11\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==80)
	              printf("\n Element name: Mercury\n Symbol: Hg\n Mass number: 200.59   \n Group number: II B or 12\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Liquid\n It is Metal\n");

         else if(atomic_num==81)
	              printf("\n Element name: Thallium\n Symbol: Tl\n Mass number: 204.38   \n Group number: III A or 13\n Group name: Boron Family\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==82)
	              printf("\n Element name: Lead\n Symbol: Pb\n Mass number: 207.20   \n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==83)
	              printf("\n Element name: Bismuth\n Symbol: Bi\n Mass number: 208.98   \n Group number: V A or 15\n Group name: Pnictogens\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==84)
	              printf("\n Element name:  Polonium\n Symbol: Po\n Mass number: 208.98   \n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(atomic_num==85)
	              printf("\n Element name:  Astatine\n Symbol: At\n Mass number: 209.98   \n Group number: VII A or 17\n Group name: Halogens\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Non-metal\n  ");

         else if(atomic_num==86)
	              printf("\n Element name:  Radon\n Symbol: Rn\n Mass number: 222.02   \n Group number: 0 or 18\n Group name: Noble gases\n Period number: 6\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(atomic_num==87)
	              printf("\n Element name:  Francium\n Symbol: Fr\n Mass number: 223.02   \n Group number: I A or 1\n Group name: Alkali metals\n Period number: 7\n Block: s-block\n  \n is a  Liquid(radioactive)  . It is Metal\n  ");

         else if(atomic_num==88)
	              printf("\n Element name: Radium\n Symbol: Ra\n Mass number: 226.03   \n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 7\n Block: s-block\n  \n is a  Solid(Radioactive)  . It is Metal\n  ");

         else if(atomic_num==89)
	              printf("\n Element name: Actinium\n Symbol: Ac\n Mass number: 227.03   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n  \n  f-block  Physical state: Solid\n It is Metal\n  ");

         else if(atomic_num==90)
	              printf("\n Element name: Thorium\n Symbol: Th\n Mass number: 232.04   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Solid\n It is Metal\n   ");

         else if(atomic_num==91)
	              printf("\n Element name: Protactinium\n Symbol: Pa\n Mass number: 231.04   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==92)
                  printf("\n Element name: Uranium\n Symbol: U\n Mass number: 238.03   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==93)
	              printf("\n Element name: Neptunium\n Symbol: Np\n Mass number: 237.06   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==94)
	              printf("\n Element name:  Plutonium\n Symbol: Pu\n Mass number: 244.06   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==95)
	              printf("\n Element name: Americium\n Symbol: Am\n Mass number: 243.06   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==96)
	              printf("\n Element name: Curium\n Symbol: Cm\n Mass number: 247.07   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==97)
	              printf("\n Element name: Berkelium\n Symbol: Bk\n Mass number: 247.07   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==98)
	              printf("\n Element name: Californium\n Symbol: Cf\n Mass number: 251.08   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n  \n  f-block  Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==99)
	              printf("\n Element name: Einsteinium\n Symbol: Es\n Mass number: 252.00   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==100)
	              printf("\n Element name: Fermium\n Symbol: Fm\n Mass number: 257.10   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==101)
	              printf("\n Element name: Mendelevium\n Symbol: Md\n Mass number: 258.10   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==102)
	              printf("\n Element name: Nobelium\n Symbol: No\n Mass number: 259.10   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==103)
	              printf("\n Element name: Lawrencium\n Symbol: Lr\n Mass number: 262.11   \n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==104)
	              printf("\n Element name: Rutherfordium\n Symbol: Rf\n Mass number: 267.12   \n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==105)
                  printf("\n Element name: Dubnium\n Symbol: Db\n Mass number: 268.12   \n Group number: V B or 5\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==106)
	              printf("\n Element name: Seaborgium\n Symbol: Sg\n Mass number: 271.13   \n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==107)
	              printf("\n Element name: Bohrium\n Symbol: Bh\n Mass number: 274.14   \n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==108)
	              printf("\n Element name: Hassium\n Symbol: Hs\n Mass number: 277.15   \n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==109)
	              printf("\n Element name: Meitnerium\n Symbol: Mt\n Mass number: 278.15   \n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==110)
	              printf("\n Element name: Darmstadtium\n Symbol: Ds\n Mass number: 281.16   \n Group number: VIII or 10\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==111)
	              printf("\n Element name: Roentgenium\n Symbol: Rg\n Mass number: 282.16   \n Group number: I B or 11\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==112)
	              printf("\n Element name: Copernicium\n Symbol: Cn\n Mass number: 285.18   \n Group number: II B or 12\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==113)
	              printf("\n Element name: Nihonium\n Symbol: Nh\n Mass number: 286.18   \n Group number: III A or 13\n Group name: Boron Family\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==114)
	             printf("\n Element name: Flerovium\n Symbol: Fl\n Mass number: 289.19   \n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==115)
	              printf("\n Element name: Moscovium\n Symbol: Mc\n Mass number: 290.20   \n Group number: V A or 15\n Group name: Pnictogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==116)
	              printf("\n Element name: Livermorium\n Symbol: Lv\n Mass number: 293.20   \n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(atomic_num==117)
	              printf("\n Element name: Tennessine\n Symbol: Ts\n Mass number: 294.21   \n Group number: VII A or 17\n Group name: Halogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Non-metal");

         else if(atomic_num==118)
	              printf("\n Element name: Oganesson\n Symbol: Og\n Mass number: 294.21   \n Group number: 0 or 18\n Group name: Noble gases\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Non-metal");

         else
	          printf(" ***No element is present in Modern Periodic Table with the given Atomic Number*** ");
	     break;

    case 'M':

	     printf("\nEnter the Mass number of the Element :");
         scanf("%lf",&mass_num);

         if(mass_num==1.01)
	          printf("\n Element name: Hydrogen\n Symbol: H\n Atomic number: 1\n Group number: IA  or 1\n Group name: Alkali metals\n Period number: 1\n Block: s-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==4.00)
	              printf("\n Element name: Helium\n Symbol: He\n Atomic number: 2\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 1\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==6.94)
                  printf("\n Element name: Lithium\n Symbol: Li\n Atomic number: 3\n Group number: IA  or 1\n Group name: Alkali metals\n Period number: 2\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==9.01)
                  printf("\n Element name: Beryllium\n Symbol: Be\n Atomic number: 4\n Group number:  IIA  or 2\n Group name: Alkali Earth metals\n Period number: 2\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==10.81)
                  printf("\n Element name: Boron\n Symbol: B\n Atomic number: 5\n Group number:  IIIA  or 13\n Group name: Boron Family\n Period number: 2\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==12.01)
                  printf("\n Element name: Carbon\n Symbol: C\n Atomic number: 6\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 2\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(mass_num==14.01)
                  printf("\ nElement name: Nitrogen\n Symbol: N\n Atomic number: 7\n  Group number: V A or 15\n Group name: Pnictogens\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==16.00)
                  printf("\n Element name: Oxygen\n Symbol: O\n Atomic number: 8\n  Group number: VI A or 16\n Group name: Chalcogens\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==19.00)
                  printf("\n Element name: Fluorine\n Symbol: F\n Atomic number: 9\n Group number: VII A or 17\n Group name: Halogens\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==20.18)
                  printf("\n Element name: Neon\n Symbol: Ne\n Atomic number: 10\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 2\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==22.99)
                  printf("\n Element name: Sodium\n Symbol: Na\n Atomic number: 11\n Group number: IA  or 1\n Group name: Alkali metals\n Period number: 3\n Block: s-block\n Physical state: Solid\n It is Non-metal\n");

         else if(mass_num==24.31)
                  printf("\n Element name: Magnesium\n Symbol: Mg\n Atomic number: 12\n Group number: IIA  or 2\n Group name: Alkali Earth metals\n Period number: 3\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==26.98)
                  printf("\n Element name: Aluminium\n Symbol: Al\n Atomic number: 13\n Group number: IIIA  or 13\n Group name: Boron Family\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==28.09)
	              printf(" \nElement name: Silicon\n Symbol: Si\n Atomic number: 14\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==28.09)
	              printf("\n Element name: Phosphorus\n Symbol: P\n Atomic number: 15\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(mass_num==32.06)
                  printf("\n Element name: Sulphur\n Symbol: S\n Atomic number: 16\n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 3\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

         else if(mass_num==35.45)
	              printf("\n Element name: Chlorine\n Symbol: Cl\n Atomic number: 17\n Group number: VII A or 17\n Group name: Halogens\n Period number: 3\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==39.95)
	              printf("\n Element name: Argon\n Symbol: Ar\n Atomic number: 18\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 3\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==39.10)
	              printf("\n Element name: Potassium\n Symbol: K\n Atomic number: 19\n Group number:  IA  or 1\n Group name: Alkali metals\n Period number: 4\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==40.08)
	              printf("\n Element name: Calcium\n Symbol: Ca\n Atomic number: 20\n Group number: IIA or 2\n Group name: Alkali Earth metals\n Period number: 4\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==44.96)
	              printf("\n Element name: Scandium\n Symbol: Sc\n Atomic number: 21\n Group number: III B or 3\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==47.90)
	              printf("\n Element name: Titanium\n Symbol: Ti\n Atomic number: 22\n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==50.94)
	              printf("\n Element name: Vanadium\n Symbol: V\n Atomic number: 23\n Group number: V B or 5\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==51.99)
                  printf("\n Element name: Chromium\n Symbol: Cr\n Atomic number: 24\n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==54.94)
                  printf("\n Element name: Manganese\n Symbol: Mn\n Atomic number: 25\n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==55.85)
	              printf("\n Element name: Iron\n Symbol: Fe\n Atomic number: 26\n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==58.93)
	              printf("\n Element name: Cobalt\n Symbol: Co\n Atomic number: 27\n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==58.70)
	              printf("\n Element name: Nickel\n Symbol: Ni\n Atomic number:  28\n Group number: VIII or 10 Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==63.55)
	              printf("\n Element name: Copper\n Symbol: Cu\n Atomic number:  29\n Group number: I B or 11\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==65.38)
	              printf("\n Element name: Zinc\n Symbol: Zn\n Atomic number:  30\n Group number: II B or 12\n Group name: Transition Elements\n Period number: 4\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==69.72)
	              printf("\n Element name: Gallium\n Symbol: Ga\n Atomic number: 31\n Group number: III A or 13\n Group name: Boron Family\n Period number: 4\n Block: p-block\n Physical state: Liquid\n It is Metal\n");

         else if(mass_num==72.59)
	              printf("\n Element name: Germanium\n Symbol: Ge\n Atomic number: 32\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==74.92)
	              printf("\n Element name: Arsenic\n Symbol: As\n Atomic number: 33\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==78.97)
	              printf("\n Element name: Selenium\n Symbol: Se\n Atomic number: 34\n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 4\n Block: p-block\n Physical state: Solid\n It is Non-metal\n");

	     else if(mass_num==79.90)
	              printf("\n Element name: Bromine\n Symbol: Br\n Atomic number: 35\n Group number: VII A or 17\n Group name: Halogens\n Period number: 4\n Block: p-block\n Physical state: Liquid\n It is Non-metal\n");

         else if(mass_num==83.80)
	              printf("\n Element name: Krypton\n Symbol: Kr\n Atomic number: 36\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 4\n Block: p-block\n  \n is a   Gas . It is Non-metal\n");

	     else if(mass_num==85.47)
	              printf("\n Element name: Rubidium\n Symbol: Rb \n Atomic number: 37\n Group number: I A or 1\n Group name: Alkali metals\n Period number: 5\n Block: s-block\n Physical state: Solid\n It is Metal\n");

	     else if(mass_num==87.62)
	              printf("\n Element name: Strontium\n Symbol: Sr\n Atomic number: 38\n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 5\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==88.91)
	              printf("\n Element name: Yttrium\n Symbol: Y\n Atomic number:  39\n Group number: III B or 3\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

	     else if(mass_num==91.22)
	              printf("\n Element name: Zirconium\n Symbol: Zr\n Atomic number: 40\n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

	     else if(mass_num==92.91)
	              printf("\n Element name: Niobium\n Symbol: Nb\n Atomic number:  41\n Group number: V B or 5\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

	     else if(mass_num==95.94)
	              printf("\n Element name: Molybdenum\n Symbol: Mo\n Atomic number:  42\n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

	     else if(mass_num==98.91)
	              printf("\n Element name: Technetium\n Symbol: Tc\n Atomic number:  43\n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n  \n is a  Synthetic . It is Metal\n");

         else if(mass_num==101.07)
	              printf("\n Element name: Ruthenium\n Symbol: Ru\n Atomic number:  44\n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==102.91)
	              printf("\n Element name: Rhodium\n Symbol: Rh\n Atomic number:  45\n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==106.42)
	              printf("\n Element name: Palladium\n Symbol: Pd\n Atomic number:  46\n Group number: VIII or 10 Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==107.87)
	              printf("\n Element name: Silver\n Symbol: Ag\n Atomic number:  47\n Group number: I B or 11\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==112.41)
	              printf("\n Element name: Cadmium\n Symbol: Cd\n Atomic number:  48\n Group number: II B or 12\n Group name: Transition Elements\n Period number: 5\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==114.82)
	              printf("\n Element name: Indium\n Symbol: In\n Atomic number:  49\n Group number: III A or 13\n Group name: Boron Family\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==118.71)
	              printf("\n Element name: Tin\n Symbol: Sn\n Atomic number: 50\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==121.76)
	              printf("\n Element name: Antimony\n Symbol: Sb\n Atomic number:  51\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==127.60)
	              printf("\n Element name: Tellurium\n Symbol: Te \n Atomic number: 52\n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Metalloid\n");

         else if(mass_num==126.90)
	              printf("\n Element name: Iodine\n Symbol: I\n Atomic number:  53\n Group number: VII A or 17\n Group name: Halogens\n Period number: 5\n Block: p-block\n Physical state: Solid\n It is Non-metal\n  ");

         else if(mass_num==131.30)
	              printf("\n Element name: Xenon\n Symbol: Xe\n Atomic number:  54\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 5\n Block: p-block\n Physical state: Gas\n It is Non-metal\n  ");

         else if(mass_num==132.91)
	              printf("\n Element name: Caesium\n Symbol: Cs\n Atomic number:  55\n Group number: I A or 1\n Group name: Alkali metals\n Period number: 6\n Block: s-block\n Physical state: Liquid\n It is Metal\n");

         else if(mass_num==137.33)
	              printf("\n Element name: Barium\n Symbol: Ba\n Atomic number:  56\n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 6\n Block: s-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==138.91)
                  printf("\n Element name: Lanthanum\n Symbol: La\n Atomic number:  57\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==140.12)
	              printf("\n Element name: Cerium\n Symbol: Ce\n Atomic number:  58\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==140.91)
	              printf("\n Element name: praseodymium\n Symbol: Pr\n Atomic number:  59\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==144.24)
	              printf("\n Element name: Neodymium\n Symbol: Nd\n Atomic number:  60\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==144.91)
	              printf("\n Element name: Promethium\n Symbol: Pm\n Atomic number:  61\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==150.36)
	              printf("\n Element name: Samarium\n Symbol: Sm\n Atomic number:  62\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==151.96)
	              printf("\n Element name: Europium\n Symbol: Eu\n Atomic number:  63\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==157.25)
	              printf("\n Element name: Gadolinium\n Symbol: Gd\n Atomic number:  64\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==158.93)
	              printf("\n Element name: Terbium\n Symbol: Tb\n Atomic number:  65\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==162.50)
	              printf("\n Element name: Dysprosium\n Symbol: Dy\n Atomic number:  66\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==164.93)
	              printf("\n Element name: Holmium\n Symbol: Ho\n Atomic number:  67\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==167.26)
	              printf("\n Element name: Erbium\n Symbol: Er\n Atomic number:  68\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==168.93)
	              printf("\n Element name: Thulium\n Symbol: Tm\n Atomic number:  69\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==173.06)
                  printf("\n Element name: Ytterbium\n Symbol: Yb\n Atomic number:  70\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==174.97)
	              printf("\n Element name: Lutetium\n Symbol: Lu\n Atomic number:  71\n Group number: III B or 3\n Group name: Lanthanides\n Period number: 6\n Block: f-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==178.49)
	              printf("\n Element name: Hafnium\n Symbol: Hf\n Atomic number:  72\n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==180.95)
	              printf("\n Element name: Tantalum\n Symbol: Ta\n Atomic number:  73\n Group number: V B or 5\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==183.85)
	              printf("\n Element name: Tungsten\n Symbol: W\n Atomic number:  74\n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==186.21)
	              printf("\n Element name: Rhenium\n Symbol: Re\n Atomic number:  75\n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==190.23)
	              printf("\n Element name: Osmium\n Symbol: Os\n Atomic number:  76\n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==192.22)
	              printf("\n Element name: Iridium\n Symbol: Ir\n Atomic number:  77\n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==195.09)
	              printf("\n Element name: Platinum\n Symbol: Pt\n Atomic number:  78\n Group number: VIII or 10 Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==196.97)
	              printf("\n Element name: Gold\n Symbol: Au\n Atomic number: 79\n Group number: I B or 11\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==200.59)
	              printf("\n Element name: Mercury\n Symbol: Hg\n Atomic number:  80\n Group number: II B or 12\n Group name: Transition Elements\n Period number: 6\n Block: d-block\n Physical state: Liquid\n It is Metal\n");

         else if(mass_num==204.38)
	              printf("\n Element name: Thallium\n Symbol: Tl\n Atomic number:  81\n Group number: III A or 13\n Group name: Boron Family\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==207.20)
	              printf("\n Element name: Lead\n Symbol: Pb\n Atomic number:  82\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==208.98)
	              printf("\n Element name: Bismuth\n Symbol: Bi\n Atomic number:  83\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n \t (AND) \t \nElement name: Polonium\n  Symbol: Po\n Atomic number:  84\n   Group number: VI A or 16\n Group name: Chalcogens\n  Period number: 6\n Block: p-block\n Physical state: Solid\n It is Metal\n");

         else if(mass_num==209.98)
	              printf("\n Element name: Astatine\n Symbol: At\n Atomic number:  85\n Group number: VII A or 17\n Group name: Halogens\n Period number: 6\n Block: p-block\n Physical state: Solid\n It is Non-metal\n  ");

         else if(mass_num==222.02)
	              printf("\n Element name: Radon\n Symbol: Rn\n Atomic number:  86\n Group number: 0 or 18\n Group name: Noble gases\n Period number: 6\n Block: p-block\n Physical state: Gas\n It is Non-metal\n");

         else if(mass_num==223.02)
	              printf("\n Element name: Francium\n Symbol: Fr\n Atomic number:  87\n Group number: I A or 1\n Group name: Alkali metals\n Period number: 7\n Block: s-block\n  \n is a  Liquid(radioactive)  . It is Metal\n  ");

         else if(mass_num==226.03)
	              printf("\n Element name: Radium\n Symbol: Ra\n Atomic number:  88\n Group number: II A or 2\n Group name: Alkali Earth metals\n Period number: 7\n Block: s-block\n  \n is a  Solid(Radioactive)  . It is Metal\n  ");

         else if(mass_num==227.03)
	              printf("\n Element name: Actinium\n Symbol: Ac\n Atomic number:  89\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n  \n  f-block  Physical state: Solid\n It is Metal\n  ");

         else if(mass_num==232.04)
	              printf("\n Element name: Thorium\n Symbol: Th\n Atomic number:  90\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Solid\n It is Metal\n   ");

         else if(mass_num==231.04)
	              printf("\n Element name: Protactinium\n Symbol: Pa\n Atomic number:  91\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==238.03)
                  printf("\n Element name: Uranium\n Symbol: U\n Atomic number:  92\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==237.06)
	              printf("\n Element name: Neptunium\n Symbol: Np\n Atomic number:  93\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==244.06)
	              printf("\n Element name: Plutonium\n Symbol: Pu\n Atomic number:  94\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==243.06)
	              printf("\n Element name: Americium\n Symbol: Am\n Atomic number:  95\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==247.07)
	              printf("\n Element name: Curium\n Symbol: Cm\n Atomic number:  96\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n \t (AND) \t \nElement name: Berkelium\n  Symbol: Bk\n Atomic number:  97\n   Group number: III B or 3\n Group name: Actinides\n  Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==251.08)
	              printf("\n Element name: Californium\n Symbol: Cf\n Atomic number:  98\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n  \n  f-block  Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==252.00)
	              printf("\n Element name: Einsteinium\n Symbol: Es\n Atomic number:  99\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==257.10)
	              printf("\n Element name: Fermium\n Symbol: Fm\n Atomic number:  100\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==258.10)
	              printf("\n Element name: Mendelevium\n Symbol: Md\n Atomic number:  101\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==259.10)
	              printf("\n Element name: Nobelium\n Symbol: No\n Atomic number:  102\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==262.11)
	              printf("\n Element name: Lawrencium\n Symbol: Lr\n Atomic number:  103\n Group number: III B or 3\n Group name: Actinides\n Period number: 7\n Block: f-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==267.12)
	              printf("\n Element name: Rutherfordium\n Symbol: Rf\n Atomic number:  104\n Group number: IV B or 4\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==268.12)
	              printf("\n Element name: Dubnium\n Symbol: Db\n Atomic number:  105\n Group number: V B or 5\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==271.13)
	              printf("\n Element name: Seaborgium\n Symbol: Sg\n Atomic number:  106\n Group number: VI B or 6\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==274.14)
	              printf("\n Element name: Bohrium\n Symbol: Bh\n Atomic number:  107\n Group number: VII B or 7\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==277.15)
	              printf("\n Element name: Hassium\n Symbol: Hs\n Atomic number:  108\n Group number: VIII or 8\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==278.15)
	              printf("\n Element name: Meitnerium\n Symbol: Mt\n Atomic number:  109\n Group number: VIII or 9\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==281.16)
	              printf("\n Element name: Darmstadtium\n Symbol: Ds\n Atomic number:  110\n Group number: VIII or 10\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==282.16)
	              printf("\n Element name: Roentgenium\n Symbol: Rg\n Atomic number:  111\n Group number: I B or 11\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==285.18)
	              printf("\n Element name: Copernicium\n Symbol: Cn\n Atomic number:  112\n Group number: II B or 12\n Group name: Transition Elements\n Period number: 7\n Block: d-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==286.18)
	              printf("\n Element name: Nihonium\n Symbol: Nh\n Atomic number:  113\n Group number: III A or 13\n Group name: Boron Family\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==289.19)
	              printf("\n Element name: Flerovium\n Symbol: Fl\n Atomic number:  114\n Group number: IV A or 14\n Group name: Carbon Family\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==290.20)
	              printf("\n Element name: Moscovium\n Symbol: Mc\n Atomic number:  115\n Group number: V A or 15\n Group name: Pnictogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

         else if(mass_num==293.20)
	              printf("\n Element name: Livermorium\n Symbol: Lv\n Atomic number:  116\n Group number: VI A or 16\n Group name: Chalcogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Metal\n");

	     else if(mass_num==294.21)
		          printf("\n Element name: Tennessine\n Symbol: Ts\n Atomic number:  117\n Group number: VII A or 17\n Group name: Halogens\n Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Non-metal\n \t (AND) \t\nElement name: Oganesson\n  Symbol: Og\n Atomic number:  118\n   Group number: 0 or 18\n Group name: Noble gases\n  Period number: 7\n Block: p-block\n Physical state: Synthetic\n It is Non-metal\n");

	     else
		     printf("***No Element is present in Modern Periodic Table with the given Mass Number***");
	     break;
	     default:
	     printf("nothing");

         return 0;
    }
}
