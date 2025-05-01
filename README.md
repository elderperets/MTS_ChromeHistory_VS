# To install:
Go to ```Releases``` and download the ```.msi``` file.
Then install it on your windows machine. It is
pretty simple:)


## Tips:
1. After installation run it once from the start menu.
   It will appear like nothing happened, but if you check
   current user's directory there should be 2 new files
   called ```000.timestamp``` and ```MTSCrashLog.LOG```.
2. Check mission office email - it should receive a history report.
3. If something doesn't work:
     - Uninstall the app
     - delete ```000.timestamp```
     - delete ```MTSCrashLog.LOG```
     - Install the app





4. *If you are a nerd and you know what you are doing you can clone this repo
   and read the code. Here are some tips:*
     - *Use visual studio + windows*
     - *Install msi package extension*
     - *The main code is in ```exec.cpp::exec_()``` function*
     - *If you want to change some things without changing*
       *the actual code (like adding another computer name mapping,*
       *or another email to send the report to) - go to ```config.h```*
     - ***To Clone the entire project you need to log into ```elderperets``` github account***
