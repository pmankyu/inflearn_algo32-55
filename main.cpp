#include <iostream>

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
}