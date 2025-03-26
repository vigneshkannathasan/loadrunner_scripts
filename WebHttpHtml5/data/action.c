Action()
{

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("welcome.pl_2", 
		"URL=http://192.168.152.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://192.168.152.1:1080");

	lr_think_time(4);

	web_submit_form("reservations.pl", 
		"Snapshot=t41.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=03/13/2025", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=03/14/2025", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://192.168.152.1:1080");

	lr_think_time(8);

	web_submit_form("itinerary.pl", 
		"Snapshot=t43.inf", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=<OFF>", ENDITEM, 
		"Name=3", "Value=<OFF>", ENDITEM, 
		"Name=4", "Value=<OFF>", ENDITEM, 
		"Name=5", "Value=<OFF>", ENDITEM, 
		"Name=6", "Value=<OFF>", ENDITEM, 
		"Name=7", "Value=<OFF>", ENDITEM, 
		"Name=8", "Value=<OFF>", ENDITEM, 
		"Name=9", "Value=<OFF>", ENDITEM, 
		"Name=10", "Value=<OFF>", ENDITEM, 
		"Name=11", "Value=<OFF>", ENDITEM, 
		"Name=12", "Value=<OFF>", ENDITEM, 
		"Name=13", "Value=<OFF>", ENDITEM, 
		"Name=14", "Value=<OFF>", ENDITEM, 
		"Name=15", "Value=<OFF>", ENDITEM, 
		"Name=16", "Value=<OFF>", ENDITEM, 
		"Name=17", "Value=<OFF>", ENDITEM, 
		"Name=18", "Value=<OFF>", ENDITEM, 
		"Name=19", "Value=<OFF>", ENDITEM, 
		"Name=20", "Value=<OFF>", ENDITEM, 
		"Name=21", "Value=<OFF>", ENDITEM, 
		"Name=22", "Value=<OFF>", ENDITEM, 
		"Name=23", "Value=<OFF>", ENDITEM, 
		"Name=24", "Value=<OFF>", ENDITEM, 
		"Name=25", "Value=<OFF>", ENDITEM, 
		LAST);

	web_image("Home Button", 
		"Alt=Home Button", 
		"Ordinal=1", 
		"Snapshot=t44.inf", 
		LAST);

	return 0;
}
