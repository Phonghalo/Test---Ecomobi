#include<bits/stdc++.h>
#include<set>

using namespace std;


int main(){
	int cn;
	set<int> s;
	std::set<int>::iterator it;
	s.insert(1);
	s.insert(5);
	s.insert(3);
	s.insert(8);
	s.insert(6);

	cout<< "1. Them phan tu" <<endl;
	cout<< "2. Xoa phan tu" <<endl;
	cout<< "3. Kiem tra phan tu" <<endl;
	cout<< "4. So luong phan tu" <<endl;
	cout<< "5. Lam trong tap hop" <<endl;
	cout<< "Chon chuc nang: " << "\n \n \n"<<endl;
	cin>>cn;
	switch(cn){
		case 1:
        {	int a;
            cout << "Nhap phan tu muon them" << endl;
            cin>>a;
			for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
				if(s.count(a)!=0){
				cout<<"false"<<endl;break;}
				else {
            	s.insert(a);
				cout<<"true"<<endl;
				std::cout << "phan tu trong tap hop:";
			  	for (it=s.begin(); it!=s.end(); ++it)
			    std::cout << ' ' << *it;
			 	std::cout << '\n';break;}
				}
            break;
        }
        case 2:
        {	
			int a;
            cout << "Nhap phan tu muon xoa" << endl;
            cin>>a;
			for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
				if(s.count(a)==0){
				cout<<"false"<<endl;break;}
				else {
            	s.erase(a);
				cout<<"true"<<endl;
				std::cout << "phan tu trong tap hop:";
			  	for (it=s.begin(); it!=s.end(); ++it)
			    std::cout << ' ' << *it;
			 	std::cout << '\n';break;}
				}
            break;
        }
        case 3:
        {
            int a;
            cout << "Nhap phan tu muon tim" << endl;
            cin>>a;
			for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
				if(s.count(a)==0){
				cout<<"false"<<endl;break;}
				else {
				cout<<"true"<<endl;break;}
				}
            break;
        }
        case 4:
        {
            cout << "So luong phan tu la: "<< s.size() << endl;
            break;
        }
        case 5:
        {
        	s.clear();
        	std::cout << "phan tu trong tap hop:";
		  	for (it=s.begin(); it!=s.end(); ++it)
		    std::cout << ' ' << *it;
		 	std::cout << '\n';
            break;
        }
	}
	
}
