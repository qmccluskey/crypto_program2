//Quinn McCluskey
//qmccluskey@live.esu.edu
//CPSC 370, 12:30
//10/20/19
//S-DES encryption and decryption

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<assert.h>

using namespace std;

string expansion(string k)
{
	string per, per2, per3 = "";

	per = k.substr[0, 2] + k.substr[3, 4];
	per2 = k.substr[2, 3] + k.substr[3, 4];
	per3 = k.substr[2, 3] + k.substr[4, 5];

	return per + per2, per3;
}

string xor_(string a, string b) 
{
	string ans = "";

	for (int i = 0; i < a.size(); i++) 
	{
		if (a[i] == b[i]) 
		{
			ans += "0";
		}
		else 
		{
			ans += "1";
		}
	}

	return ans;
}

string encrypt(string pt) 
{
	//Splitting  
	string left = pt.substr(0, 4);
	string right = pt.substr(4, 8);

	//S-box Table 
	int s[2][2][8] =
	{ 
	{
		101,010,001,110,011,100,111,000,
		001,100,110,010,000,111,101,011
	},
	{
		100,000,110,101,111,001,011,010,
		101,011,000,111,110,010,001,100
	}
	};

	for (int i = 0; i < 4; i++) 
	{
		//S-boxes 
		string op = "";
		for (int i = 0; i < 2; i++) 
		{
			
		}

		//cout << "Round " << i + 1 << ": " << left << " " << right << endl;
		return "101011";
	}
}
int main()
{
	string pt, key;

	pt = "011100100110";
	key = "010011001";
	string key1, key3 = key.substr[0, 8];
	string key2, key4 = key.substr[1, 9];

	cout << "S-DES" << endl;
	cout << "Plaintext is " << pt << endl;

	//Splitting 
	string left = pt.substr(0, 6);
	string right = pt.substr(6, 12);

	string y = expansion(right);

	string z = xor_(y, key1);

	cout << "Encryption: " << endl;
	string cipher = encrypt(z);
	string cipher1 = xor_(cipher, left);
	string cipher2 = right + cipher1;

	cout << "Ciphertext: " << cipher2 << endl;

	cout << endl;
	cout << "Decryption " << endl;

	string text = encrypt(cipher2);

	cout << "Plaintext: " << text << endl;

	system("pause");
	return 0;
}