#include<stdio.h>
int main(){
	void typeItem(int *arr,int size); 
	void length(int *size); 
	void sumItem(int *arr,int size); 
	void searchMax(int *arr,int size); 
	int option; 
	int arr[100]; 
	int size; 
do{	
	printf("  MENU\n");
	printf("1:Nhap vao so phan tu va tung phan tu\n");
	printf("2:Hien thi cac phan tu trong mang\n");
	printf("3:Tinh do dai cua mang\n");
	printf("4:Tinh tong cac phan tu trong mang\n");
	printf("5:Hien thi phan tu lon nhat\n");
	printf("6:Thoat\n"); 
	printf("Moi ban chon chuong trinh ban muon:");
	scanf("%d",&option);	
	switch(option){
		case 1:
			printf("Moi ban nhap so luong phan tu: ");
			scanf("%d",&size);
		 
			for(int i =0;i<size;i++){
				printf("Moi ban nhap phan tu cho arr[%d]:",i);
				scanf("%d",&arr[i]); 
			}			
			break;	
		case 2: 
			typeItem(arr,size); 
			break;
		case 3:
			length(&size); 
			 break; 
		case 4:
			sumItem(arr,size);
		 	break; 	
		case 5:
			searchMax(arr,size); 
			break; 
		case 6:
			printf("Ban da thoat chuong trinh !");
			break; 
		default:
			printf("Lua chon khong hop le !");		
	} 
}while(option!=6);	
	return 0; 
 
}
void typeItem(int *arr,int size){
	for(int i = 0;i<size;i++){
		printf("arr[%d]=%d\n",i,*(arr + i)); 
	} 
} 
void length(int *size){

	printf("Do dai cua mang la %d\n",*size); 
}  
void sumItem(int *arr, int size){
	int sum =0; 
	for(int i =0;i<size;i++){
		sum +=*(arr+i); 
	}
	printf("Tong so phan tu trong mang la %d\n",sum); 
}
void searchMax(int *arr, int size){
	int max =*(arr+0); 
	for(int i =0;i<size;i++){
		max=*(arr + i);	 
	}
	printf("Gia tri lon nhat cua mang la:%d\n",max); 
} 
 
