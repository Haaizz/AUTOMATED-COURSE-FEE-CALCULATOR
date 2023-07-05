#include <iostream>
using namespace std ;

string getMonth() ;
string displayMonth (string bulan);
int getNoOfStudent();
int *setFee(int pelajar);
int displayMonthFee(int arrayStudentFee[],int pelajar );
int calcStudentFee(int arrayStudentFee[],int pelajar);
int feeActivity(int sum);
int displayFinalTotalFee(int sum , int yuran);

int main ()
{
	//DISPLAY OUR GROUP MATE 
	cout <<"_______________________________________________________________________________________________________________________"<<endl;
	cout <<"|                                                                                                                     |"<<endl;
	cout <<"|	                           GROUP PROJECT FROM US : FAIZ || AQEEL || ARINA                                     |"<<endl;
	cout <<"|_____________________________________________________________________________________________________________________|"<<endl;
	
	//DECLARATION
	string bulan ;
	bulan = getMonth();
	
	//FUNCTION CALL
	displayMonth (bulan);
	
	
	int pelajar;
	pelajar=getNoOfStudent();
	if(pelajar<20){
		return 0;
	}
	
	
	int *arrayStudentFee;
	arrayStudentFee = setFee(pelajar);
	displayMonthFee(arrayStudentFee,pelajar);
	
	
	
	int sum=calcStudentFee( arrayStudentFee,pelajar);
	feeActivity(sum);
	
	int yuran=feeActivity(sum);
	displayFinalTotalFee(sum , yuran);
	

}

//FUNCTION GET MONTH NAME FROM NUMBER OF MONTH ENTERED BY USER AND RETURN THE VALUE TO THE FUNCTION MAIN
string getMonth() 
{
	
	string bulan ;
	int noBulan ;
	bool ulang=false;
	do{
	
	cout <<endl;
	cout <<"	Please Enter Month Number (1-12) : ";
	cin >> noBulan ;
	
	switch(noBulan){
		case 1:
			bulan="JANUARY";
			ulang=false;
			break;
		case 2:
			bulan="FEBRUARY";
			ulang=false;
			break;
		case 3:
			bulan="MARCH";
			ulang=false;
			break;
		case 4:
			bulan="APRIL";
			ulang=false;
			break;
		case 5:
			bulan="MAY";
			ulang=false;
			break;
		case 6:
			bulan="JUNE";
			ulang=false;
			break;
		case 7:
			bulan="JULY";
			ulang=false;
			break;
		case 8:
			bulan="AUGUST";
			ulang=false;
			break;
		case 9:
			bulan="SEPTEMBER";
			ulang=false;
			break;
		case 10:
			bulan="OCTOBER";
			ulang=false;
			break;
		case 11:
			bulan="NOVEMBER";
			ulang=false;
			break;
		case 12:
			bulan="DECEMBER";
			ulang=false;
			break;
		default:
			cout<<"	That Is Not A Number Of A Month !\n";
			ulang=true;
		
	}
}while(ulang);
	
	cout << endl ;
	
	return bulan ;
}

//FUNCTION RECEIVE AND DISPLAY MONTH NAME AND RETURN BACK TO THE FUNCTION MAIN
string displayMonth (string bulan)
{
	cout <<"	The Month Is : "<< bulan <<endl;
	return bulan;
}

//FUNCTION GET THE NUMBER OF STUDENT FROM USER AND RETURN THE VALUE TO THE FUNCTION MAIN
int getNoOfStudent()
{
	int pelajar;
	
	cout <<endl;
	cout <<"	Enter Number Of Registered Students (Must Be At Least 20) : ";
	cin>>pelajar;
	
	if(pelajar < 20 )
	{
		cout <<endl;
		cout <<"	The Tuition Class Cannot Be Conducted !";
	}
	else 
	{
		cout <<endl;
		cout << "	Total Students For This Month Is: "<<pelajar<< "\n\n";
	}
	
	return pelajar ;
}

