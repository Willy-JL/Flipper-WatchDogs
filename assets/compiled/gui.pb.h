/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PB_GUI_GUI_PB_H_INCLUDED
#define PB_PB_GUI_GUI_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _PB_Gui_InputKey { 
    PB_Gui_InputKey_UP = 0, 
    PB_Gui_InputKey_DOWN = 1, 
    PB_Gui_InputKey_RIGHT = 2, 
    PB_Gui_InputKey_LEFT = 3, 
    PB_Gui_InputKey_OK = 4, 
    PB_Gui_InputKey_BACK = 5 
} PB_Gui_InputKey;

typedef enum _PB_Gui_InputType { 
    PB_Gui_InputType_PRESS = 0, /* *< Press event, emitted after debounce */
    PB_Gui_InputType_RELEASE = 1, /* *< Release event, emitted after debounce */
    PB_Gui_InputType_SHORT = 2, /* *< Short event, emitted after InputTypeRelease done withing INPUT_LONG_PRESS interval */
    PB_Gui_InputType_LONG = 3, /* *< Long event, emmited after INPUT_LONG_PRESS interval, asynchronouse to InputTypeRelease */
    PB_Gui_InputType_REPEAT = 4 /* *< Repeat event, emmited with INPUT_REPEATE_PRESS period after InputTypeLong event */
} PB_Gui_InputType;

/* Struct definitions */
typedef struct _PB_Gui_ScreenFrame { 
    pb_bytes_array_t *data; 
} PB_Gui_ScreenFrame;

typedef struct _PB_Gui_StartScreenStreamRequest { 
    char dummy_field;
} PB_Gui_StartScreenStreamRequest;

typedef struct _PB_Gui_StopScreenStreamRequest { 
    char dummy_field;
} PB_Gui_StopScreenStreamRequest;

typedef struct _PB_Gui_StopVirtualDisplayRequest { 
    char dummy_field;
} PB_Gui_StopVirtualDisplayRequest;

typedef struct _PB_Gui_SendInputEventRequest { 
    PB_Gui_InputKey key; 
    PB_Gui_InputType type; 
} PB_Gui_SendInputEventRequest;

typedef struct _PB_Gui_StartVirtualDisplayRequest { 
    bool has_first_frame;
    PB_Gui_ScreenFrame first_frame; /* optional */
} PB_Gui_StartVirtualDisplayRequest;


/* Helper constants for enums */
#define _PB_Gui_InputKey_MIN PB_Gui_InputKey_UP
#define _PB_Gui_InputKey_MAX PB_Gui_InputKey_BACK
#define _PB_Gui_InputKey_ARRAYSIZE ((PB_Gui_InputKey)(PB_Gui_InputKey_BACK+1))

#define _PB_Gui_InputType_MIN PB_Gui_InputType_PRESS
#define _PB_Gui_InputType_MAX PB_Gui_InputType_REPEAT
#define _PB_Gui_InputType_ARRAYSIZE ((PB_Gui_InputType)(PB_Gui_InputType_REPEAT+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PB_Gui_ScreenFrame_init_default          {NULL}
#define PB_Gui_StartScreenStreamRequest_init_default {0}
#define PB_Gui_StopScreenStreamRequest_init_default {0}
#define PB_Gui_SendInputEventRequest_init_default {_PB_Gui_InputKey_MIN, _PB_Gui_InputType_MIN}
#define PB_Gui_StartVirtualDisplayRequest_init_default {false, PB_Gui_ScreenFrame_init_default}
#define PB_Gui_StopVirtualDisplayRequest_init_default {0}
#define PB_Gui_ScreenFrame_init_zero             {NULL}
#define PB_Gui_StartScreenStreamRequest_init_zero {0}
#define PB_Gui_StopScreenStreamRequest_init_zero {0}
#define PB_Gui_SendInputEventRequest_init_zero   {_PB_Gui_InputKey_MIN, _PB_Gui_InputType_MIN}
#define PB_Gui_StartVirtualDisplayRequest_init_zero {false, PB_Gui_ScreenFrame_init_zero}
#define PB_Gui_StopVirtualDisplayRequest_init_zero {0}

