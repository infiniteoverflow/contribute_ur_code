#!/usr/bin/python
# Requests library is required
# Install Requests with: 'pip install requests'

import requests

page = requests.get('https://api.ipify.org?format=json')

ip = page.json()['ip']

print('Your IPv4 address is {}'.format(ip))