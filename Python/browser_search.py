import threading
from functools import lru_cache
import googlesearch, webbrowser

#dependency: pip3 install google

# social networks urls
FACEBOOK_BASE_URL = "https://www.facebook.com/"
TWITTER_BASE_URL = "https://twitter.com/"
INSTAGRAM_BASE_URL = "https://instagram.com/"
LINKEDIN_BASE_URL = "https://www.linkedin.com/in/"

class BrowserService:
    def __init__(self):
        self._search = googlesearch.search

    # public methods
    def open_found_url_in_browser(self, query, tpe=""):
        """
        Opens the found url in browser.
        :param str query: google search query string. Must not be URL-encoded
        :param str tpe: type_ of search, default=`all`
        :rtype None
        :return: void
        """
        assert (isinstance(query, str) and isinstance(tpe, str))
        print("Calling open_found_url_in_browser with params: [query = {}, tpe = {}].".format(query, tpe))
        url = self._get_first_search_result(query, tpe=tpe)
        #url = google_result.get_result()
        if url is not None:
            print("Found url = {}.".format(url))
            self._browser_open(url=url)
        else:
            raise ValueError("Action failed. Google cannot found anything that matches your term.")

    def open_social_network_page(self, nickname=None, social_network_url=FACEBOOK_BASE_URL):
        """
        Opens social network page
        :param str nickname: user nickname
        :param str social_network_url: base url of wanted social network (FB, IG, TW, IN)
        :rtype None
        :return: void
        """
        assert (isinstance(nickname, str) and isinstance(social_network_url, str))
        print("Calling open_social_network_page with params: [nickname = {}, social_network_url = {}].".
                     format(nickname, social_network_url))
        url = social_network_url + nickname + "/"
        self._browser_open(url)

    #private methods
    @lru_cache(maxsize=16)
    def _google_search(self, query, tld="com", tpe="", pause=2.0, stop=3):
        """
        Search the given query string using Google.

        :param str query: google search query string. Must not be URL-encoded
        :param str tld: top level domain, default = `com`
        :param str tpe: type_ of search, default=`all`
        :param float pause: Lapse to wait between HTTP requests.
        A lapse too long will make the search slow, but a lapse too short may
        cause Google to block your IP. Your mileage may vary!
        :param int or None stop: Last result to retrieve.
        Use None to keep searching forever.
        :rtype: generator of str
        :return: Generator (iterator) that yields found URLs.
        """
        assert (all(isinstance(arg, str) for arg in (query, tld, tpe)) and isinstance(pause, float) and
                isinstance(stop, int))
        return self._search(query=query, tld=tld, tpe=tpe, pause=pause, stop=stop)

    def _get_first_search_result(self, query, tpe=""):
        """
        Returns the first result found by Google search.
        :param str query: google search query string. Must not be URL-encoded
        :param str tpe: type_ of search, default=`all`
        :rtype str
        :return: url
        """
        assert (isinstance(query, str) and isinstance(tpe, str))
        results = self._google_search(query=query, tpe=tpe)
        print("Calling _get_first_search_result with params: [query = {}, tpe = {}].".format(query, tpe))
        # results is generator object
        # TODO:think about sequential search result acquiring - not only first result
        try:
            url = next(results)
            print("First Google search result = {}.".format(url))
            return url
        except StopIteration as e:
            raise ValueError("Action failed. Google cannot found anything that matches your term.")

    def _browser_open(self, url, new=2, autoraise=False):
        """
        Opens the given url in the browser.
        :param str url: URL to open
        :param int new: opening flag: 0 - the url is opened in the same browser window if possible, 1 - new window,
        2 - new tab (default)
        :param autoraise:If autoraise is True, the window is raised if possible (note that under many window managers
        this will occur regardless of the setting of this variable).
        :rtype None
        :return: void method
        """
        assert (isinstance(url, str) and isinstance(new, int) and isinstance(autoraise, bool))
        print("Opening url = {}.".format(url))
        webbrowser.open(url, new=new, autoraise=autoraise)



bs = BrowserService()
#exception case
#print(bs._get_first_search_result(query="lionfsdfdjnefedmfurniojgigf").get_result())
print(bs._get_first_search_result(query="lion"))
print(bs._get_first_search_result(query="Новак Ђоковић"))
bs.open_found_url_in_browser("lion")
bs.open_found_url_in_browser("Новак Ђоковић")
bs.open_found_url_in_browser("lion", tpe="isch")


print(bs._get_first_search_result(query="lion", tpe="isch"))
print(bs.open_social_network_page("nenad-pantelić", LINKEDIN_BASE_URL))






