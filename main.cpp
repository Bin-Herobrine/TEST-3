#include <opencv2/opencv.hpp>
#include "ArmorDetector.h"

using namespace std;

using namespace rm;

int main() {
    

    cv::Mat srcImg = cv::imread("../1.png");

    
    ArmorParam armorParam; 
    ArmorDetector armorDetector(armorParam);

    armorDetector.loadImg(srcImg);

    armorDetector.setEnemyColor(RED);

    int flag = armorDetector.detect();


    cv::imshow("Input Image", srcImg);
    cv::waitKey(0); 
    
    return 0;
}
