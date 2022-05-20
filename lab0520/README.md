![ApacheServer설치성공사진](/uploads/fe5a485bfc5c7eae58c649e97d047743/ApacheServer설치성공사진.png)

웹서버 설치 방법
1. 소프트웨어 패키지를 업데이트 한다.
$ sudo su
$ apt update
$ apt upgrade

2. apache 웹 서버를 설치한다.
$ apt install apache2 apache2-utils
$ systemctl status apache2

3. 웹브라우저 localhost apche2 default page 바꾸기 (/etc/apache2/apache2.conf)
$ cd /var/www/html
$ mv index.html index.html.orig
$ vi index.html
- 컴퓨터의 웹브라우저에서 버추얼머신의 ip address 검색 -> localhost의 default page 보여줌

용어들
* socket
* pipe
* protocol ex) tcp/ip
* 사설 ip, 공식 ip
* localhost ex)127.0.0.1
