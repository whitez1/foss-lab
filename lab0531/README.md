![0531_wordpress설치](/uploads/526c738f85953864cf81b7cd6ee10ba6/0531_wordpress설치.png)

# wordpress 설치 방법
1. wordpress 파일을 다운받아서 압축을 푼다. 
2. DB에서 wp user를 추가한다.
3.  $cp wp-config-sample.php wp-config.php
    $vi wp-config.php
4.  $mysql -u root
    DB> GRANT ALL PRIVILEGES ON wp.* TO 'wp'@'localhost';  
    DB> FLUSH PRIVILEGES;  
    DB> quit  

5. 브라우저에서 http://localhost/wp/wp-admin/install.php 라고 검색한 뒤 설치를 시작한다.


![0531_mediawiki설치](/uploads/208c4ed6f581f840de441b6aa4a1ba77/0531_mediawiki설치.png)

# mediawiki 설치 방법
1. mediawiki 파일을 다운받아서 압축을 푼다. 
2. DB에서 wiki user를 추가한다.
3.  $mysql -u root
    DB> GRANT ALL PRIVILEGES ON wiki.* TO 'wiki'@'%';  
    DB> FLUSH PRIVILEGES;  
    DB> quit  

5. 브라우저에서 http://localhost/wiki 라고 검색한 뒤 설치를 시작한다.
