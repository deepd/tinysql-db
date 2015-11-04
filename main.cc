#include <iostream>
#include "DatabaseManager.cc"

int main() {
	// Initialize the memory, disk, the database manager and the parser
	MainMemory mem;
	Disk disk;
	DatabaseManager db_manager(&mem, &disk);
	while (1) {
	  std::string query;
	  getline(std::cin, query);
	  if (query == "exit") {
	    break;
	  }
	  db_manager.processQuery(query);
	}
	return 0;
}