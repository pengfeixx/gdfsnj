
/***
 * -------------------------------------------------------------------------------------------------------------------
 * 题目
 * -------------------------------------------------------------------------------------------------------------------
 *
 * 编写一个程序，从命令行读取一个软件包的名称，调用“dpkg -L”命令获得该软件包的文件列表，并检查所有文件。
 * 要求：
 * 1. 使用cmake和c++开发
 * 2. 可执行文件名称是pkgverify
 * 3. 检查该软件包所有文件，确认：
 *   - 路径存在
 *   - 文件存在
 *   - 如果是符号链接，链接的文件也存在
 *   - /usr路径下的文件，确认文件属主都是root
 * 4. 输出所有有问题的文件或路径名
 * 5. 由于qDebug/qInfo等输出方式会添加多余字符，且不在标准输出上，与考试要求不符，请谨慎使用
 *  
 * 示例：
 * 如果/etc/cups路径被删除了，则运行结果如下：
 * pkgverify cups
 * /etc/cups
 * /etc/cups/snmp.conf
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

// return 0 will by display
int check_file(char *fname)
{
    if (fname[strlen(fname) - 1] == '\n')
        fname[strlen(fname) - 1] = '\0';
    
    struct stat st;

    // not exists
    if (stat(fname, &st) < 0)
        return 0;
    
    // check link file
    if (S_ISLNK(st.st_mode)) {
        char linkf[2048];
        if (readlink(fname, linkf, 2048) < 0)
            return 0;

        if (stat(linkf, &st) < 0)
            return 0;
    }

    if (strstr(fname, "/usr/") == fname) {
        if (st.st_uid != 0)
            return 0;
    }

    return 1;
}

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("usage: pkgverify files\n");
        exit(0);
    }
    
    const char *pkgname = argv[1];
    char cmd[2048];
    sprintf(cmd, "dpkg -L %s", pkgname);

    FILE *fp = popen(cmd, "r");
    char line[2048];
    while (fgets(line, 2048, fp)) {
        if (check_file(line) == 0) {
            printf(line);
            printf("\n");
        }
    }
    pclose(fp);

    return 0;
}
