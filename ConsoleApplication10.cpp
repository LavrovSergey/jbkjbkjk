#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	char s[50] = { '\0' };
	char w[256] = { '\0' };
		int x = 0;
		int j = 0;
		cin >> s;
		for (int m = 1, i = strlen(s)-1; i >= 0; --i, m *= 10)
		{
			x += m * (((int)s[i]) - ((int)'0'));
		}
		do
		{
			w[j]=(x % 2)+48;
			x /= 2;
			j++;
		} while (x != 0);
		for(int i=strlen(w)-1;i>=0;i--)
		{
			cout << w[i];
		}
	
}
//int сокращение(int a, int b) {
//	a = abs(a), b = abs(b);
//	if (b == 0)return a;
//	else return gcd(b, a % b);
//}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	int x = gcd(a, b);
//	a /= x;
//	b /= x;
//	cout << a << " " << b;
//	return 0;
//}
//void количество слов в строке(char s[])
//{   
//	char s[256] = {'\0'};
//	cin.getline(s, 256);
//	int count = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (isalpha(s[i]) && (isspace(s[i + 1]) || s[i+1]==' ' || s[i + 1] == '.' || s[i + 1] == ',' || s[i + 1] == ':' || s[i + 1] == ';' || s[i + 1] == '!' || s[i + 1] == '?' || s[i + 1] == '\0'))count++;
//	}
//	cout << count;
//}
//void количество разных цифр в числе() {
//	int count = 0;
//char digitOccurances[10] = { 0 };//0 1 2 3 4 5 6 7 8 9
//
//char ch;
//while (cin.get(ch) && isdigit(ch)) {
//	digitOccurances[ch - 48] += 1;
//}
//
//for (int i = 0; i < 10; i++) {
//	if (digitOccurances[i] > 0) count++;
//} cout << count << " різних цифр";
//}
//void среднее строчки() {
//	int n, m;
//	double sum = 0;
//	cin >> m >> n;
//	int** mas = new int* [m];
//	for (int i = 0; i < m; ++i)
//	{
//		mas[i] = new int[n];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> mas[i][j];
//		}
//	}
//	double* cep = new double[m];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum = sum + mas[i][j];
//		}
//		cep[i] = sum / n;
//		cout << cep[i];
//		sum = 0;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		delete[] mas[i];
//	}
//	delete[] mas;
//	delete[]cep;
//	return 0;
//}
//void проверка даты() {
//	int d, m, y;
//	cin >> d >> m >> y;
//	if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))
//	{
//		if (m == 2 && (d > 28 || d < 1)) { cout << "Error"; }
//	}
//	else
//	{
//		if (m == 2 && (d > 29 || d < 1)) { cout << "Error"; }
//	}
//	if ((m == 1 || m == 3 || m == 5 || m == 8 || m == 7 || m == 10 || m == 12) && (d < 1 || d>31)) { cout << "Error"; }
//	else if ((m == 4 || m == 6 || m == 9 || m == 11) && (d < 1 || d>30)) { cout << "Error"; }
//}
//void из большихх в мальнеких и наоборот() {
//	char line[256] = { '\0' };
//	cin.getline(line, 256);
//	for (int i = 0; i < strlen(line); i++)
//	{
//		if (line[i] <= 90 && line[i] >= 65) { line[i] = line[i] + 32; }
//		else if (line[i] <= 122 && line[i] >= 97) { line[i] = line[i] - 32; }
//		cout << line[i];
//	}
//}
//void длина между датами(){
//	long int rasniza = 0;
//	int days_before_monthn[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
//	int days_before_monthnn[] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 275, 305, 335 };
//	long int days1 = 0, days2 = 0;
//	int y1, m1, d1, y2, m2, d2;
//	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
//	for (int i = 1; i < y1 + 1; i++)
//	{
//		if (i % 4 != 0 || (i % 100 == 0 && i % 400 != 0)) { days1 = days1 + 365; }
//		else(days1 = days1 + 366);
//	}
//	if (y1 % 4 != 0 || (y1 % 100 == 0 && y1 % 400 != 0))
//	{
//		days1 = days1 + days_before_monthn[m1];
//	}
//	else (days1 = days1 + days_before_monthnn[m1]);
//	days1 = days1 + d1;
//	for (int i = 1; i < y2 + 1; i++)
//	{
//		if (i % 4 != 0 || (i % 100 == 0 && i % 400 != 0)) { days2 = days2 + 365; }
//		else(days2 = days2 + 366);
//	}
//	if (y2 % 4 != 0 || (y2 % 100 == 0 && y2 % 400 != 0))
//	{
//		days2 = days2 + days_before_monthn[m2];
//	}
//	else(days2 = days2 + days_before_monthnn[j]);
//	days2 = days2 + d2;
//	if (days1 > days2) { rasniza = days1 - days2; }
//	else(rasniza = days2 - days1);
//	cout << rasniza;
//}

