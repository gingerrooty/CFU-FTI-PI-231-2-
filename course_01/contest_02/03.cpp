bool compare(const std::string& a, const std::string& b) {
    int Ca = 0;
    int Cb = 0;
    
    for (char c : a) {
        if (c == '1') {
            Ca++;
        }
    }
    for (char c : b) {
        if (c == '1') {
            Cb++;
        }
    }
    if (Ca > Cb) {
        return true;
    }
    else if (Ca < Cb) {
        return false;
    }
    else if (Ca == Cb){
        if (a.length() > b.length()) {
            return false;
        }
        else if (a.length() < b.length()) {
            return true;
        }
        else if (a.length() == b.length()){
            if (a.find('0') >= b.find('0')) {
                return false;
            }
            else {
                return true;
            }
        }
    }
}