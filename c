#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
int main() { 
int choice, vehino;
int r;
printf("########################################################################################################################\n");
printf("\t\t\t\tWELCOME\n");
printf("\t\t\tCHENNAI TOLL PLAZA\n");
printf("\t\t\tVEHICLE TYPE SINGLE TRIP RETURN WITHIN 24HOURS MONTHLY PASS \n");
printf(" (PER VEHICLE). (PER VEHICLE) (PER VEHICLE). );
printf("1.\t\t\tCAR/JEEP Rs.70 Rs.35 Rs.2075. );
printf("2.\t\t\tBUS/LORRY Rs.95 Rs.60 Rs.4225 );
printf("3.\t\t\tLCV Rs.105 Rs.90 Rs.9025 );
printf("4.\t\t\tCONTAINERS rs.150 Rs.120 Rs.12840. );
printf("####################################################################################################### #################\n\n");
printf("\nENTER VEHICLE NUMBER: "); 
scanf("%d",&vehino);
printf("\nSELECT YOUR CHOICE\n");
printf("1.SINGLE TRIP");
printf("\n2.RETURN WITHIN 24HOURS");
printf("\n3.MONTHLY PASS");
printf("\n ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice) {
case 1: printf("ENTER VECHILE TYPE : ");
scanf("%d",&r);
if(r==1) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######"); 
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for SINGLE TRIP for CAR/JEEP = RS.70");
printf("\n TOTAL AMOUNT TO BE PAID :- 70");
break; }
else if(r==2) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######");
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for SINGLE TRIP for BUS/LORRY = RS.95");
printf("\n TOTAL AMOUNT TO BE PAID :- 95");
break; } 
else if(r==3) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######");
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for SINGLE TRIP for LCV = RS.105"); 
printf("\n TOTAL AMOUNT TO BE PAID :- 105");
break; } 
else if(r==4) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######"); 
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for SINGLE TRIP for CONTAINERS = RS.150"); 
printf("\n TOTAL AMOUNT TO BE PAID :- 70");
break; } 
case 2:
printf("\n ENTER VECHILE TYPE : ");
scanf("%d",&r);
if(r==1){
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######");
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for RETURN JOURNEY of CAR/JEEP = RS.35 ");
printf("\n TOTAL AMOUNT TO BE PAID :- 35");
break; }

else if(r==2) { 
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######"); 
printf("\n VEHICLE NUMBER :- %d",vehino); 
printf("\nCost for RETURN JOURNEY of BUS/LORRY = Rs.60");
printf("\n TOTAL AMOUNT TO BE PAID :- 60");
break; }
else if(r==3) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######"); 
printf("\n VEHICLE NUMBER :- %d",vehino);
printf("\nCost for RETURN JOURNEY for LCV = Rs.80");
printf("\n TOTAL AMOUNT TO BE PAID :- 80"); break; }
if(r==4) {
printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########");
printf("\n####### YOUR BILL #######");
printf("\n VEHICLE NUMBER :- %d",vehino); printf("\nCost for Monthly Pass for CONTAINERS = Rs.120"); printf("\n TOTAL AMOUNT TO BE PAID :- 120"); break; }

case 3: printf("\n ENTER VECHILE TYPE : "); scanf("%d",&r); if(r==1) { printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########"); printf("\n####### YOUR BILL #######"); printf("\n YOUR VEHICLE NUMBER %d TAKEN MONTLY PASS",vehino); printf("\n HAVE A SAFE JOURNEY"); }

if(r==2) { printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########"); printf("\n####### YOUR BILL #######"); printf("\n YOUR VEHICLE NUMBER %d TAKEN MONTLY PASS",vehino); printf("\n HAVE A SAFE JOURNEY"); }

if(r==3) { printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########"); printf("\n####### YOUR BILL #######"); printf("\n YOUR VEHICLE NUMBER %d TAKEN MONTLY PASS",vehino); printf("\n HAVE A SAFE JOURNEY"); }

if(r==4) { printf("######## WELCOME TO CHENNAI TOLL PLAZA ##########"); printf("\n####### YOUR BILL #######"); printf("\n YOUR VEHICLE NUMBER %d TAKEN MONTLY PASS",vehino); printf("\n HAVE A SAFE JOURNEY"); } getch(); }
