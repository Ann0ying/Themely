// Themely - home menu manager
// Copyright (c) 2017 Erman SAYIN

#pragma once

#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <deque>
#include <locale>
#include <codecvt>

#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>

using namespace std;

#include "lib/unzip.h"

struct appState {
	int debug;
	bool shouldSaveConfig;
};

extern const bool HOMEBREW;

extern volatile bool closing;

extern appState STATE;

extern u64 ARCHIVE_SD;
extern u64 ARCHIVE_HomeExt;
extern u64 ARCHIVE_ThemeExt;

extern bool isError;
extern wstring error;

void throwError(string);
void throwError(wstring);

wstring s2ws(const string&);
string ws2s(const wstring&);
string wrap(const string, size_t);
wstring wrap(const wstring, size_t);
int numOfDigits(const string);

bool fileExists(u16string);
string u16tstr(u16*, size_t);
u16string strtu16str(string&);
int fileToVector(string, vector<char>&);
//size_t read_file_to_mem(char**, const char*, u32);

int zippedFileToVector(unzFile, vector<char>&);
