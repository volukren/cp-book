#include "header-fixer.h"
#include <map>
#include <string>
#include <vector>
#include <iostream>

std::map<std::string, std::vector<std::string>> header_keys = {
  {"bitset",            {
                          "bitset<"
                        }
  },
  {"cstdlib",           {
                          "size_t", "RAND_MAX", "exit(", "atof(", "atoi(", 
                          "atol(", "atoll(", "strtol(","strtoll(", "strtoul(", 
                          "strtoull(", "strtof(", "strtod(", "strtold(", "rand(", 
                          "srand(", "qsort(", "bsearch(", "abs(", "labs(", 
                          "fabs(", "llabs("
                        }
  },
  {"ctime",             {
                          "CLOCKS_PER_SEC", "clock_t", "time_t", "time(", "clock("
                        }
  },
  {"functional",        {
                          "function<", "plus<", "minus<", "multiplies<", "divides<", 
                          "modulus<", "negate<","equal_to<", "not_equal_to<", "greater<", 
                          "less<", "greater_equal<", "less_equal<", "logical_and<", 
                          "logical_or<", "logical_not<", "bit_and<", "bit_or<", "bot_xor<", 
                          "bit_not<"
                        }
  },
  {"initializer_list",  {
                          "initializer_list<"
                        }
  },
  {"tuple",             {
                          "tuple<", "make_tuple("
                        }
  },
  {"utility",           {
                          "swap(", "move(", "declval(", "make_pair(", "pair<"
                        }
  },
  {"cinttypes",         {
                          "int64_t", "int32_t", "int8_t", "int64_t"
                        }
  },
  {"climits",           {
                          "INT_MAX", "INT_MIN", "LLONG_MIN", "LLONG_MAX", "ULLONG_MAX", 
                          "UINT_MAX"
                        }
  },
  {"limits",            {
                          "numeric_limits<"
                        }
  },
  {"cassert",           {
                          "assert("
                        }
  },
  {"cctype",            {
                          "isalnum(", "isalpha(", "isblank(", "iscntrl(", "isdigit(", 
                          "isgraph(", "islower(", "isprint(", "ispunct(", "isspace(", 
                          "isupper(", "isxdigit(", "tolower(", "toupper("
                        }
  },
  {"cstring",           {
                          "strcpy", "strncpy", "strcat", "strncat", "strxfrm", 
                          "strlen", "strcmp", "strncmp", "strcoll", "strchr", 
                          "strrchr", "strspn", "strcspn", "strpbrk", "strstr", 
                          "strtok", "memchr", "memcmp","memset", "memcpy", 
                          "memmove", "strerror"
                        }
  },
  {"string",            {
                          "string", "stoll(", "stoi(", "stol(", "stoul(", "stoull(", 
                          "stof(", "stold(", "stod(", "to_string(", "getline("
                        }
  },
  {"array",             {
                          "array<", "to_array("
                        }
  },
  {"deque",             {
                          "deque<"
                        }
  },
  {"forward_list",      {
                          "forward_list<"
                        }
  },
  {"list",              {
                          "list<"
                        }
  },
  {"map",               {
                          "map<", 
                          "multimap<"
                        }
  },
  {"queue",             {
                          "queue<", "priority_queue<"
                        }
  },
  {"set",               {
                          "set<", "multiset<"
                        }
  },
  {"stack",             {
                          "stack<"
                        }
  },
  {"unordered_map",     {
                          "unordered_map<", "unordered_multimap<"
                        }
  },
  {"unordered_set",     {
                          "unordered_set<", "unordered_multiset<"
                        }
  },
  {"vector",            {
                          "vector<"
                        }
  },
  {"iterator",          {
                          "reverse_iterator", "back_inserter", "inserter", 
                          "front_inserter", "distance", "next(", "prev("
                        }
  },
  {"algorithm",         {
                          "all_of(", "any_of(", "none_of(", "for_each(", "for_each_n(", 
                          "count(", "count_if(","mismatch", "find(", "find_if(", 
                          "find_if_not(", "find_end(", "find_first_of(", "adjacent_find(",
                          "search(", "search_n(", "copy(", "copy_if(", "copy_n(", 
                          "copy_backward(", "move(", "move_backward(","fill(", 
                          "fill_n(", "transform(", "generate(", "generate_n(", 
                          "remove(", "remove_if(","remove_copy(", "remove_copy_if(", 
                          "replace(", "replace_if(", "replace_copy(", "replace_copy_if(",
                          "swap(", "swap_ranges(", "iter_swap(", "reverse(",
                          "reverse_copy(", "rotate(", "rotate_copy(",
                          "shift_left(", "shift_right(", "random_shuffle(", 
                          "shuffle(", "sample(", "unique(",
                          "unique_copy(", "is_partitioned(", "partition(", 
                          "partition_copy(", "stable_partition(",
                          "partition_point(", "is_sorted(", "is_sorted_until(", 
                          "sort(", "partial_sort(","partial_sort_copy(", "stable_sort(", 
                          "nth_element(", "lower_bound(", "upper_bound(",
                          "binary_search(", "equal_range(", "merge(", "inplace_merge(", 
                          "set_difference(","set_intersection(", "set_symmetric_difference(", 
                          "set_union(", "is_heap(", "is_heap_until(","make_heap(", 
                          "push_heap(", "pop_heap(", "sort_heap(", "max(", "max_element(",
                          "min(", "min_element(", "minmax(", "minmax_element(", "clamp(", 
                          "equal(", "lexicographical_compare(",
                          "lexicographical_compare_three_way(", "is_permutation(", 
                          "next_permutation(", "prev_permutation("
                        }
  },
  {"cmath",             {
                          "abs(", "fabs(", "fabsf(", "fabsl(", "fmod(", "fmodf(", 
                          "fmodl(", "remainder(", "remainderf(", "remainderl(",
                          "remquo(", "remquof(", "remquol(", "fma(", "fmaf(", 
                          "fmal(", "fmax(", "fmaxf(", "fmaxl(", "fmin(",
                          "fminf(", "fminl(", "fdim(", "fdimf(", "fdiml(", "nan(", 
                          "nanf(", "nanl(", "lerp(", "exp(","expf(", "expl(", 
                          "exp2(", "exp2f(", "exp2l(", "expm1(", "expm1f(", 
                          "expm1l(", "log(", "logf(", "logl(","log10(", "log10f(", 
                          "log10l(", "log2(", "log2f(", "log2l(", "log1p(", 
                          "log1pf(", "log1pl(", "pow(","powf(", "powl(", "sqrt(", 
                          "sqrtf(", "sqrtl(", "cbrt(", "cbrtf(", "cbrtl(", "hypot(", 
                          "hypotf(", "hypotl(","sin(", "sinf(", "sinl(", "cos(", 
                          "cosf(", "cosl(", "tan(", "tanf(", "tanl(", "asin(", 
                          "asinf(","asinl(", "acos(", "acosf(", "acosl(", 
                          "atan(", "atanf(", "atanl(", "atan2(", "atan2f(", 
                          "atan2l(", "sinh(","sinhf(", "sinhl(", "cosh(", 
                          "coshf(", "coshl(", "tanh(", "tanhf(", "tanhl(", 
                          "asinh(", "asinhf(", "asinhl(","acosh(", "acoshf(", 
                          "acoshl(", "atanh(", "atanhf(", "atanhl(", "erf(", 
                          "erff(", "erfl(", "tgamma(", "tgammaf(","tgammal(", 
                          "lgamma(", "lgammaf(", "lgammal(", "ceil(", "ceilf(", 
                          "ceill(", "floor(", "floorf(", "floorl(","trunc(", 
                          "truncf(", "truncl(", "round(", "roundf(", "roundl(", 
                          "lround(", "lroundf(", "lroundl(","llround(", 
                          "llroundf(", "llroundl(", "nearbyint(", "nearbyintf(", 
                          "nearbyintl(", "rint(", "rintf(","rintl(", "lrint(", 
                          "lrintf(", "lrintl(", "llrint(", "llrintf(", "llrintl(", 
                          "frexp(", "frexpf(", "frexpl(","ldexp(", "ldexpf(", 
                          "ldexpl(", "modf(", "modff(", "modfl(", "scalbn(", 
                          "scalbnf(", "scalbnl(", "scalbln(","scalblnf(", 
                          "scalblnl(", "ilogb(", "ilogbf(", "ilogbl(", "logb(", 
                          "logbf(", "logbl(", "nextafter(","nextafterf(", "nextafterl(", 
                          "nexttoward(", "nexttowardf(", "nexttowardl(", "copysign(",
                          "copysignf(", "copysignl(", "fpclassify(", "isfinite(", 
                          "isinf(", "isnan(", "isnormal(", "signbit(","isgreater(", 
                          "isgreaterequal(", "isless(", "islessequal(", "islessgreater(", 
                          "isunordered("
                        }
  },
  {"complex",           {
                          "complex<"
                        }
  },
  {"numeric",           {
                          "iota(", "accumulate(", "partial_sum(", "reduce(", 
                          "transform_reduce(", "inner_product(", 
                          "adjacent_difference(", "inclusive_scan(", "exclusive_scan(", 
                          "transform_inclusive_scan(","transform_exclusive_scan(", 
                          "gcd(", "lcm(", "midpoint("
                        }
  },
  {"random",            {
                          "mt19937", "mt19937_64", "random_device"
                        }
  },
  {"valarray",          {
                          "valarray<"
                        }
  },
  {"cstdio",            {
                          "stdin", "stdout", "stderr", "fopen(", "freopen(", "fclose(", 
                          "fflush(", "fread(", "fwrite(", "fgetc(","getc(", "fgets(", 
                          "fputc(", "putc(", "fputs(", "getchar(", "gets(", "putchar(", 
                          "puts(", "ungetc(", "scanf(", "fscanf(", "sscanf(", "printf(", 
                          "fprintf(", "sprintf(", "ftell(", "fgetpos(", "fseek(", 
                          "fsetpos(", "rewind(", "feof(", "remove(", "rename(", 
                          "NULL", "EOF"
                        }
  },
  {"fstream",           {
                          "ifstream", "ofstream", "fstream"
                        }
  },
  {"iomanip",           {
                          "setbase(", "resetiosflags(", "setiosflags(", "setfill(", 
                          "setw(", "setprecision(", "get_money(", "put_money(", 
                          "get_time(", "put_time(", "quoted"
                        }
  },
  {"iostream",          {
                          "cerr", "cin", "cout", "endl"
                        }
  },
  {"sstream",           {
                          "stringstream"
                        }
  }
};

