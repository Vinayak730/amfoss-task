require "nokogiri"
require "open-uri"

puts "enter the search content"

title = gets

 doc = Nokogiri::HTML(open('https://www.google.com/search?start=0&end=11&q='+title))

doc.xpath('*/a/div[text()]').each do |linux|
 puts linux.content
end