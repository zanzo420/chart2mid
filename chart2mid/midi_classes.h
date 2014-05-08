#ifndef MIDI_CLASSES_H
#define MIDI_CLASSES_H

//Custom Data Type, byte.
typedef unsigned char byte;

//Initialize some classes... This is for ease of access of notes, events, etc.
//None of these can be modified after they have been introduced. This is because *.chart is essentially the text version of *.mid. No value needs to be changed.

class BPM {
	public:
		BPM(unsigned int a, unsigned int b) {
			pos = a;
			value = b;
		};
		BPM() {
			pos = 0;
			value = 0;
		};

		//Define functions for getting values (Yet not setting them).
		unsigned int getPos() { return pos; }
		unsigned int getValue() { return value; }
	private:
		unsigned int pos;
		unsigned int value;
};

class TS {
	public:
		TS(unsigned int a, unsigned int b) {
			pos = a;
			value = b;
		};
		TS() {
			pos = 0;
			value = 0;
		};

		//Define functions for getting values (Yet not setting them).
		unsigned int getPos() { return pos; }
		unsigned int getValue() { return value; }
	private:
		unsigned int pos;
		unsigned int value;
};

class SyncTrack {
	public:
		//BPM Constructor
		SyncTrack(BPM a) {
			pos = a.getPos();
			bpm = a;
			type = false;
		};

		//TS Constructor
		SyncTrack(TS a) {
			pos = a.getPos();
			ts = a;
			type = true;
		};
		SyncTrack();

		BPM getBPM() { return bpm; }
		TS getTS() { return ts; }
		bool getType() { return type; }
		unsigned int getPos() { return pos; }

	private:
		bool type;
		unsigned int pos;
		BPM bpm;
		TS ts;
};

class Note {
	public:
		Note(unsigned int a, char b, unsigned char c, unsigned int d, unsigned char diff) {
			pos = a;
			type = b;
			colour = c;
			sustain_length = d;
			difficulty = diff;
		};

		//Define functions for getting values (Yet not setting them).
		unsigned int getPos() { return pos; }
		char getType() { return type; }
		unsigned char getColour() { return colour; }
		unsigned int getSusLength() { return sustain_length; }
		unsigned char getDifficulty() { return difficulty; }
	private:
		unsigned int pos;
		char type;
		unsigned char colour;
		unsigned int sustain_length;
		unsigned char difficulty;
};

#endif