/* Field tags (for use in manual encoding/decoding) */
#define PB_Gui_ScreenFrame_data_tag              1
#define PB_Gui_SendInputEventRequest_key_tag     1
#define PB_Gui_SendInputEventRequest_type_tag    2
#define PB_Gui_StartVirtualDisplayRequest_first_frame_tag 1

/* Struct field encoding specification for nanopb */
#define PB_Gui_ScreenFrame_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_Gui_ScreenFrame_CALLBACK NULL
#define PB_Gui_ScreenFrame_DEFAULT NULL

#define PB_Gui_StartScreenStreamRequest_FIELDLIST(X, a) \

#define PB_Gui_StartScreenStreamRequest_CALLBACK NULL
#define PB_Gui_StartScreenStreamRequest_DEFAULT NULL

#define PB_Gui_StopScreenStreamRequest_FIELDLIST(X, a) \

#define PB_Gui_StopScreenStreamRequest_CALLBACK NULL
#define PB_Gui_StopScreenStreamRequest_DEFAULT NULL

#define PB_Gui_SendInputEventRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    key,               1) \
X(a, STATIC,   SINGULAR, UENUM,    type,              2)
#define PB_Gui_SendInputEventRequest_CALLBACK NULL
#define PB_Gui_SendInputEventRequest_DEFAULT NULL

#define PB_Gui_StartVirtualDisplayRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  first_frame,       1)
#define PB_Gui_StartVirtualDisplayRequest_CALLBACK NULL
#define PB_Gui_StartVirtualDisplayRequest_DEFAULT NULL
#define PB_Gui_StartVirtualDisplayRequest_first_frame_MSGTYPE PB_Gui_ScreenFrame

#define PB_Gui_StopVirtualDisplayRequest_FIELDLIST(X, a) \

#define PB_Gui_StopVirtualDisplayRequest_CALLBACK NULL
#define PB_Gui_StopVirtualDisplayRequest_DEFAULT NULL

extern const pb_msgdesc_t PB_Gui_ScreenFrame_msg;
extern const pb_msgdesc_t PB_Gui_StartScreenStreamRequest_msg;
extern const pb_msgdesc_t PB_Gui_StopScreenStreamRequest_msg;
extern const pb_msgdesc_t PB_Gui_SendInputEventRequest_msg;
extern const pb_msgdesc_t PB_Gui_StartVirtualDisplayRequest_msg;
extern const pb_msgdesc_t PB_Gui_StopVirtualDisplayRequest_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PB_Gui_ScreenFrame_fields &PB_Gui_ScreenFrame_msg
#define PB_Gui_StartScreenStreamRequest_fields &PB_Gui_StartScreenStreamRequest_msg
#define PB_Gui_StopScreenStreamRequest_fields &PB_Gui_StopScreenStreamRequest_msg
#define PB_Gui_SendInputEventRequest_fields &PB_Gui_SendInputEventRequest_msg
#define PB_Gui_StartVirtualDisplayRequest_fields &PB_Gui_StartVirtualDisplayRequest_msg
#define PB_Gui_StopVirtualDisplayRequest_fields &PB_Gui_StopVirtualDisplayRequest_msg

/* Maximum encoded size of messages (where known) */
/* PB_Gui_ScreenFrame_size depends on runtime parameters */
/* PB_Gui_StartVirtualDisplayRequest_size depends on runtime parameters */
#define PB_Gui_SendInputEventRequest_size        4
#define PB_Gui_StartScreenStreamRequest_size     0
#define PB_Gui_StopScreenStreamRequest_size      0
#define PB_Gui_StopVirtualDisplayRequest_size    0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
