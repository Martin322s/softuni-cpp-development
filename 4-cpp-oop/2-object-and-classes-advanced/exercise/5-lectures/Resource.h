#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"
#include <iostream>
#include <string>
#include <sstream>

namespace SoftUni {
	class Resource {
		int id;
		ResourceType rt = ResourceType::DEMO;
		std::string link;
		
		public:
			Resource() {}
			
			Resource(int id, ResourceType rt, std::string link) :
				id(id),
				rt(rt),
				link(link)
			{}
			
			int getId() const {
				return this->id;
			}
			
			ResourceType getType() const {
				return this->rt;
			}
			
			std::string getLink() const {
				return this->link;
			}
			
			bool operator < (const Resource & other) const {
				return this->id < other.id;
			}
	};
	
	std::istream & operator >> (std::istream & in, ResourceType & rt) {
		std::string str;
		in >> str;
		
		if (str == "Demo") {
			rt = ResourceType::DEMO;
		} else if (str == "Video") {
			rt = ResourceType::VIDEO;
		} else {
			rt = ResourceType::PRESENTATION;
		}
		
		return in;
	}
	
	std::istream & operator >> (std::istream & in, Resource & r) {
		int id;
		ResourceType rt;
		std::string link;
		
		in >> id;
		in >> rt;
		in >> link;
		
		r = Resource(id, rt, link);
		
		return in;
	}
	
	std::ostream & operator << (std::ostream & out, const Resource & r) {
		out << r.getId() << " " << r.getType() << " " << r.getLink();
		
		return out;
	}
}

#endif 

