#include <bits/stdc++.h>

using namespace std;

inline namespace Infinity {
inline namespace Constant {
constexpr const int eof = EOF;
constexpr const int maxint = INT_MAX;
constexpr const long long maxll = LLONG_MAX;
constexpr const double eps = DBL_EPSILON;
} // namespace Infinity::Constant

inline namespace TypeDefine {
using uint = unsigned int;
using ull = unsigned long long int;
using ld = long double;
template<typename T = vector<int> > using iter = typename T::iterator;
template<typename T = int> using vector_vector = vector<vector<T> >;
template<typename T = int, typename U = int> using vector_pair = vector<pair<T, U> >;
} // namespace Infinity::TypeDefine

inline namespace IO {
const char LF = '\n';
const char SP = ' ';

inline void write(const int n)
{ printf("%d", n); }

inline void write(const unsigned n)
{ printf("%u", n); }

inline void write(const long long n)
{ printf("%" PRId64, n); }

inline void write(const unsigned long long n)
{ printf("%" PRIu64, n); }

inline void writef(const double a, const int n = 10)
{ printf("%.*f", n, a); }

inline void writef(const long double a, const int n = 18)
{ cout << setprecision(n) << fixed << a; }

inline void write(const char c)
{ printf("%c", c); }

inline void write(const char s[])
{ printf("%s", s); }

inline void write(const string &s)
{ printf("%s", s.data()); }

template<typename T, typename U>
inline void write(const pair<T, U> &p)
{ writeSP(p.first); write(p.second); }

template<class T> inline void write(const T a)
{ for (auto i = a.begin(); i != a.end(); i++) {
  if (i != a.begin()) write(SP); write(*i); } }

template<typename T> inline void write(initializer_list<T> list)
{ for (auto i = list.begin(); i != list.end(); i++) {
  if (i != list.begin()) write(SP); write(*i); } }

template<typename T> inline void writer(T begin, T end)
{ for (write(*begin++); begin != end; ++begin) write(SP), write(*begin); }

inline void writeln()
{ write(LF); }

template<typename T> inline void writeln(const T &a)
{ write(a); write(LF); }

inline void writefln(const double a, int n)
{ printf("%.*f", n, a); write(LF); }

inline void writefln(const long double a, int n = 18)
{ cout << setprecision(n) << fixed << a << endl; }

inline void writesln(const int *a, const int l, const int r)
{ for (int i = l; i <= r; i++) printf("%d ", a[i]); writeln(LF); }

template<typename T> inline void writerln(T begin, T end)
{ for (write(*begin++); begin != end; ++begin) write(SP), write(*begin); write(LF); }

template<class T> inline void writelns(const T &a)
{ for (auto n : a) writeln(n); }

template<typename T, typename ... types> inline void
write(const T &a, const types & ... args)
{ write(a); write(args ...); }

template<typename ... types> inline void writeln(const types & ... args)
{ write(args ...); write(LF); }

template<typename ... types> inline void writeSP(const types & ... args)
{ write(args ...); write(SP); }

inline void writelnYN(bool b)
{ writeln(b ? "YES" : "NO"); }

inline void writelnyn(bool b)
{ writeln(b ? "Yes" : "No"); }

string caseSharpSpace(int n)
{ return "Case #" + to_string(n) + ": "; }

string caseNoSharpSpace(int n)
{ return "Case " + to_string(n) + ": "; }

string caseSharpNoSpace(int n)
{ return "Case #" + to_string(n) + ":"; }

string caseNoSharpNoSpace(int n)
{ return "Case " + to_string(n) + ":"; }

inline int read(int &n)
{ return scanf("%d", &n); }

inline int read(long long &n)
{ return scanf("%" SCNd64, &n); }

template<typename T, typename ... types> inline int read(T &n, types & ... args)
{ return read(n) == eof ? eof : read(args ...) + 1; }

inline char getcc()
{ char c; do c = getchar(); while (isspace(c)); return c; }

inline int getint()
{ int n; read(n); return n; }

inline long long getll()
{ long long n; read(n); return n; }

inline double getdouble()
{ double n; scanf("%lf", &n); return n; }

inline vector<int> getints(int n)
{ vector<int> v(n); for (int i = 0; i < n; i++) v[i] = getint(); return v; }

inline vector<pair<int, int> > getpairs(int n)
{ vector<pair<int, int> > v(n); for (int i = 0; i < n; i++) {
  int a = getint(), b = getint(); v[i] = {a, b}; } return v; }

inline void read(string &str, const unsigned size)
{ char s[size]; scanf("%s", s); str.assign(s); }

inline string getstr(const unsigned size = 0x100000)
{ string s; read(s, size + 1); return s; }

inline string getln(const unsigned size = 0x100000)
{ char s[size + 1]; scanf("%[^\n]", s); getchar(); return string(s); }
} // namespace Infinity::IO

inline namespace Miscelleneous {
inline constexpr int ctoi(const char c)
{ return c - '0'; }

inline constexpr char itoc(const int n)
{ return n + '0'; }

inline int dtoi(const double d)
{ return round(d); }

template<typename T> inline constexpr bool in(T x, T l, T r)
{ return l <= x && x <= r; }

template<class T> inline int size(const T &a)
{ return a.size(); }

template<class T> inline void sort(T &a)
{ sort(a.begin(), a.end()); }

template<class T1, class T2> inline void sort(T1 &a, T2 comp)
{ sort(a.begin(), a.end(), comp); }

template<class T1, typename T2> inline int lbound(const T1 &a, const T2 k)
{ return lower_bound(a.begin(), a.end(), k) - a.begin(); }

template<class T1, typename T2> inline int ubound(const T1 &a, const T2 k)
{ return upper_bound(a.begin(), a.end(), k) - a.begin(); }

template<class T1, class T2> int count(T1 &a, T2 k)
{ return ubound(a, k) - lbound(a, k); }

// returning the index of the first element matched, -1 otherwise
template<class T1, class T2> int find(T1 &a, T2 k)
{ return count(a, k) ? lbound(a, k) : -1; }

template<typename T> inline void clear(T &a)
{ memset(a, 0, sizeof a); }

template<typename T> T gcd(T a, T b)
{ while (b) { T t = a % b; a = b; b = t; } return a; }

template<typename T> T lcm(T a, T b)
{ return a / gcd(a, b) * b; }

long long qpow(long long a, long long b, long long c)
{ return b ? qpow(a * a % c, b >> 1, c) * (b & 1 ? a : 1) % c : 1; }

// find (x, y) s.t. a x + b y = gcd(a, b) = d
template<typename T> T exGcd(T a, T b, T &x, T &y)
{ T d = a; if (b) { d = exGcd(b, a % b, y, x); y -= a / b * x; } else { x = 1; y = 0; } return d; }

// returns number of nks in range [l, r]
template<typename T> inline constexpr T mps(T l, T r, T k)
{ return ((r - (r % k + k) % k) - (l + (k - l % k) % k)) / k + 1; }

template<typename T> inline constexpr T sgn(T a)
{ return a ? a > 0 ? 1 : -1 : 0; }

template<typename T> inline constexpr T sq(T a)
{ return a * a; }

template<typename T> inline constexpr bool odd(T a)
{ return bool(a % 2); }

template<typename T> inline constexpr bool even(T a)
{ return !bool(a % 2); }

// simple mod
template<typename T1, typename T2> inline constexpr T1 smod(T1 x, T2 m)
{ return x > m ? x - m : x + m < m ? x + m : x; }

// returns the largest value in [l, r) s.t. check(x)
template<typename T, typename F> T dichotomy(T l, T r, F check, T prec = 1)
{ while (r - l > prec) { T m = l + (r - l) / 2; check(m) ? l = m : r = m; } return l; }

// returns the smallest value in (l, r] s.t. check(x)
template<typename T, typename F> T dichotomy2(T l, T r, F check, T prec = 1)
{ while (r - l > prec) { T m = l + (r - l) - (r - l) / 2; check(m) ? l = m : r = m; } return l; }

bool contains(const string &s, const string &t)
{ return s.find(t) != string::npos; }

template<typename T> bool contains(const T &s, typename T::value_type t)
{ for (typename T::value_type c : s) if (c == t) return true; return false; }
} // namespace Infinity::Miscelleneous
} // namespace Infinity