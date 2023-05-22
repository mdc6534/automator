#install the necessary elements
system("sudo apt-get install build-essential libpcre3 libpcre3-dev libssl-dev git curl wget")
system("git clone https://github.com/nginx/nginx")
system("wget -O rmtp.zip https://github.com/sergey-dryabzhinsky/nginx-rtmp-module/archive/dev.zip")
system("unzip rmtp.zip")
system("./configure --with-http_ssl_module --add-module=../nginx-rtmp-module-dev && make && sudo make install")


#add the following to the end of file of  /usr/local/nginx/conf/nginx.conf
#rtmp {
#        server {
#                listen 1935;
#                chunk_size 4096;
#
#                application live {
#                        live on;
#                        record off;
#                }
#        }
#}

