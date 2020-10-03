#include <stdio.h>

<<<<<<< HEAD
int main(int argc, char** argv) {
    freopen("input.txt", "rt", stdin);
	int a[100], n, idx, i, j, tmp;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
=======
int main(){
	freopen("input.txt", "rt", stdin);
	return 0;
>>>>>>> 8488f28... update main.cpp
}