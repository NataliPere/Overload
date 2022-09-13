#include <iostream>

//Встроенная функция
inline int sum(int num1, int num2){
return num1 + num2;
}

//Так как ф-цию не удаётся встроить, она становится обычной функцией
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}

//Перегруженная функция 
int max_val(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max_val(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
float max_val(float num1, float num2) {
	std::cout << "FLOAT\n";
	return num1 > num2 ? num1 : num2;
}
int max_val(int num1, int num2, int num3) {
	std::cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		   num1 : (num2 > num3 ? num2 : num3);
}

//Шаблонные функции
template <typename T> // T - идентификатор, может хранить в себе int, double и т.д. Минус - одно и тоже телоб не может создавать разные экз. для разного кол-ва параметров  
T abs(T num) {
	return num < 0 ? -num : num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//sum, sum_AB
	/*std::cout << "Введите два числа: ";
	std::cin >> n >> m;\

	//std::cout << sum(n, m) << "\n";
// arr[i] = arr[i] < ? -arr[i] : arr[i];
	std::cout << sum_AB(n, m) << "\n"; */

	//Max_val
	/*std::cout << max_val(4, 6) << "\n"; //6
	std::cout << max_val(1.2, 1.1) << "\n"; //1.2
	std::cout << max_val(5.5f, 5.9f) << "\n"; //5.9f, где f - литерал
	std::cout << max_val(5, 7, 4) << "\n"; // 7*/

	//abs
	std::cout << abs(-5) << "\n"; //5
	std::cout << abs(7.4) << "\n"; //7.4



	return 0;
}