#include <stdio.h>

int main() {
    int birthyear=1929; 
    printf("Please input your birth year from 1900-2025: %d", birthyear); 

    switch (birthyear)
    {
    case 1905:
    case 1917:
    case 1929:
    case 1941:
    case 1953:
    case 1965:
    case 1977:
    case 1989: 
    case 2001: 
    case 2013:
    case 2025:
        printf("\nYour animal is the Snake.");
        break;
    case 1906:
    case 1918:
    case 1930:
    case 1942:
    case 1954:
    case 1966:
    case 1978:
    case 1990: 
    case 2002:
    case 2014:
        printf("\nYour animal is the Horse.");
        break; 

    case 1907:
    case 1919:
    case 1931:
    case 1943:
    case 1955: 
    case 1967: 
    case 1979: 
    case 1991: 
    case 2003:
    case 2015: 
        printf("\nYour animal is the Goat.");
        break;

    case 1908:
    case 1920:
    case 1932:
    case 1944:
    case 1956:
    case 1968:
    case 1980: 
    case 1992: 
    case 2004:
    case 2016: 
        printf("\nYour animal is the Monkey.");
        break;
    case 1909:
    case 1921:
    case 1933:
    case 1945:
    case 1957:
    case 1969:
    case 1981:
    case 1993:
    case 2005:
    case 2017: 
        printf("\nYour animal is the Rooster.");
        break; 

    case 1910:
    case 1922:
    case 1934:
    case 1946:
    case 1958:
    case 1970:
    case 1982:
    case 1994:
    case 2006:
    case 2018:
        printf("\nYour animal is the Dog.");
        break;

    case 1911:
    case 1923:
    case 1935:
    case 1947:
    case 1959:
    case 1971:
    case 1983:
    case 1995:
    case 2007:
    case 2019:
        printf("\nYour animal is the Pig.");
        break;

    case 1900:
    case 1912:
    case 1924:
    case 1936:
    case 1948:
    case 1960:
    case 1972:
    case 1984:
    case 1996:
    case 2008:
    case 2020:
        printf("\nYour animal is the Rat.");
        break;

    case 1901:
    case 1913:
    case 1925:
    case 1937:
    case 1949:
    case 1961:
    case 1973:
    case 1985:
    case 1997:
    case 2009:
    case 2021:
        printf("\nYour animal is the Ox."); 
        break;

    case 1902:
    case 1914:
    case 1926:
    case 1938:
    case 1950:
    case 1962:
    case 1974:
    case 1986:
    case 1998:
    case 2010:
    case 2022: 
        printf("\nYour animal is the Tiger.");
        break;

    case 1903:
    case 1915:
    case 1927:
    case 1939:
    case 1951: 
    case 1963: 
    case 1975: 
    case 1987:
    case 1999:
    case 2011:
    case 2023: 
        printf("\nYour animal is the Rabbit.");
        break;
    
    case 1904:
    case 1916:
    case 1928:
    case 1940:
    case 1952:
    case 1964:
    case 1976:
    case 1988: 
    case 2000:
    case 2012:
    case 2024:
        printf("\nYour animal is the Dragon.");
        break;

    default:
        printf("\nNot a valid number."); 
        break;
    }
    return 0;
}

