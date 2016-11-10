# Acronyms

* accu - accumulator
* adr - address
* alloc - allocation, allocator
* anim - animation
* ans - answer
* arb - arbiter
* arch - architecture
* arg - argument
* arr - array
* attr - attribute
* aud - audio (matches with vid and img)
* avg - average
* base - base
* be - big endian
* beg - beginning
* bgnd - background
* bin - binary
* bit - bit
* bool - boolean
* br - branch
* btn - button
* buf - buffer
* byte - byte
* cap - capability
* cb - callback
* ce - clock enable
* cfg - configuration
* chan - channel
* char - character
* chk - check
* chkb - checkbox
* chksum - check sum
* clk - clock
* clr - clear
* color - color
* cls - class (to avoid clash with reserved word)
* cmb - combobox
* cmp - comparator
* cnv - canvas (e.g. graphic context)
* col - column
* cond - condition(al)
* const - constant
* cont - container
* conv - conversion
* copy - (matches with orig)
* cnt - current count of something
* cntr - counter
* cs - chip select
* ctrl - controller
* cumul - cumulative
* cur - current
* curs - cursor
* cwd - current working directory
* dat - data
* date - date
* dec - decimal
* decd - decode(r)
* decr - decrement
* def - definition
* desc - description
* dflt - default
* dia - diameter
* dict - dictionary
* dif - difference
* dim - dimension
* dinp - data input
* dist - distance
* dly - delay
* dmux - demultiplexer
* doc - document(ation)
* done - done
* dout - data output
* dsbl - disable
* dvld - data valid
* dword - double word (32-bit)
* emu - emulate
* enbl - enable
* encd - encode(r)
* end - ending (matches length of beg)
* err - error
* evt - event
* exc - exception
* exec - execution
* ext - external
* finp - input file
* fl - flag
* filt - filter
* flt - fault
* form - form
* fout - output file
* fp - floating point
* fptr - file pointer
* freq - frequency
* frm - frame
* frst - first (matches in length: next, prev, last, curr)
* fsm - finite state machine
* func - function
* gc - garbage collector
* gen - generator
* gr - graph(ics)
* hdr - header
* hex - hexadecimal
* hi - high
* hist - history
* histgrm - histogram
* hour - hour
* i, j, k - index, loop var
* idx - index
* iface - interface
* img - image
* incr - increment (careful, incr is a keyword in TCL)
* ind - indicator
* init - initialization
* int - integer
* intr - interrupt
* irq - HW interrupt request
* last
* lay - layout
* lbl - label
* lck - lock
* lcl - local
* le - little endian
* len - length (number of components in a container)
* lim - limit
* lo - low
* loc - location
* lsr - left shift register
* lst - list
* ltl - little
* lvl - level
* max
* mean - statistical mean
* min - minimum
* minute - minute
* mngr - manager
* ms - module/memory select
* msec - millisecond
* msg - message
* mst - master
* mut - mutex
* mux - multiplexer
* nan - not-a-number
* nbr - ordinal number of sth
* next
* nsec - nanosecond
* num - total number of sth
* obj - object
* oct - octal
* oe - output enable
* ofs - offset
* old - old
* org - origin
* orig - original (matches with copy)
* par - parameter
* pass - password
* phy - phyter
* phys - physical
* pic - picture (prefer picture)
* pkg - package
* plt - plot
* prev - previous
* prio - priority
* proc - procedure, process
* prop - property
* ptr - pointer
* pwd - process working directory
* qword - quad word (64-bit)
* rad - radius
* radb - radiobox
* rcv - receive(r)
* rd - read
* rden - read enable
* rdy - ready
* rec - record
* reg - register
* req - request
* rel - release
* res - result
* ret - return (value)
* ro - read-only
* rsp - response
* rsr - right shift register
* rst - reset
* rw - read/write
* rx - reception, receiver
* sec - second (time)
* sel - selection
* sem - semaphore
* seq - sequence
* sim - simulate
* slv - slave
* snd - send(er) (note: for sound use aud)
* src - source
* sreg - shift register
* st - state
* start - start
* stim - stimulus
* stop - stop
* str - string
* struct - structure
* sum
* sync - synchronizer
* sz - size (usually, number of bytes, not number of components, which is 'len')
* t, typ - type
* tb - testbench
* tbl - table
* tgt - target
* thrd - thread
* time - time
* tmp - temporary
* tmr - timer
* tsk - task
* trx - transceiver
* tx - transmission, transmitter
* txt - text
* txtb - textbox
* und - undefined
* us - microsecond
* usr - usr
* val - value
* var - variable
* ver - version
* vid - video
* vld - valid
* win - window
* word - word (16-bit)
* wr - write
* wren - write enable
* xmp - example
* year - year

# Naming conventions

* Functions follow the **VO [Verb-Object]** model, e.g. drawStraightLine()
* Objects follow the **SOA [Subject (Owner)-Object-Attribute]** model, e.g. brushCanvas (i.e. the canvas of the brush), canvasBrush (i.e. the brush of the canvas), peopleNum (the number of people), screenSizeInch (the size of screen in inches), objDimAvg (average count of objects), lineStraight (a line that is straight), dataLoaded, blinkAllowed, winVisible
* All unit measurement names shall contain the unit as an attribute - e.g. fileSizeBytes, ballAccelMs2, objColorRgb
* Predicates - canShow, doCallParent, willTerminate, hasResources, hadError, isLoaded, wasLoaded
* FSM - nextSt (next state), prevSt (previous state), stateDecd (state decoder)
* Compound words   
  * functions, objects, properties, attributes - drawLine(), draw_line
  * types, prototypes (JS), classes - BigBang, Big_bang, big_bang_t, big_bang_arr, big_bang_rec
