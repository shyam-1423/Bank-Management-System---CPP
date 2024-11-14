#include<iostream>
#include<string>
using namespace std;
	/*
			***Bank Management System***" 
			1. Open an Account
			2. Balance Enquiry
			3. Deposit
			4. Withdrawal
			5. Modify Account
			6. Transactions
	*/
struct BankManagementSystem {
    string F_Name,L_Name,AH_Add,Mobile_Number;
    int Acc_Number,Dpst_amount,AccNum,WAmount,Initial_blnc; 
    string Branch_Address = "Branch : Meena Bazar, \n \t Kapadwanj,\n \t Suvidha Complex Meena Bazar,\n \t 387620.";
    int TransactionHistory[10]; 
    int transactionCount = 0;
    string IFSC="SBINO03601";
}BMS;

class Bank{
	public:
		
		//Open Account
		
		void openAccount(){
			
			cout<<"--------------: Account Opening :--------------"<<endl<<endl;
			
			cout<<"Enter your First Name : ";
			cin>>BMS.F_Name;
			cout<<"Enter your Last Name : ";
			cin>>BMS.L_Name;
			cout<<"Enter Your Mobile Number : ";
			cin>>BMS.Mobile_Number;
			cout<<"Create Bank Account Number : ";
			cin>>BMS.Acc_Number;

//			int ExistAcc = BMS.AccNum;
//	
//			if (ExistAcc == BMS.Acc_Number) 
//			{
//	    		cout << "Account exists." << endl;
//	    		exit(0);
//			} 
//			else {
//			    cout << "Account not found !" << endl;
//			    cout << "You can continue creating your account" << endl;
//			}
//			
			cout<<"Enter Your Address : ";
			cin>>BMS.AH_Add;
			cout<<"Porvide your Initial Balance : ";
			cin>>BMS.Initial_blnc;
							

			//Printing account details
			cout<<endl;

			cout<<"Congratulation...!"<<endl;
			cout<<"Your Account is Created Successfully...!"<<endl<<endl;
			
			cout<<"-----------: Account Details :-----------"<<endl<<endl;
			cout<<"Account Number : "<<BMS.Acc_Number<<endl;
			cout<<"Name : "<<"Mr."<<BMS.F_Name<<" "<<BMS.L_Name<<endl;
			cout<<"Mobile Number : "<<BMS.Mobile_Number<<endl;
			cout<<"Initial Balance : "<<BMS.Initial_blnc<<endl;
			cout<<BMS.Branch_Address<<endl;
			cout<<"IFSC : "<<BMS.IFSC<<endl;
		}
		
		//Balance inquiry
		
		void balanceEnquiry() {
			cout<<"----------------: Balance Inquiry :----------------"<<endl<<endl;
		
			cout<<"Enter Account Number : ";
			cin>>BMS.AccNum;
			
		    if(BMS.AccNum == BMS.Acc_Number)
			{
		        cout<<"Available Balance : " <<BMS.Initial_blnc<<endl;
		        cout<<"Balance fetched successfully..!"<<endl<<endl;
		    }
			else{
				cout<<"Entered Account Number : "<<BMS.AccNum<<" is Invalid !"<<endl;
		        cout<<"Account not found!"<<endl;
		    }
    	}
    	
    	//Deposite -> add 
    	
    	void Deposite(){
    		
    		cout<<"----------------: Deposite Amount :----------------"<<endl<<endl;
			
			
    		cout<<"Enter Your Account Number : ";
    		cin>>BMS.AccNum;
    		
    		if(BMS.AccNum == BMS.Acc_Number){
    			
    			cout<<"Available Balance in Your Account : "<<BMS.Initial_blnc<<"\n\n";
    			cout<<"Enter amount you want to deposite : ";
    			cin>>BMS.Dpst_amount;
    		
				
				BMS.Initial_blnc+=BMS.Dpst_amount;
    			cout<<BMS.Dpst_amount<<" Deposite Successfully..!"<<endl<<endl;
    			cout<<"Available Balance After Deposite : "<<BMS.Initial_blnc<<endl;	
			}
			else{
				cout<<"Entered Account Number "<<BMS.AccNum<<" is Invalid !"<<endl;
		        cout<<"Account not found!"<<endl<<endl;
			}
		}
		
