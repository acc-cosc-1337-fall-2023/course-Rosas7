//add include statements
#include "func.h"

//add function code here
double get_gc_content(const string& dna)
{
    int gc_content = 0;
    int dna_length = dna.size();

    for(char i : dna)
    {
        if( i == 'G' || i == 'C' )
        {
            gc_content ++;
        }
    }

    return float(gc_content) / dna_length; 
}

string get_reverse_string(string dna)
{
    string reverse;
    for(char i= dna.size() - 1; i>=0; i--)
    {
        reverse += dna[i];
    }

    return reverse;
}

string get_dna_complement(string dna)
{
    string reverse = get_reverse_string(dna);
    for(char i = 0; i< reverse.size(); i++)
    {
        if(reverse[i] == 'A')
        {
            reverse[i] = 'T';
        }
        else if(reverse[i] == 'T')
        {
            reverse[i] = 'A';
        }
        else if(reverse[i] == 'C')
        {
            reverse[i]= 'G';
        }
        else if(reverse[i] == 'G')
        {
            reverse[i] = 'C';
        }
    }
    return reverse;
}