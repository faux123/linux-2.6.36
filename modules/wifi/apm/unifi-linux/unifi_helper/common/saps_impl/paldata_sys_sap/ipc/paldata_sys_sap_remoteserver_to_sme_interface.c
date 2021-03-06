/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#include "event_pack_unpack/event_pack_unpack.h"
#include "fsm/fsm_internal.h"
#include "paldata_top_level_fsm/paldata_top_level_fsm.h"

static void event_to_paldata_sys_capabilities_cfm(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysCapabilitiesCfm_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.commandQueueSize =  event_unpack_CsrUint16(&buffer);
    evt.trafficQueueSize =  event_unpack_CsrUint16(&buffer);

    paldata_sys_capabilities_cfm(context, evt.appHandle, evt.commandQueueSize, evt.trafficQueueSize);

}

static void event_to_paldata_sys_eapol_cfm(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysEapolCfm_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.result = (unifi_EapolRc) event_unpack_CsrUint16(&buffer);

    paldata_sys_eapol_cfm(context, evt.appHandle, evt.result);

}

static void event_to_paldata_sys_hip_ind(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysHipInd_Evt evt;

    evt.mlmeCommandLength =  event_unpack_CsrUint16(&buffer);
    evt.mlmeCommand = NULL;
    if (evt.mlmeCommandLength)
    {
        evt.mlmeCommand = (CsrUint8*)CsrPmalloc(evt.mlmeCommandLength);
        event_unpack_buffer(&buffer, evt.mlmeCommand, evt.mlmeCommandLength);
    }
    evt.dataRef1Length =  event_unpack_CsrUint16(&buffer);
    evt.dataRef1 = NULL;
    if (evt.dataRef1Length)
    {
        evt.dataRef1 = (CsrUint8*)CsrPmalloc(evt.dataRef1Length);
        event_unpack_buffer(&buffer, evt.dataRef1, evt.dataRef1Length);
    }
    evt.dataRef2Length =  event_unpack_CsrUint16(&buffer);
    evt.dataRef2 = NULL;
    if (evt.dataRef2Length)
    {
        evt.dataRef2 = (CsrUint8*)CsrPmalloc(evt.dataRef2Length);
        event_unpack_buffer(&buffer, evt.dataRef2, evt.dataRef2Length);
    }

    paldata_sys_hip_ind(context, evt.mlmeCommandLength, evt.mlmeCommand, evt.dataRef1Length, evt.dataRef1, evt.dataRef2Length, evt.dataRef2);

    CsrPfree(evt.mlmeCommand);
    CsrPfree(evt.dataRef1);
    CsrPfree(evt.dataRef2);
}

static void event_to_paldata_sys_ma_unitdata_ind(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysMaUnitdataInd_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.subscriptionHandle =  event_unpack_CsrUint8(&buffer);
    evt.frameLength =  event_unpack_CsrUint16(&buffer);
    evt.frame = NULL;
    if (evt.frameLength)
    {
        evt.frame = (CsrUint8*)CsrPmalloc(evt.frameLength);
        event_unpack_buffer(&buffer, evt.frame, evt.frameLength);
    }
    evt.freeFunction = NULL;
    buffer+=4;
    evt.receptionStatus = (unifi_ReceptionStatus) event_unpack_CsrUint16(&buffer);
    evt.priority = (unifi_Priority) event_unpack_CsrUint16(&buffer);
    evt.serviceClass = (unifi_ServiceClass) event_unpack_CsrUint16(&buffer);

    paldata_sys_ma_unitdata_ind(context, evt.appHandle, evt.subscriptionHandle, evt.frameLength, evt.frame, evt.freeFunction, evt.receptionStatus, evt.priority, evt.serviceClass);

    CsrPfree(evt.frame);
}