const std::string USING_STR = "using namespace std;";

int skip_leading_spaces(const std::string&, size_t);
void print(std::vector<std::string>);
bool is_header(const std::string&);
std::vector<std::string> remove_headers(const std::vector<std::string>&);
void process(std::vector<std::string>& file_content);
bool is_using_line(const std::string&);
std::vector<std::string> remove_using(const std::vector<std::string>&);
std::vector<std::string> remove_empty_lines(const std::vector<std::string>& file_content);

size_t skip_leading_spaces(const std::string& line) {
  size_t i = 0;
  while (i < line.size() && line[i] == ' ') {
    ++i;
  }
  return i;
}

bool is_header(const std::string& line) {
  size_t i = skip_leading_spaces(line);
  if (i >= line.size() || line[i] != '#') {
    return false;
  }
  ++i; // skipping #
  i += skip_leading_spaces(line.substr(i));
  if (i >= line.size()) {
    return false;
  }
  if (line.substr(i, 7) != "include") {
    return false;
  }
  return true;
}

std::vector<std::string> remove_headers(const std::vector<std::string>& file_content) {
  std::vector<std::string> res;
  for (const auto& line : file_content) {
    if (is_header(line)) {
      continue;
    }
    res.push_back(line);
  }
  return res;
}

bool is_using_line(const std::string& line) {
  size_t i = skip_leading_spaces(line);
  return line.substr(i) == USING_STR;
}

