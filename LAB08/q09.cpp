#include <iostream>
using namespace std;
class BackupPolicy{
public:
    virtual double calculateStorage(double dataSize){
        return 0;
    }
    virtual ~BackupPolicy() {}
};
class FullBackup : public BackupPolicy{
public:
    double calculateStorage(double dataSize) override{
        return dataSize;
    }
};
class IncrementalBackup : public BackupPolicy{
public:
    double calculateStorage(double dataSize) override{
        return dataSize * 0.25 + 50;
    }
};
int main() {
    FullBackup f;
    IncrementalBackup i;
    BackupPolicy *ptr;
    ptr = &f;
    cout<<"Full Backup Storage: "<<ptr->calculateStorage(1000)<<" MB"<<endl;
    ptr = &i;
    cout<<"Incremental Backup Storage: "<<ptr->calculateStorage(1000)<<" MB"<<endl;
    return 0;
}