//FUNCTION SET FEE FOR EVERY STUDENT
int *setFee(int pelajar){
    int *arrayStudentFee = new int[pelajar];
    int courseCode;
     
     //DISPLAY THE COURSE INFORMATION
	cout <<"======================================================================================================================="<<endl;
	cout <<"|	[1]	Java Programming                                                                                      |"<<endl;
	cout <<"|	[2]	MS Office (Word, Exel, Power Point)                                                                   |"<<endl;
	cout <<"|	[3]	Autocad                                                                                               |"<<endl;
	cout <<"|                                                                                                                     |"<<endl;
	cout <<"|	[0]	To Exit Input Program                                                                                 |"<<endl;
	cout <<"======================================================================================================================="<<endl;
	cout <<endl;
	
	cout <<"	Enter Course Code of Students \n\n";
	
    for (int i=1; i<=pelajar; i++){
        
		cout <<"	Student " << i << ": ";
        cin >> courseCode;
        
        if(courseCode == 0){
            cout << "	User Has Cancelled The Calculation";
            exit (0);
        }
		else if(courseCode == 1){
            arrayStudentFee[i] = 200;
        }
		else if(courseCode == 2){
            arrayStudentFee[i] = 150;
        }
		else if(courseCode == 3){
            arrayStudentFee[i] = 100;
        }
		else 
		{
			cout <<endl;
            cout << "	Invalid Code. Please Enter The Correct Code!"<<endl;
            i = i - 1;
        }
    }
    return arrayStudentFee;
}

//FUNCTION DISPLAY THE MONTH FEE FOR EACH STUDENT
int displayMonthFee(int arrayStudentFee[],int pelajar )
{
	cout <<endl;
	cout <<"======================================================================================================================="<<endl;
	cout <<"|                                                                                                                     |"<<endl;
	cout <<"|	The Student's Fees Are :                                                                                      |"<<endl;
	cout <<"|                                                                                                                     |"<<endl;
	
	for(int i=1;i<=pelajar;i++)
	
		cout <<"|	Student "<<i<<" = RM "<<arrayStudentFee[i]<<"                                                                                           |"<<endl;
		cout <<"|                                                                                                                     |"<<endl;
		cout <<"======================================================================================================================="<<endl;
	
}

//FUNCTION CALCULATE TOTAL STUDENT FEE
int calcStudentFee(int arrayStudentFee[],int pelajar)
{	
	int sum=0,i;
	for(int i=1;i<=pelajar;i++){
		sum = sum + arrayStudentFee[i];
	}
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"|                                                     INVOICE                                                          |";
	cout<<"------------------------------------------------------------------------------------------------------------------------";
	cout<<"|                                                                                                                      |";
	cout <<"|	Total Student Fee For The Month Is :     RM"<<sum<<"                                                                |";
	
	return sum;
}

//FUCNTION CALCULATE STAFF ACTIVITY
int feeActivity(int sum)
{
	int yuran=0;
	if(sum>2500){
		yuran = sum*0.1;
	}	
	else{
		yuran=0;
	}
	return yuran ;
	
}

//FUNCTION DISPLAY THE FINAL TOTAL FEE
int displayFinalTotalFee(int sum , int yuran)
{
	
	cout <<"|	Charge For The Staff Activity Is   :      RM"<<yuran<<"                                                                |";
	cout <<"|                                                                                                                      |";
	cout <<"|	(10% WERE DEDUCTED FROM TOTAL FEE FOR STAFF ACTIVITY)                                                          |";
	cout <<"|                                                                                                                      |"; 	
	cout <<"========================================================================================================================";
	cout <<"|                                                                                                                      |";
	cout <<"|	Total Fee Is                       :     RM"<<sum-yuran<<"                                                                |";
	cout <<"|                                                                                                                      |";
	cout <<"========================================================================================================================"<<endl;
	cout <<"_______________________________________________________________________________________________________________________"<<endl;
	cout <<"|                                                                                                                     |"<<endl;
	cout <<"|	                           THANKS FOR USING WANA TRAINING CENTER ! <3                                         |"<<endl;
	cout <<"|_____________________________________________________________________________________________________________________|"<<endl;
}

















