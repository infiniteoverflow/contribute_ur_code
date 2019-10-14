import re
from collections import defaultdict
from urllib.request import urlopen

from bs4 import BeautifulSoup
from pandas import DataFrame
from wordcloud import WordCloud


class NewsDataClassifier:
    @staticmethod
    def clean_data(data: DataFrame):
        """
        remove punctuation and lower case
        :param data:
        :return:
        """
        # remove punctuation
        data["description"] = data["description"].map(lambda x: re.sub(r'[^\w\s]', '', x))
        data["title"] = data["title"].map(lambda x: re.sub(r'[^\w\s]', '', x))
        # convert title into lowercase
        data["description"] = data["description"].map(lambda x: x.lower())
        data["title"] = data["title"].map(lambda x: x.lower())

        return data

    @staticmethod
    def create_word_cloud(words_string: str):
        """
        create word-cloud photo
        :param words_string:
        :return:
        """
        # Create a WordCloud object
        wordcloud = WordCloud(background_color="white", max_words=1000, contour_width=3, contour_color="steelblue")

        # Generate a word cloud
        wordcloud.generate(words_string)

        # Visualize the word cloud
        # wordcloud.to_image()

        # save wordcloud
        wordcloud.to_file("wordcloud.png")



class NewsScrapper:
    def __init__(self):
        self.news_source_list = [
                "https://news.google.com/rss/search?q=software%20vulnerability%20which%20users%20installed%20already"
            ]

    def get_news_lists(self) -> DataFrame:
        """
        collect the raw data list
        :return:
        """
        data = defaultdict(list)
        for url in self.news_source_list:
            with urlopen(url) as file:
                xml_page = file.read()
            soup_page = BeautifulSoup(xml_page, "xml")
            for news in soup_page.find_all("item"):
                data["title"].append(news.title.text)
                data["description"].append(BeautifulSoup(news.description.text, "xml").text)
        return DataFrame(data)


if __name__ == "__main__":

    news_collector = NewsScrapper()
    classifier = NewsDataClassifier()
    clean_news = classifier.clean_data(news_collector.get_news_lists())

    # join all description text and create word cloud figure
    classifier.create_word_cloud(",".join(list(clean_news["description"].values)))
