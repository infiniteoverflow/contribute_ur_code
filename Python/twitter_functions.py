import urllib3
import base64
import certifi
import json
from urllib.parse import urlencode
from functools import reduce

def getOAuthToken(credentials):
	oauth_url = 'https://api.twitter.com/oauth2/token'
	http = urllib3.PoolManager(cert_reqs='CERT_REQUIRED',ca_certs=certifi.where())
	r = http.request('GET', 'http://httpbin.org/robots.txt')
	creds = "%s:%s" % (credentials['CONSUMER_KEY'],credentials['CONSUMER_SECRET'])
	token = base64.b64encode(creds.encode()).decode()
	http_headers={'Authorization': "Basic %s" % token, 
	'Content-Type': 'application/x-www-form-urlencoded;charset=UTF-8'
	}
	authresponse = http.request('POST',oauth_url,headers=http_headers,body='grant_type=client_credentials')
	json_response = json.loads(authresponse.data.decode('utf-8'))
	if not 'errors' in json_response.keys():
		return json_response['access_token']
	else:
		raise Exception(json_response['errors'])

def search(query, authtoken, query_type = 'popular',count=100,since_id=None, until_id=None):
	search_url = 'https://api.twitter.com/1.1/search/tweets.json'
	valid_types = ['mixed', 'recent', 'popular']
	http = urllib3.PoolManager(cert_reqs='CERT_REQUIRED',ca_certs=certifi.where())
	headers = {
		'authorization': "Bearer %s" % authtoken,
		'content-type':"application/json"
	}
	queryFields = {'q':query, 'result_type':query_type,'count':count}
	if since_id is not None:
		queryFields['since_id'] = since_id
	if not query_type in valid_types:
		raise Exception ("'query_type' must be one of %s" % reduce(lambda x,y: "%s,%s" % (x,y), valid_types))
	else:
		response = http.request('GET',search_url, fields=queryFields,headers=headers)
		return json.loads(response.data.decode('utf-8'))

