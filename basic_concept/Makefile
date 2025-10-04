# Tên trình biên dịch
CXX = g++

# Các cờ (flags) biên dịch:
# -Wall: Bật tất cả các cảnh báo
# -std=c++17: Sử dụng chuẩn C++17 (hoặc c++11/c++20 nếu cần)
# -o: Chỉ định tên file đầu ra
CXXFLAGS = -Wall -std=c++17

# Danh sách tất cả các file mã nguồn (.cpp)
SOURCES = types.cpp Identifiers.cpp consts.cpp pointer.cpp

# Danh sách tất cả các file thực thi (executable) sẽ được tạo
# Lấy tên từ SOURCES và bỏ đi đuôi .cpp
EXECUTABLES = $(SOURCES:.cpp=)

# --- Các targets chính ---

# Target mặc định (khi chỉ gõ 'make') - Biên dịch tất cả
all: $(EXECUTABLES)
	@echo "--- Tất cả các chương trình đã được biên dịch thành công ---"

# Target chung để biên dịch từng file .cpp thành file thực thi cùng tên
# Tự động tạo luật biên dịch: <file>.cpp -> <file>
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo "Đã biên dịch $< thành $@"

# Target để chạy tất cả các chương trình
run: $(EXECUTABLES)
	@echo "--- Chạy các chương trình ---"
	@./types
	@./Identifiers
	@./consts
	@./pointer
	@echo "--- Kết thúc ---"

# Target để xóa tất cả các file thực thi và file tạm
clean:
	rm -f $(EXECUTABLES)
	@echo "Đã xóa tất cả các file thực thi."

# Đặt các target này là phony để đảm bảo chúng luôn được thực thi
.PHONY: all clean run