#include<iostream>
using namespace std;
class Image{
protected:
    int height,width;
public:
    Image(int h,int w){
        height = h ;
        width = w;
    }
};
class CompressedImage : public Image{
protected:
    double ratio;
public:
    CompressedImage(int h,int w,int c) : Image(h,w){
        ratio = c;
    }
};
class EncryptedImage : public CompressedImage{
    string algorithm;
public:
    EncryptedImage(int h,int w,int c,string a) : CompressedImage(h,w,c){
        algorithm = a;
    }
    void display() {
        int OrgPixels = width * height;
        double effectiveSize = OrgPixels * ratio/100.0;
        cout<<"Image Width: "<<width<<endl;
        cout<<"Image Height: "<<height<<endl;
        cout<<"Original Pixels: "<<OrgPixels<<endl;
        cout<<"Compression Ratio: "<<ratio<<"%"<<endl;
        cout<<"Effective Size: "<<effectiveSize<<endl;
        cout<<"Encryption Algorithm: "<<algorithm<<endl;
    }
};
int main() {
    EncryptedImage img(1920, 1080, 50, "RAHUL");
    img.display();
    return 0;
}