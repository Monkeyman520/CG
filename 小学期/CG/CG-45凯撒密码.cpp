//#include<iostream>
//#include<string>
//using namespace std;
//
//void change(string& a) {
//	for (int i = 0; i < a.size(); i++) {
//		if (a[i] >= 'A'&&a[i] <= 'U')
//			a[i] += 5;
//		else if (a[i] >= 'V'&&a[i] <= 'Z')
//			a[i] = 'A' + a[i] - 'V';
//	}
//}
//int main() {
//	string start, message, end;
//	while ((getline(cin, start)) && (start.compare("ENDOFINPUT"))) {
//		getline(cin,message);
//		getline(cin, end);
//		change(message);
//		cout << message << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
char map[]="VWXYZABCDEFGHIJKLMNOPQRSTU";
int main() {
	char s[101];
	int i,j=10;
	while(1) {
		gets(s);

		if(strcmp(s,"ENDOFINPUT")==0)
			break;
		gets(s);

		for(i=0; s[i]!='\0'; i++) {
			if(s[i]>='A'&&s[i]<='Z')
				printf("%c",map[s[i]-'A']);
			else
				printf("%c",s[i]);

		}
		gets(s);
		printf("\n");

	}
	return 0;
}
