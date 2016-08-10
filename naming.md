# Acronyms

* accu - accumulator
* anim - animation
* arb - arbiter
* arch - architecture
* arg - argument
* arr - array
* attr - attribute
* aud - audio (matches with vid and img)
* avg - average
* bckg - background
* be - big endian
* beg - beginning
* bin - binary
* bool - boolean
* br - branch
* bt - bit
* btn - button
* by - byte
* cb - callback
* cfg - configuration
* char - character
* chk - check
* chkb - checkbox
* chksum - check sum
* clr - color
* cls - class (to avoid clash with reserved word)
* cmb - combobox
* cnv - canvas (e.g. graphic context)
* col - column
* cond - condition(al)
* cont - container
* conv - conversion
* copy - (matches with orig)
* cnt - counter that counts
* ctrl - controller
* cumul - cumulative
* cur - cursor
* curr - current
* cwd - current working directory
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
* doc - document(ation)
* ecd - encode(r) ?????
* emu - emulate
* end - ending (matches length of beg)
* err - error
* evt - event
* finp - input file
* fl - flag
* filt - filter
* flt - fault
* fout - output file
* fp - floating point
* fptr - file pointer
* freq - frequency
* frm - frame
* frst - first (matches in length: next, prev, last, curr)
* fsm - finite state machine
* func - function
* gc - garbage collector
* gr - graph(ics)
* hdr - header
* hex - hexadecimal
* hist - history
* histgrm - histogram
* i, j, k - index, loop var
* idx - index
* img - image
* inc - increment
* ind - indicator
* init - initialization
* int - integer
* last
* lay - layout
* lbl - label
* lck - lock
* le - little endian
* lst - list
* ltl - little
* lvl - level
* max
* mean - statistical mean
* min
* mux - mutex
* nan - not-a-number
* nbr - ordinal number of sth
* next
* num - total number of sth
* obj - object
* oct - octal
* org - origin
* orig - original (matches with copy)
* par - parameter
* pass - password
* pic - picture (prefer picture)
* plt - plot
* prev - previous
* proc - procedure, process
* ptr - pointer
* pwd - process working directory
* rad - radius
* radb - radiobox
* rcv - receive
* rec - record
* reg - register
* req - request
* rel - release
* res - result
* ret - return (value)
* rsp - response
* sel - selection
* sim - simulate
* snd - send (note: for sound use aud)
* st - state
* str - string
* struct - structure
* sum
* sz - size
* t, typ - type
* tbl - table
* thrd - thread
* tsk - task
* txt - text
* txtb - textbox
* und - undefined
* usr - usr
* val - value
* ver - version
* vid - video
* win - window

# Naming conventions

* Functions follow the **VO [Verb-Object]** model, e.g. drawLine()
* Objects follow the **SOA [Subject (Owner)-Object-Attribute]** model, e.g. brushCanvas (i.e. the canvas of the brush), canvasBrush (i.e. the brush of the canvas), peopleNum (the number of people), screenSizeInch (the size of screen in inches), objDimAvg (average count of objects)
* Flags - dataLoaded, blinkAllowed, winVisible, canShow, doShow, doCallParent
* Compound words   
  * functions, objects, properties, attributes - drawLine(), draw_line
  * types, prototypes (JS), classes - BigBang
