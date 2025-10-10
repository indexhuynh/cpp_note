#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::shuffle
#include <random>    // Required for std::random_device and std::mt19937
#include <chrono>    // Optional, can be used as a seed source
#include <unordered_map>

int main() {
    std::vector<std::vector<std::string>> ques;
    int ques_len = 30;
    // 1
    ques.emplace_back(std::initializer_list<std::string>{
        "Sân vận động có 10.000 chỗ. Trừ 100 chỗ không bán vé, 20% số vé bán "
        "với giá nửa giá bình thường, còn lại bán đúng giá 2$. Hỏi số tiền thu "
        "được từ việc bán vé.",
        "17820", "17900", "18900", "16800",
        "17820"
    });
    // 2
    ques.emplace_back(std::initializer_list<std::string>{
        "1 Anh đi chợ bán trứng. Sáng anh ta bán được 2/3 số trứng, trưa bán 2/3 số "
        "trứng còn lại từ sáng, chiều bán 2/3 số còn lại từ trưa, cuối cùng anh ta còn "
        "10 quả trứng. Hỏi số trứng anh ta mang đi bán.",
        "120", "270", "230", "240",
        "270"
    });
    // 3
    ques.emplace_back(std::initializer_list<std::string>{
        "Có 3 con ngựa, 1 con chạy 2p/vòng; 1 con chạy 3p/vòng; 1 con chạy 4p/vòng. "
        "Hỏi sau bao nhiêu phút thì 3 con gặp nhau. (không tính lúc xuất phát)?",
        "2,5p", "2p", "1p", "12p",
        "12p"
    });
    // 4
    ques.emplace_back(std::initializer_list<std::string>{
        "Tổng quỹ lương trả nhân viên là 6000$. Lương nhân viên cấp cao gấp đôi lương "
        "nhân viên bình thường. Có 4 nhân viên cấp cao và 2 nhân viên bình thường. "
        "Hỏi lương nhân viên bình thường bằng bao nhiêu?",
        "1200", "2400", "1000", "2000",
        "1200"
    });
    // 5
    ques.emplace_back(std::initializer_list<std::string>{
        "Có 1 khung thép hình chữ nhật rộng 6cm, dài 10cm, cao 8m. Hỏi bán kính tối đa "
        "của một ống tròn đặt trong khung thép là bao nhiêu.",
        "3cm", "5cm", "8cm", "6cm",
        "3cm"
    });
    // 6
    ques.emplace_back(std::initializer_list<std::string>{
        "Một người đi xe đạp từ A đến B với vận tốc 12km/h. Nếu người đó đi với vận tốc "
        "15km/h thì đến B sớm hơn được 1 giờ. Tính khoảng cách AB.",
        "80", "70", "60", "65",
        "60"
    });
    // 7
    ques.emplace_back(std::initializer_list<std::string>{
        "Gọi A là diện tích tam giác tạo bởi 3 đường thẳng: Y = 2x + 3; Y = -1/2x + 3; "
        "Y = 1. B có giá trị là 24. So sánh A và B.",
        "A>B", "A<B", "A=B", "Đáp án khác",
        "A<B"
    });
    // 8
    ques.emplace_back(std::initializer_list<std::string>{
        "Trong một đám đông 100 người, người ta đếm có 70 người mặc áo vest, 85 "
        "người đeo ca vát, 75 người đội mũ, và 80 người đi giầy. Hỏi "
        "ít nhất có bao nhiêu người mặc đủ áo vest, đeo ca vát đội mũ, và đi giầy?",
        "10", "20", "30", "40",
        "10"
    });
    // 9
    ques.emplace_back(std::initializer_list<std::string>{
        "Khi trộn nguyên liệu xây một công trình, người ta dùng 1/3 hỗn hợp là cát, "
        "3/5 hỗn hợp là nước, và 12 kg sỏi. Hỏi tổng khối lượng hỗn hợp là bao "
        "kg (coi hỗn hợp trộn đều như nhau)?",
        "170", "180", "210", "200",
        "180"
    });
    // 10
    ques.emplace_back(std::initializer_list<std::string>{
        "Một con ếch ở trong đáy một cái giếng sâu 12m, mỗi ngày nước trong giếng "
        "dâng lên 3m rồi lại rút xuống 2m vào ngày hôm sau (cứ liên tiếp như vậy). "
        "Hỏi sau mấy ngày thì con ếch có thể nhảy ra khỏi giếng.",
        "7", "8", "9", "10",
        "10"
    });
    // 11
    ques.emplace_back(std::initializer_list<std::string>{
        "Hai người đánh 2 trang sách trong 5 phút. Hỏi cần bao nhiêu người để đánh "
        "hết 20 trang sách trong 10 phút?",
        "20 người", "8 người", "10 người", "14 người",
        "10 người"
    });
    // 12
    ques.emplace_back(std::initializer_list<std::string>{
        "Có 2 cốc trong đó cốc A chứa 1 lít sữa, cốc B chứa 1 lít cà phê, "
        "đổ 1/10B vào A, sau đó đổ 1/10A vào B, tính tỉ lệ thể tích cà phê trong B?",
        "9%", "90%", "90,1%", "90,91%",
        "90,1%"
    });
    // 13
    ques.emplace_back(std::initializer_list<std::string>{
        "Ông A đi hướng bắc 15m, rồi đi hướng đông 30m, rồi đi hướng bắc 15m. "
        "Hỏi ông này cách vị trí ban đầu bao nhiêu m?",
        "32,4","42,4","35,4","45,4",
        "42,4"
    });
    // 14
    ques.emplace_back(std::initializer_list<std::string>{
        "Người A lau nhà hết 5h, người B lau nhà hết 6h. Hỏi khi cả người cùng lau "
        "nhà thì sẽ mất bao lâu?",
        "2.73 giờ","2 giờ","2.5 giờ","3.1 giờ",
        "2.73 giờ"
    });
    // 15
    ques.emplace_back(std::initializer_list<std::string>{
        "Hai người cùng làm chung một công việc thì hoàn thành trong 4 giờ. Nếu mỗi "
        "người làm riêng, để hoàn thành công việc thì thời gian người thứ nhất ít hơn "
        "thời gian người thứ hai là 6 giờ. Hỏi nếu làm riêng thì mỗi người phải làm "
        "trong bao lâu để hoàn thành công việc.",
        "Người thứ nhất cần 4 giờ, người thứ 2 cần 10 giờ\n",
        "Người thứ nhất cần 6 giờ, người thứ 2 cần 12 giờ\n",
        "Người thứ nhất cần 5 giờ, người thứ 2 cần 11 giờ\n",
        "Người thứ nhất cần 8 giờ, người thứ 2 cần 14 giờ\n",
        "Người thứ nhất cần 6 giờ, người thứ 2 cần 12 giờ\n"
    });
    // 16
    ques.emplace_back(std::initializer_list<std::string>{
        "Số nào là số tiếp theo của dãy: 4; 25; 100; 289; ...",
        "525","676","425","575",
        "676"
    });
    // 17
    ques.emplace_back(std::initializer_list<std::string>{
        "Số nào tiếp theo của dãy: 5; 65; 765; ...",
        "6565","8765","9865","7565",
        "8765"
    });
    // 18
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số còn thiếu vào dãy số: 17; 34; 51; 68; ... ; 102",
        "65","75","85","95",
        "85"
    });
    // 19
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số còn thiếu vào dãy số: 1; 5; 13; 29; ...",
        "61","65","70","75",
        "61"
    });
    // 20
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số còn thiếu vào dãy số: 1; 3; 7; 35; 41; ...",
        "6","205","48","287",
        "287"
    });
    // 21
    ques.emplace_back(std::initializer_list<std::string>{
        "Cho dãy: A - C - F - ... - O",
        "B","J","D","P",
        "J"
    });
    // 22
    ques.emplace_back(std::initializer_list<std::string>{
        "Cho dãy: C - F - Z - I - ...",
        "Q","R","U","W",
        "U"
    });
    // 23
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền vào ô trống:\n"
        " --------------\n"
        "| 71 | 68 | ↓  |\n"
        " --------------\n"
        "| 23 |    | 3  |\n"
        " --------------\n"
        "| 26 |  ? | 11 |\n"
        " --------------\n",
        "35","33","10","8",
        "8"
    });
    // 24
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền vào ô trống:\n"
        " --------------\n"
        "| -3 |  ? |-10 |\n"
        " --------------\n"
        "| 2  |    | ↓  |\n"
        " --------------\n"
        "| 10 | 5  | 1  |\n"
        " --------------",
        "-8","-15","2","10",
        "-15"
    });
    // 25
    ques.emplace_back(std::initializer_list<std::string>{
        "Tìm số phù hợp vào dấu ?\n"
        " -----------------\n"
        "| 102 | 120 | 212 |\n"
        " -----------------\n"
        "| 212 |  ?  | 318 |\n"
        " -----------------\n"
        "| 203 | 140 | 323 |\n"
        " -----------------",
        "116","112","88","56",
        "116"
    });
    // 26
    ques.emplace_back(std::initializer_list<std::string>{
        "Cho dữ liệu sau đây:\n"
        " -----------------------------\n"
        "|  3  |  7  | 10  | 13  |  ?  |\n"
        " -----------------------------\n"
        "|  4  | 12  | 84  | 840 |  ?  |\n"
        " -----------------------------",
        "14 và 9900","16 và 10920","15 và 12300","16 và 18520",
        "16 và 10920"
    });
    // 27
    ques.emplace_back(std::initializer_list<std::string>{
        "Dấu ? là chữ nào?\n"
        "     A     \n"
        "  F     J  \n"
        "   ?   C ",
        "E","I","J","M",
        "I"
    });
    // 28
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số thích hợp vào dấu \"?\"\n"
        "  |7|      |2|      |5|\n"
        "|9|2|8|  |7|8|4|  |6|?|9|",
        "4","5","6","7",
        "4"
    });
    // 29
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số thích hợp vào dấu \"?\"\n"
        " ------------------------\n"
        "|    |    |    | 14 |    |\n"
        " ------------------------\n"
        "|    | 22 |    |    |    |\n"
        " ------------------------\n"
        "|    |    |    | 34 |    |\n"
        " ------------------------\n"
        "| 41 |    |    |    |    |\n"
        " ------------------------\n"
        "|    |    | 53 |    | ?  |\n"
        " ------------------------",
        "55","66","51","33",
        "51"
    });
    // 30
    ques.emplace_back(std::initializer_list<std::string>{
        "Cho sơ đồ hình vẽ dưới đây, tìm số phù hợp\n"
        "           3\n"
        "       ?       6\n"
        "    37            8\n"
        "      25      12\n"
        "          17",
        "54","55","57","59",
        "57"
    });
    // 31
    ques.emplace_back(std::initializer_list<std::string>{
        "Cho sơ đồ hình vẽ dưới đây, tìm số phù hợp\n"
        "   |27|           |14|           |21|\n"
        "|63| 2|59|     |66| 4|42|     |39| ?|72|\n"
        "   |34|           |13|           |16|",
        "7","9","11","13",
        "7"
    });
    // 32
    ques.emplace_back(std::initializer_list<std::string>{
        "Điền số thích hợp vào dấu \"?\"\n"
        " ------------------------\n"
        "| 50 | 51 | 49 | 52 | 48 |\n"
        " ------------------------\n"
        "| 46 | 47 | 45 | 48 | 44 |\n"
        " ------------------------\n"
        "| 49 | 50 |    | 51 |    |\n"
        " ------------------------\n"
        "| 47 |    | 46 |    | 45 |\n"
        " ------------------------\n"
        "| 48 |    | 47 | 50 | 46 |\n"
        " ------------------------",
        "49 - 47 - 49 - 48 - 48\n",
        "46 - 48 - 48 - 49 - 49\n",
        "49 - 48 - 48 - 49 - 47\n",
        "48 - 47 - 48 - 49 - 49\n",
        "48 - 47 - 48 - 49 - 49\n"
    });

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(ques.begin(), ques.end(), generator);
    const std::string LINE =  "============================================================================================";
    const std::string LINE_ = "--------------------------------------------------------------------------------------------";
    std::cout << LINE << "\n";
    std::cout << "ĐỀ BÀI:\n";
    for (int i = 0; i < ques_len; i++) {
        std::cout << LINE_ << "\n";
        std::cout << "Câu " << i+1 << ":\n";
        std::cout << ques[i][0] << "\n";
        std::shuffle(ques[i].begin()+1, ques[i].end()-1, generator);
        std::cout << "\tA. " << ques[i][1];
        std::cout << "\tB. " << ques[i][2];
        std::cout << "\tC. " << ques[i][3];
        std::cout << "\tD. " << ques[i][4];
        std::cout << std::endl;
    }

    int result = 0;
    std::vector<std::string> ans;
    std::vector<std::string> res;
    std::vector<bool> label;
    std::unordered_map<std::string, int> cons;
    cons["A"] = 1;
    cons["B"] = 2;
    cons["C"] = 3;
    cons["D"] = 4;
    std::cout << "\n" << LINE << "\n";
    std::cout << "Trả Lời:\n";
    for (int i = 0; i < ques_len; i++) {
        std::cout << LINE_ << "\n";
        std::cout << "Câu " << i+1 << ": ";
        std::string answer;
        std::cin >> answer;
        while (answer != "A" && answer != "B" && answer != "C" && answer != "D") {
            std::cout << "Nhập sai, nhập lại: ";
            std::cin >> answer;
        }
        ans.push_back(answer);
        std::string resu = (ques[i][5] == ques[i][1]) ? "A" : ((ques[i][5] == ques[i][2]) ? "B" : ((ques[i][5] == ques[i][3]) ? "C" : "D"));
        res.push_back(resu);
        if (answer.compare(resu) != 0) {
            label.push_back(false);
            continue;
        }
        label.push_back(true);
        result++;
    }
    std::cout << "\n" << LINE << "\n";
    std::cout << "result: " << result << "\n";
    std::cout << "Your answer : ";
    for (int i = 0; i < ques_len; i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Wrong answer: ";
    for (int i = 0; i < ques_len; i++) {
        if (label[i] == false) {
            std::cout << res[i] << " ";
        } else {
            std::cout << "  ";
        }
    }
    std::cout << "\n";
    std::string input = "";
    while (input.compare("Q") != 0) {
        std::cout << "\n" << LINE << "\n";
        std::cout << "\"Q\" to quit, \"answer\" to show anwer, \"question\" to show question, \"wrong\" to show wrong\n";
        std::cin >> input;
        if (input.compare("question") == 0) {
            for (int i = 0; i < ques_len; i++) {
                std::cout << LINE_ << "\n";
                std::cout << "Câu " << i+1 << ":\n";
                std::cout << ques[i][0] << "\n";
                std::cout << "\tA. " << ques[i][1];
                std::cout << "\tB. " << ques[i][2];
                std::cout << "\tC. " << ques[i][3];
                std::cout << "\tD. " << ques[i][4];
                std::cout << std::endl;
            }
        } else if (input.compare("answer") == 0) {
            std::cout << LINE << "\n";
            std::cout << "result: " << result << "\n";
            for (int i = 0; i < ques_len; i++) {
                std::cout << ans[i] << " ";
            }
            std::cout << "\n";
            for (int i = 0; i < ques_len; i++) {
                if (label[i] == false) {
                    std::cout << res[i] << " ";
                } else {
                    std::cout << "  ";
                }
            }
            std::cout << "\n";
        } else if (input.compare("wrong") == 0) {
            for (int i = 0; i < ques_len; i++) {
                if (ans[i].compare(res[i]) == 0) continue;
                std::cout << LINE_ << "\n";
                std::cout << "Câu " << i+1 << ": ";
                std::cout << ques[i][0] << "\n";
                std::cout << "\tA. " << ques[i][1];
                std::cout << "\tB. " << ques[i][2];
                std::cout << "\tC. " << ques[i][3];
                std::cout << "\tD. " << ques[i][4];
                std::cout << "\n";
                std::cout << "\tYour answer : " << ans[i] << ". " << ques[i][cons[ans[i]]] << "\n";
                std::cout << "\tRight answer: " << res[i] << ". " << ques[i][5] << "\n";
            }
        }
    }
    return 0;
}
