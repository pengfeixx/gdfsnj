#!/bin/bash

total=4
fail=0

# aspell，检查符号链接
mv /usr/share/man/man1/zssh.1.gz /usr/share/man/man1/zssh.1.gz.bak
./src/pkgverify zssh > log1
echo /usr/share/man/man1/zssh.1.gz > log2
echo /usr/share/man/man1/ztelnet.1.gz >> log2
diff log1 log2 > /dev/null
if [ $? != "0" ] ;then
	fail=`expr $fail + 1`
fi
rm log1 log2
mv /usr/share/man/man1/zssh.1.gz.bak /usr/share/man/man1/zssh.1.gz

# bash，检查文件
mv /usr/share/locale/sr/LC_MESSAGES/bash.mo /usr/share/locale/sr/LC_MESSAGES/bash.mo.bak
./src/pkgverify bash > log1
echo /usr/share/locale/sr/LC_MESSAGES/bash.mo > log2
diff log1 log2 > /dev/null
if [ $? != "0" ] ;then
	fail=`expr $fail + 1`
fi
rm log1 log2
mv /usr/share/locale/sr/LC_MESSAGES/bash.mo.bak /usr/share/locale/sr/LC_MESSAGES/bash.mo

# apt，检查路径
mv /usr/share/man/pt/man1 /usr/share/man/pt/man1.bak
./src/pkgverify apt > log1
echo /usr/share/man/pt/man1 > log2
echo /usr/share/man/pt/man1/apt-transport-http.1.gz >> log2
echo /usr/share/man/pt/man1/apt-transport-https.1.gz >> log2
echo /usr/share/man/pt/man1/apt-transport-mirror.1.gz >> log2
diff log1 log2 > /dev/null
if [ $? != "0" ] ;then
	fail=`expr $fail + 1`
fi
rm log1 log2
mv /usr/share/man/pt/man1.bak /usr/share/man/pt/man1

# cpp，检查权限
chown mail.mail /usr/share/doc/cpp/README.Debian
chown mail.mail /usr/share/doc/cpp/copyright
./src/pkgverify cpp > log1
echo /usr/share/doc/cpp/README.Debian > log2
echo /usr/share/doc/cpp/copyright >> log2
diff log1 log2 > /dev/null
if [ $? != "0" ] ;then
	fail=`expr $fail + 1`
fi
rm log1 log2
chown root.root /usr/share/doc/cpp/README.Debian
chown root.root /usr/share/doc/cpp/copyright


echo success: `expr $total - $fail`, fail: $fail
