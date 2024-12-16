#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char arr[100];
    char *ptr = arr;
    int choice;
    int countCharacter=0;
	int length = strlen(arr);
	void printStr(int length, char *arr); 
	 do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac,so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat  ca chu cai trong chuoi\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                fgets(arr, sizeof(arr), stdin);
                break;
            case 2:
            	printf("%d",length) ;
//            	printStr(length,arr); 
//				break;    
          }
     }while(choice!=6);
     return 0;
}
	void printStr(int length, char *arr){
		for(int i =length;i>=0;i--){
			printf("%c ",*(arr+i)); 
		} 
	} 
	 
	 
	  
				           
