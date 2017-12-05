# Header file `basics.hpp`<a id="basics.hpp"></a>

<pre><code class="language-cpp">#define <a href='doc_basics.md#basics.hpp'>HWLIB_INLINE</a>

#define <a href='doc_basics.md#basics.hpp'>HWCPP_HERE_STR</a>(X)

#define <a href='doc_basics.md#basics.hpp'>HWCPP_HERE2</a>(F, L)

#define <a href='doc_basics.md#basics.hpp'>HWCPP_HERE</a>

#define <a href='doc_basics.md#basics.hpp'>HWCPP_TRACE</a>

constexpr char[] <a href='doc_basics.md#basics.hpp'>version</a> = "V0.1 2017-11-17 work-in-progress";

struct <a href='doc_basics.md#basics.hpp'>unsupported</a>;

template &lt;typename T&gt;
struct <a href='doc_basics.md#basics.hpp'>always_false</a>;

enum class <a href='doc_basics.md#basics.hpp'>direction</a>;

template &lt;unsigned int n&gt;
struct <a href='doc_basics.md#basics.hpp'>uint_t</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>uint_t&lt;8*sizeof(unsigned char)&gt;</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>uint_t&lt;8*sizeof(unsigned int)&gt;</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>uint_t&lt;8*sizeof(unsigned long long int)&gt;</a>;

template &lt;class base&gt;
struct <a href='doc_basics.md#basics.hpp'>int_info</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>int_info&lt;unsigned long long int&gt;</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>int_info&lt;long long int&gt;</a>;

template &lt;&gt;
struct <a href='doc_basics.md#basics.hpp'>int_info&lt;int&gt;</a>;

class <a href='doc_basics.md#basics.hpp'>not_instantiable</a>;</code></pre>
