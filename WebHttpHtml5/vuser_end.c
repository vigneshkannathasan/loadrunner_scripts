vuser_end()
{

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