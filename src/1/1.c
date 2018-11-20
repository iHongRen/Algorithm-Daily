#include <stdio.h>

int main(int argc, char *argv[]) {
	int arr[11] = {1,1,3,4,5,999,3,5,4,6,6};
	int num = arr[0];
	for (int i=1;i<11;i++) {
		num ^= arr[i];
	}
	printf("%d\n",num);  //999
	return 0;
}

