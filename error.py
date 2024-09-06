import ctypes
import time

def show_error_messages():
    # Hàm MessageBoxW từ thư viện user32.dll
    MessageBox = ctypes.windll.user32.MessageBoxW
    for i in range(50):  # Hiển thị 50 hộp thoại lỗi
        MessageBox(None, f"Error {i+1}: Something went wrong!", "Error", 0x10)
        time.sleep(0.1)  # Dừng lại 0.1 giây trước khi hiện hộp thoại tiếp theo

if __name__ == "__main__":
    show_error_messages()
