// CodingChallangeUlak.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "FileSystemAnalyzer.h"
#include "InvertedIndex.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	FileSystemAnalyzer files;
	InvertedIndex Data;
	string path;
	list<string> listPath;
	cout << "Enter the path :";
	cin >> path;
	listPath = files.DiscoverFiles(path);
	for (string  filePath : listPath) {
		Data.addfile(filePath);
	}
	Data.creatAndWrite();
	return 0;
}

