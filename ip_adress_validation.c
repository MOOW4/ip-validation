#include <stdbool.h>
#include <stdio.h>
#include <string.h>
/*
bool is_valid_ip(const char * addr) {

    // Your code here...


  int arr_size = sizeof(*addr)/sizeof(addr[0]);
  printf("%d",arr_size);
  return 1;
}
*/
int string_to_int(int num_len,char number[num_len]){
	int result = 0;
	for ( int i = 0; i < num_len; i++){
		result = result * 10 + (number[i] - '0');
	}
	printf("int number:%d \n",result);
	return result;
}
int check_first_digit(int number){
	int first = number;
	while (first >= 10){
		first = first / 10;
	}
	if (first == 0){
		return 0;
	}
	return 1;
}


int main() {
	const char ip[] = "461.01.90.000";
	int arr_size = sizeof(ip);
	int num_of_dots = 0;
	int a = 0;
	char num[100];
  	//printf("size %d \n",arr_size);
	for ( int i = 0; i < arr_size-1; i++){
		printf("letter:%d num:%c \n", i, ip[i]);
		if (ip[i] != '.'){ //number of dots has to be less than 4
			num[a] = ip[i]; 
			a++;
		}
		else {
			num_of_dots++;
			printf("string num:%s \n",num);
			int num_len = strlen(num);
			printf("size of number:%d \n", num_len);
			// need to change from str to int
			int num_int = string_to_int(num_len, num);
			// need to check the number
			printf(" BOOLEAN %d \n",check_first_digit(num_int));
			//need to remove the old number
			for ( int j = 0; j < num_len; j++){
				num[j] = '\0';
			}
			a=0;
			//check if the number is valid
		}
	
	}
	return 0;
}

