#include "MyMiniMFC.h"

class CMyApp : public MiniApp {
public:
    bool InitInstance() override {
        CreateMainWindow(L"My First MiniMFC Window");
        return true;
    }
};

CMyApp theApp;  // 全局对象
