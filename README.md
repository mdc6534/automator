README
======

Cliff notes version of the readme:

1. No official licensing (i.e. GPL, BSD, etc). Basically I am providing this as copyfree so you don't have to contribute back. Just don't claim original source code as yours or sue me over using this repository.

2. No Warranty. You assume all risk for using these. I am NOT responsible for data loss, corruption or anything else that happens as a result of you using these files for your own use. Make sure that you back everything up.

What's the point of this?
=========================

This is a learning experiment for myself. I have dabbled with basic scripting and basic programming. This is to help start the process of getting more involved on the systems side of programming rather than the interpreted side of programming.

Why C and Other Systems Programming?
====================================

First off, I am well aware shell scripting exists. And I have done it before. Shell scripting could solve 90% of the stuff in these repositories just fine. Those will be coming later as I have gotten the basic ideas down. Shell scripting would fix and be easier to use for the vast majority of these simple tasks. I am also ok with shell scripting, but the point of the repository isn't to do better with shell, it's gain a learning experience with something that isn't shell. 

Second, I wanted to get into using C,C++, and Rust programming. I wanted to create some basic programs first and work my way up into more complex examples in the repositories. You have to crawl before you work your way up. There is also a method to the madness-eventually I would like to interface many of the C files in a C++ GUI frontend. Until then, I am just trying to get a few of the basics that I need down and organized according to what operating system that they are on. 

Third, this is not a ChatGPT experiment. It seems like it and I can understand that many might feel like this is such. I understand they are simple and seem like they are a spoof on actual usable code compared to what is actually in the source tree or other better pieces of code. I am keeping what I can simple on purpose so I can create some references for myself as I build my knowlesge of these kinds of programming up to more complex type structures and programs.

References Consulted
====================

https://www.educative.io/blog/concatenate-string-c<br>
https://stackoverflow.com/questions/19209141/how-do-i-execute-a-shell-built-in-command-with-a-c-function<br>
https://www.programiz.com/c-programming/c-input-output<br>

So why no readmes in the base folders as of yet?
======================================

I have tried to title the files to allude to what they are supposed to be doing. For example, openbsd_vmm_setup.c is the C file that you can use towards setting up some basic virtual machines on OpenBSD using vmm. I have tried to make it simple to deduce what is going on. Some of the code definitely needs to be tweaked and updated to better match coding standards.

EDIT: I have started adding basic readmes to provide basic ideas as to what the files do since I am an idiot and didn't comment much of the files. And there are some comments that I am retroactively adding back to the files to help assist in porting efforts. 

To-Do
=====

Other Automators

--lite_forking<br>
--Etsy Uploader<br>
--html_site_gen<br>

FAQ
===

1. Why copyfree?

First off, I can understand different licensing needs. Different licenses serve their purposes and I am not here to argue for the best license. Different strokes for different folks.

Second off, I don't want to have to manage contributions back. These are largely simple files that can easily be modified or adapted. Copyfree allows a variety of non-Linux or non-illumos/Solaris like systems to integrate these into their systems without fear of legal action. Copyfree makes it easy to get adoption.

2. Why target certain operating systems?

Because I can and I am interested in these particular systems. And I would to at least try to contribute back even if the developers never officially incorporate the files into their systems. 

Support Me
==========

Please donate:

<a href="https://www.buymeacoffee.com/mdcarroll6P" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-violet.png" alt="Buy Me A Coffee" style="height: 60px !important;width: 217px !important;" ></a>
