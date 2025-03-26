/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("welcome.pl", 
		"URL=http://192.168.152.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/WebTours/index.htm", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("login.pl", 
		"Action=http://192.168.152.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=141092.082057513HcfHtcDpQHAiDDDDtDfttpftDicf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=32", ENDITEM, 
		"Name=login.y", "Value=3", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);


	web_url("crx_2", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromiumcrx&prodchannel=&prodversion=86.0.4240.183&lang=en-US&acceptformat=crx3&x=id%3Defaidnbmnnnibpcajpcglclefindmkaj%26v%3D0.0.0.0%26installedby%3Dexternal%26uc&x=id%3Dfheoggkfdfchfphceeifdbepaooicaho%26v%3D0.0.0.0%26installedby%3Dexternal%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
