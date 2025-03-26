vuser_end()
{

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_url("welcome.pl_3", 
		"URL=http://192.168.152.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}