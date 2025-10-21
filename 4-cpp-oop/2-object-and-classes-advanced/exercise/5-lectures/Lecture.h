#include "ResourceType.h"
#include <set>
#include <map>
#include <vector>

namespace SoftUni {
    using ResourceTypeVector = std::vector<ResourceType>;

    class Lecture {
        using LectureData = std::set<Resource>;
        LectureData data;

    public:
        Lecture& operator<<(const Resource& r) {
            auto it = data.find(r);
            if (it != data.end()) data.erase(it);
            data.insert(r);
            return *this;
        }

        LectureData::iterator begin() { return data.begin(); }
        LectureData::iterator end()   { return data.end(); }
        LectureData::const_iterator begin() const { return data.begin(); }
        LectureData::const_iterator end()   const { return data.end(); }

        int operator[](ResourceType rt) const {
            int cnt = 0;
            for (const Resource& r : data) {
                if (r.getType() == rt) ++cnt;
            }
            return cnt;
        }

        friend ResourceTypeVector& operator<<(ResourceTypeVector& vrt, const Lecture& l);
    };

    inline ResourceTypeVector& operator<<(ResourceTypeVector& vrt, const Lecture& l) {
        std::map<ResourceType, int> resTypes;
        for (const Resource& r : l) resTypes[r.getType()]++;

        vrt.clear();
        for (const auto& kv : resTypes) {
            vrt.push_back(kv.first);
        }
        return vrt;
    }
}
