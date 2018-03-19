# CTO

In HwCpp, the *Compile Time Object* (CTO) is the basic abstraction object.
Syntactically, a CTO is a class with only static things:
static constants, static variables, static functions, and types
(which are inherently static in the sense that they belong to the class, 
not to an object).

=example

CTO's play the role that objects play in the traditional OO style. 
The reason for using CTO's instead of run-time objects is 
to avoid virtual functions, which enables optimizations, 
and allows for static reasoning about the call tree.
The downside of CTO's is that their structure must be static 
(known at compile time).
This generally matches well with embedded hardware.

# Tag

In HwCpp, a *tag* is a (static) const within a CTO that states that the CTO 
adheres to a a specific abstraction. 
For the abstraction NAME the tag is is_NAME_tag.

=example

# Wrapper

In HwCpp, the wrapper is the abstraction mechanism that 
transforms a CTO to another CTO.
The same wrapper name play the role of adapter or decorator, 
depending on the CTO it operates on, hence those terms are not used in HwCpp.

=example

# Box

In HwCpp, a *box* is a CTO that you can read a value from 
and/or write a value to.
It is the basic abstraction used in HwCpp.
A plain box has 
 - a tag that indicates that it is a box
 - a value_t that is the type of the value that you can read and/or write
 - an init() function that must be called before 
   the functionality of the box can be used
 
A read box is a box that has a read() function that returns the value_t, 
and a tag that indicates that it is a read_box.

Similarly, a write box is a box that has a write( value_t ) function, 
and a tag that indicates that it is a write_box.

A box can be a both a read box and a write box. 
It would have both tags, and provide both functions.

A simplex box is a box that has both the read and the write functions, 
but only of them can be used at any time.

A simplex box has a usage( u ) function which selects 
which function can be used:
after a usage( read ) call only the read function can be used, 
after a usage( write ) call only the write function can be used.

Another way to use a simplex box is to adapt it to a read box by
using the read<> adapter, or to a write box by using the write<> adapter.
In adapted box the 'other' functionality is removed, and its init() 
call takes care of selecting the usage.

A box can be a read_box, a write_box, a simplex_box, 
or both a read_box and a write_box. 
As a degenerate case, a box can also be none of the above, 
but such a box provides no functions except init().

Boxes can have refresh() and/or flush() functions, 
as explained under buffering.

# Buffering

The operations on a box can have either direct or buffered semantics.
The effect of a direct write is manifest before 
the moment the function returns.
A direct read returns the value as was manifest during 
the execution of the read.

Read and simplex boxes have, beside the read() function, 
a refresh() function.
The value returned by a buffered read was manifest some time 
between the last refresh() call and the read() itself.

Write and simplex boxes have, beside the write() function, 
a flush() function.
The effect of a buffered write can 
(at the discretion of the implementation)
be postponed until the flush() function is called.

It depends on the particular box whether read() and write() 
are buffered or direct.
When they are direct, the refresh() and/or flush() functions 
are still present, but don't do anything useful.

The direct<> wrapper creates a box with direct semantics from a box 
(that can have either direct or buffered semantics).

The buffered<> wrapper creates a box with buffered semantics from a box 
(that can have either buffered or unbuffered semantics). 
Note that this doesn't necessarily imply that buffering takes place, 
because direct semantics satisfies the requirements of buffered semantics.

When a box user wants his read() and/or write() 
calls to have direct effect, he can use the direct<> decorator 
to create a box that has direct semantics.

# Use

# Store

A store(a box that has store semantics) is a box that conceptually stores 
a single value, much like a plain variable.
When a value is written to a store, any previous value no longer matters.
When a value is read from a store, 
this value represents the current state of the store: any history
of the store no longer matters.

Examples of stores are IO pins and ports, a ADCs and DACs,
and keypads.

# Stream

A stream (a box that has stream semantics) remembers each value that 
is written to it, and whenever a value is read from it is removed.
A stream behaves like a (first-in first-out) queue. 
Other names for such a thing are FIFO, channel.

A stream can (at a particular moment) be full, which
causes a write() to block until the stream is no longer full.
Likewise, the stream can be empty, which causes a read()
to block until there is a value to be read.

For situations which in which blocking would not be acceptable
a read stream has a function read_would_block().
When this function returns false, a next read() call will not block.
Similarly, a write stream has a function write_would_block().
If this function returns false, the next write() call will not block.

Examples of streams are files, UARTs, keyboards and character consoles.