static void event_to_paldata_sys_ma_unitdata_cfm(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysMaUnitdataCfm_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.result = (unifi_Status) event_unpack_CsrUint8(&buffer);
    evt.transmissionStatus = (unifi_TransmissionStatus) event_unpack_CsrUint16(&buffer);
    evt.providedPriority = (unifi_Priority) event_unpack_CsrUint16(&buffer);
    evt.providedServiceClass = (unifi_ServiceClass) event_unpack_CsrUint16(&buffer);
    evt.reqIdentifier =  event_unpack_CsrUint32(&buffer);

    paldata_sys_ma_unitdata_cfm(context, evt.appHandle, evt.result, evt.transmissionStatus, evt.providedPriority, evt.providedServiceClass, evt.reqIdentifier);

}

static void event_to_paldata_sys_ma_unitdata_subscribe_cfm(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysMaUnitdataSubscribeCfm_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.subscriptionHandle =  event_unpack_CsrUint8(&buffer);
    evt.status = (unifi_SubscriptionResult) event_unpack_CsrUint8(&buffer);
    evt.allocOffset =  event_unpack_CsrUint16(&buffer);

    paldata_sys_ma_unitdata_subscribe_cfm(context, evt.appHandle, evt.subscriptionHandle, evt.status, evt.allocOffset);

}

static void event_to_paldata_sys_ma_unitdata_unsubscribe_cfm(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 length)
{
    CsrUint8* buffer = &inputbuffer[6];
    PaldataSysMaUnitdataUnsubscribeCfm_Evt evt;

    evt.appHandle = (void*) event_unpack_CsrUint32(&buffer);
    evt.status = (unifi_SubscriptionResult) event_unpack_CsrUint8(&buffer);

    paldata_sys_ma_unitdata_unsubscribe_cfm(context, evt.appHandle, evt.status);

}


typedef void (*event_to_fn)(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 size);
static const event_to_fn fnlookup1[14] = {
        NULL,
        event_to_paldata_sys_hip_ind,
        NULL,
        event_to_paldata_sys_ma_unitdata_subscribe_cfm,
        NULL,
        event_to_paldata_sys_ma_unitdata_unsubscribe_cfm,
        NULL,
        event_to_paldata_sys_capabilities_cfm,
        NULL,
        event_to_paldata_sys_ma_unitdata_cfm,
        NULL,
        event_to_paldata_sys_ma_unitdata_ind,
        NULL,
        event_to_paldata_sys_eapol_cfm,

};



CsrBool remote_paldata_sys_signal_receive(FsmContext* context, CsrUint8* buffer, CsrUint16 size)
{
    CsrUint8* tempbuffer = buffer;
    CsrUint16 id = event_unpack_CsrUint16(&tempbuffer);

    if (0x802B == id) /* PALDATA_SYS_MA_UNITDATA_IND*/
    {
        PaldataSysMaUnitdataInd_Evt evt;

        tempbuffer += 4; /* Skip the 4 bytes dest & sender */
        evt.appHandle = (void*) event_unpack_CsrUint32(&tempbuffer);
        evt.subscriptionHandle =  event_unpack_CsrUint8(&tempbuffer);
        evt.frameLength =  event_unpack_CsrUint16(&tempbuffer);
        evt.frame = NULL;
        if (evt.frameLength >= 20)
        {
            evt.frame = (CsrUint8*)CsrPmalloc(evt.frameLength);
            event_unpack_buffer(&tempbuffer, evt.frame, evt.frameLength);
            evt.freeFunction = NULL;
            evt.receptionStatus = (unifi_ReceptionStatus) event_unpack_CsrUint16(&tempbuffer);
            evt.priority = (unifi_Priority) event_unpack_CsrUint16(&tempbuffer);
            evt.serviceClass = (unifi_ServiceClass) event_unpack_CsrUint16(&tempbuffer);

            paldata_sys_ma_unitdata_ind(context, evt.appHandle, evt.subscriptionHandle, evt.frameLength, evt.frame, evt.freeFunction, evt.receptionStatus, evt.priority, evt.serviceClass);
        }
        return TRUE;
    }

    if (id >= 0x8020 &&
        id <= 0x802D)
    {
        if (fnlookup1[id - 0x8020])
        {
            (*fnlookup1[id - 0x8020])(context, buffer, size);
            return TRUE;
        }
    }

    return TRUE;
}
