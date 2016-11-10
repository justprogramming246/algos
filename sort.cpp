#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void selectionSort(auto& data)
{
  for (int i=0; i<data.size(); i++)
    {
       int small=i;
       for (int j=i; j< data.size(); j++)
	{
          if (data[j] < data[small])
	
         small=j;
	}
	swap(data[i], data[small]);
     }
	
}

int main()
{
  vector<string>inputs;
  string website,searchkey;

 ifstream infile{"top1Mweb"};
 
 
  if (!infile)
   {
     cout<<"Error reading from the file"<<endl;
   }
  else
  {
    while(infile>>website)
	{
	   inputs.push_back(website);
	}
   }
   if (inputs.size()==0)
	exit(1);
   

   selectionSort(inputs);


}

