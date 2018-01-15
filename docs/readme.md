This is the available HwCpp documentation, 
which is probably even more work-in-progress than the library itself.
The pdfs are by gitprint.com.

- hwcpp-getting-started.md 
   [pdf](https://gitprint.com/wovo/hwcpp/blob/master/docs/hwcpp-getting-started.md) :
   how to get started using HwCpp (installation etc.)
   
- hwcpp-primer.md 
   [pdf](https://gitprint.com/wovo/hwcpp/blob/master/docs/hwcpp-primer.md) :
   aims to offer a gentle introduction.
   
- hwcpp-reference.md 
   [pdf](https://gitprint.com/wovo/hwcpp/blob/master/docs/hwcpp-reference.md) :
   the nitty-gitty details.
   
- hwcpp-targets.md 
   [pdf](https://gitprint.com/wovo/hwcpp/blob/master/docs/hwcpp-targets.md) :
   the supported targets.
   
- _update.py : inserts code snippets and TOC into the documents

- _update.bat : runs update.py on the documents

- _update.bat : runs kramdown to create html files from the documents

- images : foto's etc. used by the documentation

My experiences with printing markdown files:
- http://www.markdowntopdf.com : 
   copy url, reasonable, but no images, table boundaries, or page numbers.

- https://markdowner.github.io : 
   copy text, produces chaos

- gitprint: 
   link, reasonable, no images, TOC without line-breaks (repairable)

- https://atom.io/packages/markdown-pdf :
   local, but I don't see how to use it (WTF is Atom?)

- https://kramdown.gettalong.org : local, requires Ruby, 
   direct pdf after 'gem install prawn' 'gem install prawn-table', but rubbish.
   html OK, pictures!, requires style to get page borders.
   usefull as html-table sanitizer?

- grip : 
   local, requires python, no idea how to run this :(

- http://pandoc.org : 
   local, requires various other tools, pictures!, but no html tables :)

Best workaround so far: use kramdown to make html and print that from a browser.
(lacks any page boundaries)