std::vector<std::string> remove_using(const std::vector<std::string>& file_content) {
  std::vector<std::string> res;
  for (const auto& line : file_content) {
    if (is_using_line(line)) {
      continue;
    }
    res.push_back(line);
  }
  return res;
}

std::vector<std::string> add_headers(const std::vector<std::string>& file_content) {
  std::vector<std::string> res;
  for (const auto& [key, value]: header_keys) {
    bool found = false;
    for (const auto& current_value : value) {
      for (const auto& line : file_content) {
        if (line.find(current_value) != std::string::npos) {
          found = true;
          break;
        }
      }
    }
    if (found) {
      res.push_back("#include <" + key + ">");
    }
  }
  res.push_back("");
  res.push_back(USING_STR);
  res.push_back("");
  for (const auto& line : file_content) {
    res.push_back(line);
  }
  return res;
}

std::vector<std::string> remove_empty_lines(const std::vector<std::string>& file_content) {
  std::vector<std::string> res;
  for (const auto& line : file_content) {
    if (skip_leading_spaces(line) == line.size()) {
      continue;
    }
    res.push_back(line);
  }
  return res;
}

void process_headers(std::vector<std::string>& file_content) {
  file_content = remove_headers(file_content);
  file_content = remove_using(file_content);
  file_content = remove_empty_lines(file_content);
  file_content = add_headers(file_content);
  for (auto line : file_content) {
    std::cout << line << std::endl;
  }
}

