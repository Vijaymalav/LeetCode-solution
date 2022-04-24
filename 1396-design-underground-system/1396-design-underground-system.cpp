class UndergroundSystem {
public:
 unordered_map<int, pair<string, int>> checkmp; // Uid - {StationName, Time}
    unordered_map<string, pair<int, int>> routemp; // RouteName - {TotalTime, Count}
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkmp[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checkmp[id];
        checkmp.erase(id); // Remove after using it which will not make HashTable big
            
        string routeName = checkIn.first + "_" + stationName;
        routemp[routeName].first += t - checkIn.second;
        routemp[routeName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = routemp[routeName];
        return (double) route.first / route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */