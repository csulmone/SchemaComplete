
#define SCHEMA_DEFINITION
#define SCHEMA_MEMBER(x)
#define SCHEMA_ADORNMENT(x, y)

//This declares the class to the build system for code generation
SCHEMA_DEFINITION
class SchemaTest 
{
  //Any schema member will be added to the schema description with the included description
  SCHEMA_MEMBER("This is my description")
  int schemaTestMember;

  //This guy is not serialized
  int schemaTestNoInclude;

  //This member is serialized with a default value of 'a'
  SCHEMA_MEMBER("This is a char")
  char schemaTestChar = 'a';

  SCHEMA_MEMBER("Example of an adornment")
  SCHEMA_ADORNMENT("SomeAdornment", "This is the value of 'SomeAdornment'")
  unsigned int schemaAdornmentItem;
};
