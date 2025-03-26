/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://192.168.152.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/WebTours/index.htm", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("__Host-GAPS=1:jAIVRA2N7-WibmkcoDHX0npS5NyBWA:iqWAYzofN6dZSksl; DOMAIN=accounts.google.com");

	web_add_cookie("OTZ=7990176_34_34__34_; DOMAIN=accounts.google.com");

	web_add_cookie("NID=522=agkxtoU57bCpUSdk6URmZZ-qE_jF0GeeTTrIkwHoHNKdC-55gdqnupOt49S-KI-Jz7IKUp3lfq-PtDjt51fO-khkOIcAgFV9BOawT1ONPKMvLScwdwlh-BnLiO8dsr5cgUwbr3OHXMEbBMswgR7979-smP3fDL_VxyvsoNOuJx0RagZAyFieYA4zPHzeRtJli1Y; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"efaidnbmnnnibpcajpcglclefindmkaj,fheoggkfdfchfphceeifdbepaooicaho");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromiumcrx-86.0.4240.183");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromiumcrx&prodchannel=&prodversion=86.0.4240.183&lang=en-US&acceptformat=crx3&x=id%3Defaidnbmnnnibpcajpcglclefindmkaj%26v%3D0.0.0.0%26installedby%3Dexternal%26uc&x=id%3Dfheoggkfdfchfphceeifdbepaooicaho%26v%3D0.0.0.0%26installedby%3Dexternal%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MSO=SID&1741781753; DOMAIN=192.168.152.1");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://192.168.152.1:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

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

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"efaidnbmnnnibpcajpcglclefindmkaj,fheoggkfdfchfphceeifdbepaooicaho");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromiumcrx-86.0.4240.183");

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