		//withdrawing money
		
		void Withdrawl(){
			cout<<"----------------: Withdraw Amount :----------------"<<endl<<endl;
			
			cout<<"Enter your account Number : ";
			cin>>BMS.AccNum;
			
			
			if(BMS.AccNum == BMS.Acc_Number){
				
				cout<<"Available Balance in Your Account : "<<BMS.Initial_blnc<<"\n\n";
				
				cout<<"Enter Withdrawl Amount : ";
				cin>>BMS.WAmount;
				if(BMS.Initial_blnc>=BMS.WAmount){
					
					cout<<BMS.WAmount<<" Withdrew Successfully..!"<<endl<<endl;
				
					BMS.Initial_blnc-=BMS.WAmount;
					cout<<"Available Balance After Deposite : "<<BMS.Initial_blnc<<endl;	
				}
				else{
					cout<<"Insufficient Balance!"<<endl;
				}			
			}
			else{
				cout<<"Entered Account Number "<<BMS.AccNum<<" is Invalid !"<<endl;
		        cout<<"Account not found!"<<endl<<endl;
			}	
		}
		
//		Modify Account

		void ModifyAccInfo(){
			
			cout<<"----------------: Modify Account Information :----------------"<<endl<<endl;
			
			cout<<"Enter your account Number : ";
			cin>>BMS.AccNum;
			
			if(BMS.AccNum == BMS.Acc_Number){
				
				cout<<"Account found. You can modify the following information:"<<endl;	
				int M_choice;
				
				while(M_choice<4)
				{
				
					cout<<"1. First Name"<<endl;
					cout<<"2. Last Name"<<endl;
					cout<<"3. Mobile Number"<<endl;
					cout<<"4. Address"<<endl;
					cout<<"5. Exit"<<endl;
					
					cout<<"Enter your choice you want to modify (1-5) : ";
					cin>>M_choice;
					
					switch(M_choice){
						case 1:
							cout<<"Current Account Holder's First Name : "<<BMS.F_Name<<endl;
							
							cout<<"Enter Your New First Name : ";
							cin>>BMS.F_Name;
							break;
							
						case 2:
							cout<<"Current Account Holder's Last Name : "<<BMS.L_Name<<endl;	
							
							cout<<"Enter Your New Last Name : ";
							cin>>BMS.L_Name;
							break;
						case 3:
							cout<<"Current Account Holder's Mobile Number : "<<BMS.Mobile_Number<<endl;
							
							cout<<"Enter Your New Mobile Number : ";
							cin>>BMS.Mobile_Number;
							break;	
						case 4:
							cout<<"Current Account Holder's Mobile Number : "<<BMS.AH_Add<<endl;
							
							int newAH_Add;
							
							cout<<"Enter Your New Address : ";
							cin>>BMS.AH_Add;
							break;
						default:
							cout<<"Invalid Choice"<<endl;	
					}	 
				}       	
			}
			else{
				cout<<"Account not found...! "<<endl;
			}
		}
		
		//Display Modified Account Details
		
		void ModifiedAccInfo(){
			
				cout<<"-----------: Modified Account Details :-----------"<<endl<<endl;
				cout<<"Account Number : "<<BMS.Acc_Number<<endl;
				cout<<"Account Holder's Name : "<<"Mr."<<BMS.F_Name<<" "<<BMS.L_Name<<endl;
				cout<<"Mobile Number : "<<BMS.Mobile_Number<<endl;
				cout<<"Account Holder's Address : "<<BMS.AH_Add<<endl;
				cout<<"Initial Balance : "<<BMS.Initial_blnc<<endl;
				cout<<"Branch Address : "<<BMS.Branch_Address<<endl;
		}
		
		//Transactions
		
