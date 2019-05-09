import json
import sys

mydatafile = "MySongList.db"

try: with (myopendatefile) as f:
    masterlist = json.load(f)

except: 
    print ("Failed to load music datebase. Failed to open file"+ mydatafile)
    maseterlist=[]

def music(choice):
    if choice = 'add':
        new = {}



songs = [] # songs is declared as a list. doesnt have to all be the same datat type so you can add the diswasher.


def AddSong(title, artist, album):
    new_song = {}
    new_song['Title'] = input("tile?")
    song=dict(Title=title,Artist=artist, Album=album) #creat a song record
    songs.append(song) # add it to the list

def GetSong(number):
    try:
        int(number) #if an integer isn't inputed than it would return none.
    except:
        return none
    if(number <1): # ie if user inputs a -20. Since there is no -20 song, it returns none so the computer doesnt crash and burn and die.
        return none
    if ((number //1)> songs.count): # ie hey i want song number 5, but there is only one song in the list
        return none
    else: 
        return songs[(number//1)-1]#array starts at 0 so there would be no song number 20 so you would need to minus 1

def GetSongTotal():
    return len(songs)