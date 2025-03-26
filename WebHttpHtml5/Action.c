Action()
{


	lr_think_time(4);
    lr_start_transaction("welcome screen");

	web_url("welcome.pl_2", 
		"URL=http://192.168.152.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.152.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);
    lr_end_transaction("welcome screen", LR_AUTO);

	lr_think_time(4);
	
    lr_start_transaction("reservations");

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
    lr_end_transaction("reservations", LR_AUTO);

	lr_think_time(4);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t42.inf", 
		LAST);


	lr_think_time(4);

	
	web_image("Home Button", 
		"Alt=Home Button", 
		"Ordinal=1", 
		"Snapshot=t44.inf", 
		LAST);

	return 0;
}
