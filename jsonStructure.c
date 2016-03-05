// JSON into C Structure

struct contactPerson
{
  int *contact_person_id;
  char *first_name;
  char *last_name;
  char *email;
};
struct contact
{
  int *contact_id;
  char *contact_name;
  char *street;
  char *area;
  char *city;
  struct contactPerson *contact_persons;
}*contacts;
  
