#include "cst_maths.hpp"

#include <cmath>
#include <string>

namespace cst {
    std::string quadraticEquation(const double &a, const double &b = 1.0, const double &c = 1.0) {
        if (a == 0.0) {
            // Phương trình tuyến tính (bậc 1)
            if (b == 0.0) {
                // Không có nghiệm hoặc vô số nghiệm
                if (c == 0.0) {
                    return "Phuong trinh co VO SO NGHIEM";
                } else {
                    return "Phuong trinh VO NGHIEM";
                }
            } else {
                // Có một nghiệm
                return "Phuong trinh co 1 nghiem: x = " + std::to_string(-c / b);
            }
        } else {
            // Phương trình bậc 2
            double delta{b * b - 4.0 * a * c};
            if (delta < 0.0) {
                // Vô nghiệm
                return "Phuong trinh VO NGHIEM";
            } else if (delta == 0.0) {
                // Có một nghiệm
                return "Phuong trinh co 1 nghiem: x = " + std::to_string(-b / (2.0 * a));
            } else {
                // Có hai nghiệm
                return "Phuong trinh co 2 nghiem:\nx1 = " + std::to_string((-b + sqrt(delta)) / (2.0 * a)) + "\nx2 = " + std::to_string((-b - sqrt(delta)) / (2.0 * a));
            }
        }
    }
}  // namespace cst
