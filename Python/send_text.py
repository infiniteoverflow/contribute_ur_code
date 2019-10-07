import twilio
import twilio.rest

account_sid = "ACbce03df70dd03f77a4644742349ca2fd"
auth_token = "fccf58b83d3e997f09b621745ad09b70"

client = twilio.rest.Client(account_sid,auth_token)

message = client.messages.create(
    body = "Hello This is AG",
    to="+919900167683",
    from_="+1 971 351 1750"
)