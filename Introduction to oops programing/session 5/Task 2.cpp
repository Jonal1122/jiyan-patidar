#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "Uploading reel/photo on Instagram" << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "Uploading video on YouTube" << endl;
    }
};

int main() {
    InstagramUploader insta;
    YouTubeUploader youtube;

    insta.uploadContent();
    youtube.uploadContent();

    return 0;
}