#pragma once

#include <string>

class WebRTCStreamer {
public:
    WebRTCStreamer(const std::string& http_address = "localhost:8888",
                   const std::string& web_root =
                           "/home/yixing/repo/Open3D/cpp/open3d/visualization/"
                           "webrtc/html")
        : http_address_(http_address), web_root_(web_root) {}

    void Run();

private:
    std::string http_address_;
    std::string web_root_;
};
