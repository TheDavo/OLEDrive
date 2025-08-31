#ifndef EVENT_MANAGER_H_
#define EVENT_MANAGER_H_

#include "./event_types.h"

#define EVT_MGR_BUF_SIZE 32
typedef struct event_manager {
  // events are implemented as a queue
  event_t events[EVT_MGR_BUF_SIZE];
  // index 0 is the front of the queue at the start
  int front;
  int rear;
} event_manager_t;

void evt_mgr_add_event(event_manager_t *evt_mgr, event_t e);

void evt_mgr_dispatch_events(event_manager_t *evt_mgr);

void evt_mgr__handle_ui_events(event_manager_t *evt_mgr);
void evt_mgr__handle_ble_events(event_manager_t *evt_mgr);
void evt_mgr__handle_user_input_events(event_manager_t *evt_mgr);
void evt_mgr__handle_system_events(event_manager_t *evt_mgr);


#endif
