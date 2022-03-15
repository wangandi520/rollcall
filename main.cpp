/*
0.42版更新：
更新捐赠二维码

0.41版更新：
添加速度调节
修复bug
可快速捐赠

0.4版更新：
支持模板的xls文件

0.3版更新：
增加了重置列表按钮
更改了文件切换时重新读取文件的设计
修改缺席名单的命名方式
添加缺席按钮
修正取消打开文件而添加文件的错误

0.2版更新：
修正了时间闪烁的问题
修改状态栏显示
增加打开文件后自动选择的功能
增加了字体大小调节
调整了内部设计，修复了剩余数量显示错误
修复文件删除后仍能点名的错误
添加清空列表按钮



这是我制作的第一个有用的Qt程序

联系方式：QQ30204977
*/

#include <QTextCodec>
#include "random.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QTextCodec *code = QTextCodec::codecForName("utf-8");
//    QTextCodec::setCodecForTr(code);

    MyQWidget *window = new MyQWidget;
    window->show();

    a.setStyle("Plastique");
    a.setWindowIcon(QIcon("random.ico"));
    return a.exec();
}
