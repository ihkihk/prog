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
* be - big endian
* beg - beginning
* bgnd - background
* bin - binary
* bit - bit
* bool - boolean
* br - branch
* bt - bit
* btn - button
* buf - buffer
* byte - byte
* cap - capability
* cb - callback
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
* ctrl - controller
* cumul - cumulative
* cur - current
* curs - cursor
* cwd - current working directory
* dat - data
* date - date
* dcd - decode(r)  ?????
* dec - decimal
* decr - decrement
* def - definition
* desc - description
* dflt - default
* dia - diameter
* dict - dictionary
* diff - difference
* dim - dimension
* dist - distance
* dly - delay
* doc - document(ation)
* done - done
* dsbl - disable
* dword - double word (32-bit)
* ecd - encode(r) ?????
* emu - emulate
* enbl - enable
* end - ending (matches length of beg)
* err - error
* evt - event
* exc - exception
* exec - execution
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
* inc - increment
* ind - indicator
* init - initialization
* int - integer
* intr - interrupt
* irq - HW interrupt request
* last
* lay - layout
* lbl - label
* lck - lock
* le - little endian
* len - length (number of components in a container)
* lim - limit
* lo - low
* lsr - left shift register
* lst - list
* ltl - little
* lvl - level
* max
* mean - statistical mean
* min - minimum
* minute - minute
* mngr - manager
* ms - millisecond
* msg - message
* mux - mutex
* nan - not-a-number
* nbr - ordinal number of sth
* next
* ns - nanosecond
* num - total number of sth
* obj - object
* oct - octal
* ofs - offset
* old - old
* org - origin
* orig - original (matches with copy)
* par - parameter
* pass - password
* phy - phyter
* phys - physical
* pic - picture (prefer picture)
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
* rdy - ready
* rec - record
* reg - register
* req - request
* rel - release
* res - result
* ret - return (value)
* rsp - response
* rsr - right shift register
* rst - reset
* rx - reception, receiver
* sec - second (time)
* sel - selection
* seq - sequence
* sim - simulate
* snd - send(er) (note: for sound use aud)
* src - source
* sreg - shift register
* st - state
* start - start
* stop - stop
* str - string
* struct - structure
* sum
* sync - synchronizer
* sz - size (usually, number of bytes, not number of components, which is 'len')
* t, typ - type
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
* win - window
* word - word (16-bit)
* wr - write
* xmp - example
* year - year

# Naming conventions

* Functions follow the **VO [Verb-Object]** model, e.g. drawStraightLine()
* Objects follow the **SOA [Subject (Owner)-Object-Attribute]** model, e.g. brushCanvas (i.e. the canvas of the brush), canvasBrush (i.e. the brush of the canvas), peopleNum (the number of people), screenSizeInch (the size of screen in inches), objDimAvg (average count of objects), lineStraight (a line that is straight)
* All unit measurement names shall contain the unit as an attribute - e.g. fileSizeBytes, ballAccelMs2, objColorRgb
* Flags - dataLoaded, blinkAllowed, winVisible
* Predicates - canShow, doShow, doCallParent, willTerminate, hasResources, isLoaded
* FSM - nextSt (next state), prevSt (previous state), stateDec (state decoder)
* Compound words   
  * functions, objects, properties, attributes - drawLine(), draw_line
  * types, prototypes (JS), classes - BigBang