//void масив100 чисел поебень()
//{
//	int mas[100];
//	mas[0] = 1;
//	int y = 2 * mas[0] + 1, z = 3 * mas[0] + 1;
//	int iy = 0, iz = 0;
//	for (int i = 1; i < 100; ++i) {
//		if (y < z) {
//			mas[i] = y;
//			y = 2 * mas[++iy] + 1;
//		}
//		else if (y > z) {
//			mas[i] = z;
//			z = 3 * mas[++iz] + 1;
//		}
//		else {
//			mas[i] = y;
//			y = 2 * mas[++iy] + 1;
//			z = 3 * mas[++iz] + 1;
//		}
//		cout << mas[i] << endl;
//	}
//}
//void убрать последнюю строку в файле () {
//	int c = 0, count = 0;
//	char line[256] = { '\0' };
//	ifstream f1("text1.txt");
//	ofstream f2("text2.txt");
//	while (!f1.eof()) { f1.getline(line, 255); count++; }
//	f1.seekg(0, ios::beg);
//	while (!f1.eof())
//	{
//		for (int i = strlen(line); i >= 0; i--)
//		{
//			line[i] = '\0';
//		}
//		f1.getline(line, 255);
//		c++;
//		if (c == count) { line[0] = '\0'; }
//		for (int i = 0; i < strlen(line); i++)
//		{
//			if (line[i] != '\0') { f2 << line[i]; }
//		}
//		f2 << '\n';
//	}
//}

//void в двоичную()
//{
//
//	char s[256] = {'\0'};
//	int x = 0;
//	int b;
//	cin >> s;
//
//	for (int m = 1, i = strlen(s)-1; i >= 0; --i, m *= 10)
//	{
//		x += m * (((int)s[i]) - ((int)'0'));
//	}
//
//	do
//	{
//		cout << (x % 2);
//		x /= 2;
//	} while (x != 0);
//
//}
//void() количество возростающих промежутков{
//	int count = 0;
//	int n;
//	cin >> n;
//	int* mas = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> mas[i];
//	}
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (mas[i] > mas[i + 1]) { count++; }
//		if (mas[i] < mas[i - 1] && mas[i] > mas[i + 1]) { count--; }
//	}
//	if (mas[n - 1] > mas[n - 2]) { count++; }
//	cout << count;
//delete[]mas;
//}
//void макс сумма строки и номер строки() {
//	double sum = 0, s = 0;
//	int t;
//	int m, n;
//	cin >> m;
//	cin >> n;
//	int** mas = new int* [m];
//	for (int i = 0; i < m; ++i)
//	{
//		mas[i] = new int[n];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> mas[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			s = s + mas[i][j];
//		}
//		if (s > sum) { sum = s; t = i; }
//		s = 0;
//	}
//	cout << sum << " " << t + 1;
//for (int i = 0; i < m; i++)
//{
//	delete[] mas[i];
//}
//delete[] mas;
//}
//77777777777777777777777777777777777777777777777777777777777777777777777777777777777
//void убрать пустые строки() {
//	int a, j;
//	ifstream f1("text1.txt");
//	ofstream f2("text2.txt");
//	while (!f1.eof())
//	{
//		char line[50] = { '\0' };
//		f1.getline(line, 50);
//		a = 0;
//		for (int i = 0; i < 50; i++)
//		{
//			if (line[i] == '\0') { break; }
//			if (line[i] != '\0' && line[i] != ' ') { a++; }
//		}
//		j = 0;
//		if (a > 0) { while (line[j] != '\0') { f2 << line[j]; j++; } f2 << '\n'; }
//
//	}
//
//	f1.close();
//	f2.close();
//}
//struct point {
//	double x;
//	double y;
//};
//void периметрбольшего треугольника из точек() {
//	int t1, t2, t3;
//	int n;
//	double p = 0, np;
//	double a, b, c;
//	cin >> n;
//	point* mas = new point[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> mas[i].x;
//		cin >> mas[i].y;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					a = sqrt(pow(mas[j].x - mas[i].x, 2) + pow(mas[j].y - mas[i].y, 2));
//					b = sqrt(pow(mas[k].x - mas[i].x, 2) + pow(mas[k].y - mas[i].y, 2));
//					c = sqrt(pow(mas[k].x - mas[j].x, 2) + pow(mas[k].y - mas[j].y, 2));
//					np = a + b + c;
//					if (p < np)
//					{
//						t1 = i;
//						t2 = j;
//						t3 = k;
//						p = np;
//					}
//				}
//			}
//		}
//	}
//	cout << p << endl;
//	cout << mas[t1].x << " " << mas[t1].y << endl;
//	cout << mas[t2].x << " " << mas[t2].y << endl;
//	cout << mas[t3].x << " " << mas[t3].y << endl;
//delete[]mas;
//}
//void числоболльшесумыдругих()
//{
//int count=0;
//	int m, n, sum=0;
//	int t;
//	cin >> m;
//	cin >> n;
//	int** mas = new int* [m];
//	for (int i = 0; i < m; ++i)
//	{
//		mas[i] = new int[n];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>mas[i][j];
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			sum = sum+mas[i][j];
//		}
//		t = j;
//			for (int k = 0; k < m; k++)
//			{
//				if (mas[k][t] > sum - mas[k][t]) { count++; }
//			}
//			sum = 0;
//	}
//	cout << count;
//for (int i = 0; i < m; i++)
//{
//	delete[] mas[i];
//}
//delete[] mas;
//}
//void близкие() {
//	int m, mod = 1000, temp1, temp2;
//	int ras = 1000;
//	cin >> m;
//	int* mas = new int[m];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> mas[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (i != j) { mod = mas[i] - mas[j]; mod = abs(mod); }
//			if (mod < ras)
//			{
//				ras = mod;
//				temp1 = i;
//				temp2 = j;
//			}
//		}
//	}
//	cout << mas[temp1] << " " << mas[temp2];
//delet[]mas;
//}