import sys
from twilio.rest import Client 
 
account_sid = 'ACc682c75752634586f8ba8f32ab77b9c6' 
auth_token = '000125c071338e3cf7ba13e300ab7a4f' 
client = Client(account_sid, auth_token) 

message = client.messages.create(
	to='+4526145503', 
        from_='+18338746771',
        body=sys.argv[1]                            
	) 
 
print("Message sent")