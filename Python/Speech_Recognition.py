import speech_recognition as sr

# Creating a Recognizer instance
r = sr.Recognizer()

''' Each Recognizer instance has seven methods for recognizing
	speech from an audio source using various APIs. These are:

recognize_bing(): Microsoft Bing Speech
recognize_google(): Google Web Speech API
recognize_google_cloud(): Google Cloud Speech - requires installation of the google-cloud-speech package
recognize_houndify(): Houndify by SoundHound
recognize_ibm(): IBM Speech to Text
recognize_sphinx(): CMU Sphinx - requires installing PocketSphinx
recognize_wit(): Wit.ai

Of the seven, only recognize_sphinx() works offline with the
CMU Sphinx engine. Others require an internet connection
'''

aud = input("Enter the location of the audio File:  ")

jack = sr.AudioFile(aud)

# The context manager opens the file and reads its contents,
# storing the data in an AudioFile instance called source.
with jack as source:
	r.adjust_for_ambient_noise(source,duration=0.5)
	audio1 = r.record(source)
	#the record() method records the data from the entire file
	#into an AudioData instance.

print(r.recognize_google(audio1,show_all=True))
