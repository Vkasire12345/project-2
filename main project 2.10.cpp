#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <Input_image> <Output_image>" << std::endl;
        return -1;
    }

    cv::Mat srcImage = cv::imread(argv[1]);
    if (srcImage.empty()) {
        std::cerr << "Error loading the image" << std::endl;
        return -1;
    }

    cv::Mat processedImage;
    cv::cvtColor(srcImage, processedImage, cv::COLOR_BGR2GRAY); // Convert to grayscale
    cv::threshold(processedImage, processedImage, 128, 255, cv::THRESH_BINARY); // Apply binary threshold

    if (!cv::imwrite(argv[2], processedImage)) {
        std::cerr << "Could not write the image" << std::endl;
        return -1;
    }

    std::cout << "Processed image saved to " << argv[2] << std::endl;
    return 0;
}
