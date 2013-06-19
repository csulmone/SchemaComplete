
//This syntax is legal in the latest version of c++11, but we would need to upgrade compilers to fully support it
class [[Schema::Definition]] SchemaTest 
{
  int [[Schema::Unit(seconds)]] schemaTestMember [[Schema::Member("Test Member Description"), Schema::Adornment("Key", "Value")]];
};
