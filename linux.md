## linux command

### 파일, 디렉토리 관련 명령

1. cd, pwd, mkdir, rmdir
1. cat - 파일 보는 명령
1. more - 파일을 한 페이지씩 보는 명령
1. 파일명 앞에 .은 숨겨진 파일
1. ls - 현재 디렉토리의 파일을 보는 명령
1. ls -a - 히든 파일을 보여줌
1. ls -l - 파일의 자세한 정보
1. ls -i - 각 파일의 inode를 출력함
1. biff
1. man - 명령어들의 사용법을 보여주는 명령
1. history - 실행했던 명령을 보여주는 명령
1. passwd - 비밀번호를 바꾸는 명령
1. clear - 터미널 스크린을 클리어함
1. who - 접속한 사람이 누구인지 보여줌
1. whoami - 나의 유저 id를 보여줌
1. wc - 파일의 줄, 단어, byte 개수를 출력함
1. cp - 파일 또는 디렉토리를 복사하는 명령
1. rm - 파일을 지우는 명령
1. rmdir - 디렉토리를 지우는 명령
1. mkdir - 디렉토리를 만드는 명령
1. tty - stdi에 연결된 터미널의 파일의 이름을 출력함
1. pwd - 현재 디렉토리 경로를 출력함
1. echo - 한 줄의 문자열을 보여줌
1. chmod - 파일의 권한을 바꿈
1. df - 파일 디스크 시스템의 용량을 출력
1. vi - vi에디터 
1. cc - 컴파일
1. touch - 0byte 파일 생성
1. date - 현재 시간과 날짜
1. more - 한 페이지씩 보는 명령
1. ps - 현재 프로세스를 출력
1. mv - 파일의 이름을 바꿀 때 또는 파일의 경로를 옮길 때 사용

## hard link / soft link

1. ```ln/ ln -s```
    ln - hard link 생성
    ln -s - soft link 생성
2. cp 했을 때 생기는 일
    *어떨 때는 되고 어떨 때는 inode 유지안됨

## 파일 압축
tar -파일 모으기
    cvf :생성하며 tar
    tvf : 
    xvf : 압축 풀기
    xvfz 
cp 
    -r -a : 
    -d
    -r : 디렉토리 복사 날짜도 바뀜
gzip -압축
gupzip - 압축 풀기
cd --help
which ls - ls 명령어가 있는 파일 보여줌
whereis ls
whereis cd 쉘 명령어라서 경로가 없다.

## 쉘명령어
echo $NAME
echo $? - exit code를 stdout에 출력
&& - 앞의 값이 false 이면 뒤의 값 실행 x
|| - 앞의 값이 true 이면 뒤의 값 실행 x

## redirection
1. stdin: 0<, stdout: 1>, stderr: 2>
1. >& file: stdout과 stderr 둘 다 파일에 redirection
1. >>: 파일 뒤에 append
1. |: pipe
1. |& : stdout과 stderr를 모두 file의 stdin으로 연결.
1. tee: stdin으로 읽고 stdout과 file로 씀
