#define CATCH_CONFIG_MAIN
#include "../src/sqmatrix.hpp"
#include"catch.hpp"
TEST_CASE("Testing multiply-1"){
int n=2;
 long double a[][100]={{2,2},{2,2}};
 long double b[][100]={{2,2},{2,2}};
long double mul[100][100];
REQUIRE(multiply(a,b,n) ==8);
REQUIRE_FALSE(multiply(a,b,n) != 8);
}
TEST_CASE("Testing multiply-2"){
int n=2;
long double a[][100]={{2.2,2},{3.2,2}};  
long double b[][100]={{4.22,2},{2.2,6.22}};
long double mul[100][100];
REQUIRE(multiply(a,b,n) ==(int)13.684);
REQUIRE_FALSE(multiply(a,b,n) !=(int)13.684);
}
TEST_CASE("Testing multiply-3"){
int n=6;
long double a[][100]={{1.64,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}};  
long double b[][100]={{1.64,2,3,4,5,6},{1.89,2,3,4,5,6},{2.2,2,3,4,5,6},{3.3,2,3,4,5,6},{4.4,2,3,4,5,6},{5.5,2,3,4,5,6}};
long double mul[100][100];
REQUIRE(multiply(a,b,n) ==(int)81.2696);
REQUIRE_FALSE(multiply(a,b,n) !=(int)81.2696);
}