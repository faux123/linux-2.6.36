/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#ifndef NME_CONNECTION_MANAGER_XML_SIGNALS_H
#define NME_CONNECTION_MANAGER_XML_SIGNALS_H

#ifdef __cplusplus
extern "C" {
#endif

#define NME_CONN_MGR_DISCONNECT_REQ_ID                               0x6201
#define NME_CONN_MGR_DISCONNECT_CFM_ID                               0x6202
#define NME_CONN_MGR_TERMINATE_REQ_ID                                0x6203
#define NME_CONN_MGR_TERMINATE_CFM_ID                                0x6204


/* -------------------------- nme_conn_mgr_disconnect_req -------------------------- */
typedef struct NmeConnMgrDisconnectReq_Evt
{
    FsmEvent                        common;
    CsrBool                         confirmationRequired;
    unifi_ConnMgrDisconnectReason   reason;
} NmeConnMgrDisconnectReq_Evt;

#define send_nme_conn_mgr_disconnect_req(context, pid, p_confirmationRequired, p_reason) \
{ \
    NmeConnMgrDisconnectReq_Evt *evt = (NmeConnMgrDisconnectReq_Evt*) CsrPmalloc(sizeof(NmeConnMgrDisconnectReq_Evt)); \
    evt->confirmationRequired = p_confirmationRequired; \
    evt->reason               = p_reason; \
    fsm_send_event(context, (FsmEvent*)evt, pid, NME_CONN_MGR_DISCONNECT_REQ_ID); \
}

#define send_nme_conn_mgr_disconnect_req_external(context, pid, p_confirmationRequired, p_reason) \
{ \
    NmeConnMgrDisconnectReq_Evt *evt = (NmeConnMgrDisconnectReq_Evt*) CsrPmalloc(sizeof(NmeConnMgrDisconnectReq_Evt)); \
    evt->confirmationRequired = p_confirmationRequired; \
    evt->reason               = p_reason; \
    fsm_send_event_external(context, (FsmEvent*)evt, pid, NME_CONN_MGR_DISCONNECT_REQ_ID); \
}

/* -------------------------- nme_conn_mgr_disconnect_cfm -------------------------- */
typedef struct NmeConnMgrDisconnectCfm_Evt
{
    FsmEvent                        common;
} NmeConnMgrDisconnectCfm_Evt;

#define send_nme_conn_mgr_disconnect_cfm(context, pid) \
{ \
    NmeConnMgrDisconnectCfm_Evt *evt = (NmeConnMgrDisconnectCfm_Evt*) CsrPmalloc(sizeof(NmeConnMgrDisconnectCfm_Evt)); \
    fsm_send_event(context, (FsmEvent*)evt, pid, NME_CONN_MGR_DISCONNECT_CFM_ID); \
}

#define send_nme_conn_mgr_disconnect_cfm_external(context, pid) \
{ \
    NmeConnMgrDisconnectCfm_Evt *evt = (NmeConnMgrDisconnectCfm_Evt*) CsrPmalloc(sizeof(NmeConnMgrDisconnectCfm_Evt)); \
    fsm_send_event_external(context, (FsmEvent*)evt, pid, NME_CONN_MGR_DISCONNECT_CFM_ID); \
}

/* -------------------------- nme_conn_mgr_terminate_req -------------------------- */
typedef struct NmeConnMgrTerminateReq_Evt
{
    FsmEvent                        common;
} NmeConnMgrTerminateReq_Evt;

#define send_nme_conn_mgr_terminate_req(context, pid) \
{ \
    NmeConnMgrTerminateReq_Evt *evt = (NmeConnMgrTerminateReq_Evt*) CsrPmalloc(sizeof(NmeConnMgrTerminateReq_Evt)); \
    fsm_send_event(context, (FsmEvent*)evt, pid, NME_CONN_MGR_TERMINATE_REQ_ID); \
}

#define send_nme_conn_mgr_terminate_req_external(context, pid) \
{ \
    NmeConnMgrTerminateReq_Evt *evt = (NmeConnMgrTerminateReq_Evt*) CsrPmalloc(sizeof(NmeConnMgrTerminateReq_Evt)); \
    fsm_send_event_external(context, (FsmEvent*)evt, pid, NME_CONN_MGR_TERMINATE_REQ_ID); \
}

/* -------------------------- nme_conn_mgr_terminate_cfm -------------------------- */
typedef struct NmeConnMgrTerminateCfm_Evt
{
    FsmEvent                        common;
} NmeConnMgrTerminateCfm_Evt;

#define send_nme_conn_mgr_terminate_cfm(context, pid) \
{ \
    NmeConnMgrTerminateCfm_Evt *evt = (NmeConnMgrTerminateCfm_Evt*) CsrPmalloc(sizeof(NmeConnMgrTerminateCfm_Evt)); \
    fsm_send_event(context, (FsmEvent*)evt, pid, NME_CONN_MGR_TERMINATE_CFM_ID); \
}

#define send_nme_conn_mgr_terminate_cfm_external(context, pid) \
{ \
    NmeConnMgrTerminateCfm_Evt *evt = (NmeConnMgrTerminateCfm_Evt*) CsrPmalloc(sizeof(NmeConnMgrTerminateCfm_Evt)); \
    fsm_send_event_external(context, (FsmEvent*)evt, pid, NME_CONN_MGR_TERMINATE_CFM_ID); \
}





#ifdef __cplusplus
}
#endif

#endif /* NME_CONNECTION_MANAGER_XML_SIGNALS_H */
