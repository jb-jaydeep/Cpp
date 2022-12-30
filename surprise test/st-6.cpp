	case 2 : 
				
				cout << "====================================================================="<<endl;
				cout << "\t\tAapne Hindi language pasand kiya hay....."<< endl;
				cout << "====================================================================="<<endl;
				
				cout << "\t\t BOX OFFICE PE CHAL RAHI MOVIE ..."<<endl
					 << "---------------------------------------------------------------------"<<endl
					 << "Hera-feri ke liye 1 dabaye"<<endl
					 << "Dabang-2 ke liye 2 dabaye"<<endl
					 << "Race ke liye 3 dabaye"<<endl
					 << "KGF ke liye 4 dabaye"<<endl;
				cin  >> a;
				
				switch(a)
				{
					case 1 :
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Hera-feri movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 200 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 300 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 400 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*200;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*300;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*400;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
					//case dabang
					
					case 2 :
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Dabang movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 250 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 350 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 450 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*250;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*350;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*450;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
					//case race
					
					case 3 :
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Race movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 275 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 375 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 475 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*275;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*375;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*475;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
						//case kgf
						
					case 4 :
						
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne KGF movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 300 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 400 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 500 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*300;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*400;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*500;
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
			
				}	
			//case gujarati
			
				case 3 : 
				
				cout << "====================================================================="<<endl;
				cout << "\t\tTme Gujarati language pasand kri che....."<< endl;
				cout << "====================================================================="<<endl;
				
				cout << "\t\t BOX OFFICE PR CHALI RAHELA MOVIE..."<<endl
					 << "---------------------------------------------------------------------"<<endl
					 << "Hera-feri mate 1 dabavo"<<endl
					 << "Dabang-2 mate 2 dabavo"<<endl
					 << "Race mate 3 dabavo"<<endl
					 << "KGF mate 4 dabavo"<<endl;
				cin  >> a;
				
				switch(a)
				{
					case 1 :
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tTme Hera-feri movie Pasand kri che..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET NI CHATEGORIES ANE BHAV" << endl
							 << "\t\tNICHE AAPELA MATHI EK PASAND KARO..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet mate 1 dabavo   == 200 INR" << endl
							 << "golden Sheet mate 2 dabavo   == 300 INR" << endl
							 << "platinum Sheet mate 3 dabavo == 400 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*200;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*300;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*400;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "Input  sarkhu aapo..." << b <<endl;
						}
					//case dabang
					
					case 2 :
					cout << "====================================================================="<<endl;
						cout << "\t\tTme Dabang movie Pasand kri che..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET NI CHATEGORIES ANE BHAV" << endl
							 << "\t\tNICHE AAPELA MATHI EK PASAND KARO..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet mate 1 dabavo   == 250 INR" << endl
							 << "golden Sheet mate 2 dabavo   == 350 INR" << endl
							 << "platinum Sheet mate 3 dabavo == 450 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*250;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*350;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*450;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "Input sarkhu aapo..." << b <<endl;
						}
					//case race
					
					case 3 :
						cout << "====================================================================="<<endl;
						cout << "\t\tTme Race movie Pasand kri che..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET NI CHATEGORIES ANE BHAV" << endl
							 << "\t\tNICHE AAPELA MATHI EK PASAND KARO..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet mate 1 dabavo   == 275 INR" << endl
							 << "golden Sheet mate 2 dabavo   == 375 INR" << endl
							 << "platinum Sheet mate 3 dabavo == 475 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*275;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*375;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*475;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "Input sarkhu aapo..." << b <<endl;
						}
						//case kgf
						
					case 4 :
						
						cout << "====================================================================="<<endl;
						cout << "\t\tTme KGF movie Pasand kri che..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET NI CHATEGORIES ANE BHAV" << endl
							 << "\t\tNICHE AAPELA MATHI EK PASAND KARO..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet mate 1 dabavo   == 300 INR" << endl
							 << "golden Sheet mate 2 dabavo   == 400 INR" << endl
							 << "platinum Sheet mate 3 dabavo == 500 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*300;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								
								break;
							
								
							case 2 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*400;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Ketli ticket book krvi che te kaho : ";
							cin  >> a;
							bill = a*500;
							cout << "biji vadhu ticket kharidva mate 1 dabovo...." << endl
								 << "Bill mate 0 dabavo...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "Input sarkhu aapo..." << b <<endl;
						}
				
			}
