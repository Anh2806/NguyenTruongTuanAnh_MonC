#include <iostream>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

int main() {
    double foodEaten[NUM_MONKEYS][NUM_DAYS];
    
    // Nhập dữ liệu thức ăn cho từng con khỉ
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        cout << "Nhập lượng thức ăn (pounds) cho con khỉ " << monkey + 1 << " trong tuần:" << endl;
        for (int day = 0; day < NUM_DAYS; day++) {
            cout << "Ngày " << day + 1 << ": ";
            cin >> foodEaten[monkey][day];
        }
    }

    // Tính trung bình lượng thức ăn ăn mỗi ngày của toàn bộ gia đình khỉ
    double totalFood = 0;
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            totalFood += foodEaten[monkey][day];
        }
    }
    double averageFoodPerDay = totalFood / (NUM_MONKEYS * NUM_DAYS);

    // Tìm lượng thức ăn ít nhất và nhiều nhất ăn trong tuần
    double minFood = foodEaten[0][0];
    double maxFood = foodEaten[0][0];
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            if (foodEaten[monkey][day] < minFood) {
                minFood = foodEaten[monkey][day];
            }
            if (foodEaten[monkey][day] > maxFood) {
                maxFood = foodEaten[monkey][day];
            }
        }
    }

    // Hiển thị báo cáo
    cout << "\nBáo cáo về lượng thức ăn của gia đình khỉ:" << endl;
    cout << "Lượng thức ăn trung bình mỗi ngày: " << averageFoodPerDay << " pounds" << endl;
    cout << "Lượng thức ăn ít nhất trong tuần: " << minFood << " pounds" << endl;
    cout << "Lượng thức ăn nhiều nhất trong tuần: " << maxFood << " pounds" << endl;

    return 0;
}
