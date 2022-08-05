#include <stdio.h>

int main(){
    int otvsis,otvpup;
	scanf("%d%d", &otvsis, &otvpup);
	if (otvsis == 1) {
		if (otvpup == 1) {
			printf("%s", "YES");
		}
		else {
			printf("%s", "NO");
		}
	}
	else {
		if (otvpup != 1) {
			printf("%s", "YES");
		}
		else {
			printf("%s", "NO");
		}
	}
}
