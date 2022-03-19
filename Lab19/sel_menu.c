#include "Header.h"

void Sel_menu(int *pmenu) {
	printf("1. Ввод данных о устройствах (от 1 до 7);\n");
	printf("2. Вывод количества введенных записей;\n");
	printf("3. Вывод всех введенных данных в виде отформатированной таблицы;\n");
	printf("4. Вывод определенной записи о устройтве по ее порядковому номеру в базе;\n");
	printf("5. Вывод самого мощного устройства в базе данных;\n");
	printf("6. Вывод самого медленного утройства в базе данных;\n");
	printf("0. Выход из программы.\n");

	while (scanf("%d", pmenu) != 1 || *pmenu < 0 || *pmenu > 7) {
		printf("Неверное введенное значение, попробуйте еще: ");
		while (getchar() != '\n');
	}

	return;
}
