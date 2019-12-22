#include <tabulate/table.hpp>

using namespace tabulate;

int main() {
  Table employees;

  // Add rows
  employees.add_row({"Emp. ID", "First Name", "Last Name", "Department"});
  employees.add_row({"101", "Donald", "Patrick", "Finance"});
  employees.add_row({"102", "Donald", "Patrick", "Marketing"});
  employees.add_row({"103", "Ian", "Jacob", "Engineering"});

  // Format the header
  employees[0].format()
    .font_color(Color::yellow)
    .font_style({FontStyle::bold});

  // Print the table
  std::cout << employees << std::endl;
}