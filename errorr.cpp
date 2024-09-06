#include <windows.h>
#include <thread>
#include <vector>
#include <cstdlib>
#include <ctime>

// Hàm để di chuyển cửa sổ tới vị trí ngẫu nhiên
void moveWindowToRandomPosition(HWND hwnd) {
    // Lấy kích thước màn hình
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // Tạo vị trí ngẫu nhiên
    int x = rand() % screenWidth;
    int y = rand() % screenHeight;

    // Di chuyển cửa sổ tới vị trí ngẫu nhiên
    SetWindowPos(hwnd, NULL, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}

// Hàm để hiển thị hộp thoại và di chuyển nó
void showMessageBox(int index) {
    // Hiển thị hộp thoại
    int result = MessageBox(NULL, "Something went wrong!", ("Error " + std::to_string(index)).c_str(), MB_ICONERROR | MB_OK);

    // Tìm handle của hộp thoại vừa tạo
    HWND hwnd = FindWindow(NULL, ("Error " + std::to_string(index)).c_str());
    
    if (hwnd != NULL) {
        // Di chuyển hộp thoại tới vị trí ngẫu nhiên
        moveWindowToRandomPosition(hwnd);
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Khởi tạo số ngẫu nhiên

    const int numberOfDialogs = 50; // Số lượng hộp thoại cần hiển thị
    std::vector<std::thread> threads; // Vector chứa các luồng

    // Tạo các luồng để hiển thị hộp thoại
    for (int i = 0; i < numberOfDialogs; ++i) {
        threads.emplace_back(showMessageBox, i + 1);
    }

    // Đợi tất cả các luồng kết thúc
    for (auto& th : threads) {
        th.join();
    }

    return 0;
}
