#include<stdio.h>
int main(){
	int arr[100];
	int n, a, b = 1, c = 1, d=1, add, addposition, xoa, choice, SSNT=0, SNT;
	int min = arr[0];
	while(a){
		printf("\n---MENU---\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra cac gia tri phan tu trong mang\n");
		printf("3.Dem so luong so nguyen to co trong mang\n");
		printf("4.Tim gia tri nho thu 2 trong mang\n");
		printf("5.Them 1 phan tu vao vi tri ngau nhien trong mang, nguoi dung nhap vi tri va gia tri phan tu\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan(Insertion sort)\n");
		printf("8.Nhap vao 1 phan tu va kiem tra xem co ton tai trong mang(Binary search)\n");
		printf("9.Xoa phan tu trung lap\n");
		printf("10.Dao nguoc thu tu phan tu trong mang\n");
		printf("11. Thoat\n");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1://Nhap so phan tu va gia tri phan tu
				while(b < 2){
				printf("Nhap kich thuoc mang: ");
				scanf("%d", &n);
				if(n<0 || n>100){
					printf("Kich thuoc khong hop le! Vui long nhap lai!");
				}else{
					printf("Kich thuoc hop le!");
					b++;
				}
			}
				printf("Nhap cac gia tri cho mang: ");
				for(int i=0; i<n; i++){
					printf("arr[%d] = ", i);
					scanf("%d", &arr[i]);
				}
			break;
			case 2://In ra cac phan tu trong mang
				printf("Gia tri cac phan tu trong mang la: ");
				for(int i=0; i<n; i++){
					printf("arr[%d]=%d\t", i, arr[i]);
				}
			break;
			case 3://Tim so nguyen to
				printf("Co so nguyen to trong mang: ");
				for(int i=0; i<n; i++){
				int SNT = arr[i];
				int KT = 1;
	                if(SNT < 2){
	                        KT = 0;
	                }else{
	                    for (int j = 2; j * j <= SNT; j++) {
	                        if (SNT % j == 0) {
	                            KT = 0;
	                            break;
	                            }
	                        }
	                    }
	
	                    if(KT){
	                       SSNT++;
	                       
	                    }
	                }
	                printf("%d", SSNT);
			break;
			case 4://Tim gia tri nho thu 2 trong mang
				printf("Gia tri nho thu 2 trong mang la: ");
				for(int i=0; i<n; i++){
					if(min > arr[i]){
						min = arr[i];
					}
				}	
				printf("%d", min);
			break;
			case 5://Them phan tu vao mang
				while(c < 2){
					printf("Nhap vi tri can them: ");
				scanf("%d", &addposition);
				if(addposition > n || addposition < 0){
					printf("Mang khong co vi tri nay");
				}else{
					printf("Vi tri hop le");
					c++;
				}
			}
				printf("Nhap gia tri phan tu can them: ");
				scanf("%d", &add);
				for(int i=n; i>addposition; i--){
					arr[i]=arr[i-1];
				}
					arr[addposition] = add;
					n++;
			break;
			case 6:// Xoa phan tu tai vi tri cu the
				while(d<2){
				printf("Nhap vi tri can xoa: ");
				scanf("%d", &xoa);
				if(xoa<0 || xoa>=n){
					printf("Vi tri khong hop le");
				}else{
					printf("Vi tri xoa hop le");
					d++;
				}
			}
				for(int i = xoa; i < n-1; i++){
					arr[i]=arr[i+1];
				}
				n--;
				printf("Mang sau khi xoa la: ");
				for(int i=0; i<n; i++){
					printf("arr[%d]=%d\t", i, arr[i]);
				}
			break;
			case 7:
			break;
			case 8:
			break;
			case 9:
			break;
			case 10:
			break;
			case 11://Thoat
				printf("Thoat!");
				a++;
				return 0;
			default: 
				printf("Khong co lua chon nay!");

		}
	}
}