		void Transactions() 
		{
		    cout<<"---------------- : Account Transaction : ----------------"<<endl<<endl;
		
		    cout<<"Enter your account number : ";
		    cin>>BMS.AccNum;
		
		    int deposite_2 = BMS.Initial_blnc;
		    int Amt_Withdrawal_2;
		    
		    cout<<"Your Account : "<<BMS.AccNum<<" Bank Balance is = "<<BMS.Initial_blnc<<endl;
		    
		    
		    cout<<"Enter Deposit Amount: ";
		    cin>>BMS.Dpst_amount;
		    
		    if (BMS.Dpst_amount>0) {
		    	
		        deposite_2 += BMS.Dpst_amount;
		        cout<<"Transaction History Of Deposit Amount: "<<BMS.Dpst_amount<<endl;
		        cout<<"After Deposit, Bank Balance Is: "<< deposite_2<<endl;
		
		        // Record the transaction in TransactionHistory and increment transactionCount
		        
		        if(BMS.transactionCount<10){
		            BMS.TransactionHistory[BMS.transactionCount]=BMS.Dpst_amount;
		            BMS.transactionCount++;
		        } 
				else 
				{
		            cout<<"Transaction history is full, cannot record more transactions."<<endl;
		        }
		    } 
			else{
		        cout<<"Transaction is None."<<endl;
		    }
		    
		    // Withdrawal Section
		    cout << "Enter Withdrawal Amount: ";
		    cin >> BMS.WAmount;
		    
		    if (BMS.WAmount > 0 && BMS.WAmount <= deposite_2) 
			{
				//balance after withdrawal
		        Amt_Withdrawal_2 = deposite_2 - BMS.WAmount; 
		        cout << "Transaction History Of Withdrawal Amount : "<<BMS.WAmount<< endl;
		        cout << "After Withdrawal, Bank Balance Is : "<<Amt_Withdrawal_2<< endl;
		
		        if (BMS.transactionCount < 100) 
				{
		            BMS.TransactionHistory[BMS.transactionCount]=-BMS.WAmount;
		            BMS.transactionCount++;
		        } 
				else 
				{
		            cout<<"Transaction history is full, cannot record more transactions."<<endl;
		        }
		    }
			else if (BMS.WAmount >= deposite_2) 
			{
		        cout << "Insufficient balance!" << endl;
		    } 
			else 
			{
		        cout << "Transaction is None." << endl;
		    }
		
		    // Display Transaction History
		    cout << "Transaction History for Account Number : "<<BMS.AccNum<< endl;
		    for (int i = 0; i < BMS.transactionCount;i++) 
			{
		        cout<<"Transaction " << i + 1 << ": "<<(BMS.TransactionHistory[i] > 0 ?"Deposit ":"Withdrawal ")
		             <<(BMS.TransactionHistory[i])<<endl;
		    }
		    
		    BMS.Initial_blnc = Amt_Withdrawal_2;
		    cout << "Final Bank Balance : " << BMS.Initial_blnc << endl;
		}
};
int main(){
	Bank bank;
	int choice;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"|\t\t-: State Bank Of India (SBI) :- \t |"<<endl;
	cout<<"----------------------------------------------------------"<<endl<<endl;

	while(choice<8){
		
		cout<<"1. Open new Account."<<endl;
		cout<<"2. Balance Enquiry "<<endl;
		cout<<"3. Deposit"<<endl;
		cout<<"4. Withdrawal"<<endl;
		cout<<"5. Modify Account"<<endl;
		cout<<"6. Transactions"<<endl;
		cout<<"7. Display Account"<<endl;
		cout<<"8. Exit"<<endl;
		
		cout<<"Enter your choice (1-7) : ";
		cin>>choice;
		cout<<endl;
		switch(choice){
			case 1:
				//openAccount() function for opening account
				bank.openAccount();
				break;
			case 2:
				//balanceEnquiry() function for balance inquiry
				bank.balanceEnquiry();
				break;
			case 3:
				//Deposite() function for Deposite Money
				bank.Deposite();
				break;
			case 4:
				//Withdrawl() function for Withdraw Money
				bank.Withdrawl();
				break;
			case 5:
				//ModifyAccInfo() function for Modifying user account informations like first name,last name,mobile number and address.
				bank.ModifyAccInfo();
				break;
			case 6:
				//Transactions() function to display Transaction history
				bank.Transactions();
				break;
			case 7:
				//ModifiedAccInfo() function to Modified user account information
				bank.ModifiedAccInfo();
				break;
			default:
				cout<<"Exiting Bank..."<<endl;
				cout<<choice<<" Invalid Choice";
				break;
		}
	}	
}
