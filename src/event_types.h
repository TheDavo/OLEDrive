#ifndef EVENT_TYPES_H
#define EVENT_TYPES_H

typedef enum event_type_group {
  EVT_GRP_UI,
  EVT_GRP_BLE,
  EVT_GRP_USER_INPUT,
  EVT_GRP_SYSTEM,

} event_type_group_e;

typedef enum event_type {
  EVT_NOOP,

} event_type_e;

typedef struct event {
  event_type_group_e evt_group;
  event_type_e evt_type;
  void *data;
} event_t;


#endif
