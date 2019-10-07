import twilio
import twilio.rest

account_sid = "<Enter Your Account_sid>"
auth_token = "<Enter your auth_token>"

client = twilio.rest.Client(account_sid,auth_token)

message = client.messages.create(
    body = "Hello This is AG",
    to="+919900167683",
    from_="+1 971 351 1750"
)
