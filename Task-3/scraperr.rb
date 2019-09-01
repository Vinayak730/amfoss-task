require "httparty"
require "nokogiri"
require "byebug"
require "google_search_results"


def scrapper
  url = "https://www.google.com/search?client=ubuntu&channel=fs&q=linux&ie=utf-8&oe=utf-8"
  unparsed_page = HTTParty.get(url)
  parsed_page = Nokogiri::HTML(unparsed_page)
  byebug
end

scrapper
