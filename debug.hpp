struct Error {
    template <class T1, class T2> Error &operator<<(pair<T1, T2> p) {
        return *this << "(" << p.first << ", " << p.second << ")";
    }
    template <class T1, class T2, class T3> Error &operator<<(tuple<T1, T2, T3> t) {
        return *this << "(" << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << ")";
    }
    template <class T1, class T2, class T3, class T4> Error &operator<<(tuple<T1, T2, T3, T4> t) {
        return *this << "(" << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << ", " << get<3>(t) << ")";
    }
    template <class T> typename enable_if<is_scalar<T>::value || is_same<T, string>::value, Error &>::type operator<<(T a) {
        return cerr << boolalpha << a, *this;
    }
    template <class T> typename enable_if<!is_scalar<T>::value && !is_same<T, string>::value, Error &>::type operator<<(T a) {
        *this << "{";
        for (auto it = a.begin(); it != a.end(); it++)
            *this << (it == a.begin() ? "" : ", ") << *it;
        return *this << "}";
    }
    template <class T> Error &operator<<(vector<bool> v) {
        return *this << vector<int>(v.begin(), v.end());
    }
    template <class T> Error &operator<<(queue<T> q) {
        vector<T> r;
        while (!q.empty()) {
            r.push_back(q.front());
            q.pop();
        }
        return *this << r;
    }
    template <class T> Error &operator<<(stack<T> s) {
        vector<T> r;
        while (!s.empty()) {
            r.push_back(s.front());
            s.pop();
        }
        return *this << r;
    }
};

#define err Error()

template <class T> void dout(string name, T a) {
    err << name << " : " << a << "\n";
}

template <class T1, class... T2> void dout(string names, T1 arg, T2... args) {
    err << names.substr(0, names.find(",")) << " : " << arg << " | ";
    dout(names.substr(names.find(",") + 2), args...);
}

#ifdef LOCAL
#define debug(...) dout(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
