#include <iostream>
int change=0;
int get_change(int m) {
	if(m==0){
		return change;
	}
	if(m>=10){
		change++;
		get_change(m-10);
	}
	else if(m>=5){
		change++;
		get_change(m-5);
	}
	else if(m>=1){
		change++;
		get_change(m-1);
	}
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
