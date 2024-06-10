#include <iostream>
	               
int main() {
    char confirmation;
	int tick;
    std::string tickets[6];
    	tickets[0] = "Islamabad in Rs. 17,000/-";
    	tickets[1] = "Lahore in Rs. 16,000/-";
    	tickets[2] = "Karachi in Rs. 25,000/-";
    	tickets[3] = "Multan in Rs. 10,000/-";
    	tickets[4] = "Quetta in Rs. 23,000/-";
    	tickets[5] = "Peshawar in Rs. 8,000/- ";

std::cout << "*******************************Cheap. Airlines*********************************** \n";
    
std::cout << "Following Tickets are available, Mr/Ms. : \n";

    
    for(int i = 0; i < 6; i++){
    	std::cout << i + 1 << ") "<< tickets[i] << '\n';
	}
std::cout << '\n';
std::cout << '\n';

std::cout << "********************************************************************************* \n";
std::cout << '\n';

    do{
 	
 		std::cout << "Which ticket you would like to buy?: \n";
 		std::cout << "1. for Islamabad \n";
 		std::cout << "2. for Lahore \n";
 		std::cout << "3. for Karachi \n";
 		std::cout << "4. for Multan \n";
 		std::cout << "5. for Quetta \n";
 		std::cout << "6. for Peshawar \n";
 		std::cout << '\n';
std::cin.clear();
fflush(stdin);

std::cin >> tick;
std::cout << '\n';
}while(tick <= 0 || tick >= 7);


switch(tick){
	case 1:
		std::cout << "You have purchased the ticket to Islamabad for Rs. 17,000/. \n";
			break;
	case 2:
		std::cout << "You have purchased the ticket to Lahore for Rs. 16,000/. \n";
			break;
	case 3:
		std::cout << "You have purchased the ticket to Karachi for Rs. 25,000/. \n";
			break;
	case 4:
		std::cout << "You have purchased the ticket to Multan for Rs. 10,000/. \n";
			break;
	case 5:
		std::cout << "You have purchased the ticket to Quetta for Rs. 23,000/. \n";
			break;
	case 6:
		std::cout << "You have purchased the ticket to Peshawar for Rs. 8,000/. \n";
			break;
	default:
	    std::cout << "Invalid Choice!";
	    	break;
}
std::cout << '\n';
std::cout << "********************************************************************************* \n";
std::cout << '\n';

std::cout << "Press Y to Confirm your Purchase! \n";
std::cout << '\n';
std::cin >> confirmation;

std::cout << '\n';

if(confirmation == 'Y' || confirmation == 'y'){
	std::cout << "YOUR PURCHASE IS CONFIRMED! \n";
}

else{
	std::cout << "YOUR PURCHASE HAS BEEN CANCELLED! \n";
}
std::cout << '\n';

std::cout << "Press any key to Exit! \n";
std::cout << "********************************************************************************* \n";


    return 0;
}
