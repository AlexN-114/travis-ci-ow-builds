/*
 *  usb100.h    USB 1.0 definitions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2017 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef __USB100_H__
#define __USB100_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Request directions */
#define BMREQUEST_HOST_TO_DEVICE    0
#define BMREQUEST_DEVICE_TO_HOST    1

/* Request types */
#define BMREQUEST_STANDARD  0
#define BMREQUEST_CLASS     1
#define BMREQUEST_VENDOR    2

/* Request recipients */
#define BMREQUEST_TO_DEVICE     0
#define BMREQUEST_TO_INTERFACE  1
#define BMREQUEST_TO_ENDPOINT   2
#define BMREQUEST_TO_OTHER      3

/* Maximum USB string length */
#define MAXIMUM_USB_STRING_LENGTH   255

/* Get status return values */
#define USB_GETSTATUS_SELF_POWERED          0x01
#define USB_GETSTATUS_REMOTE_WAKEUP_ENABLED 0x02

/* USB descriptor types */
#define USB_DEVICE_DESCRIPTOR_TYPE          0x01
#define USB_CONFIGURATION_DESCRIPTOR_TYPE   0x02
#define USB_STRING_DESCRIPTOR_TYPE          0x03
#define USB_INTERFACE_DESCRIPTOR_TYPE       0x04
#define USB_ENDPOINT_DESCRIPTOR_TYPE        0x05
#define USB_CONFIG_POWER_DESCRIPTOR_TYPE    0x07
#define USB_INTERFACE_POWER_DESCRIPTOR_TYPE 0x08

/* Macro to make USB descriptors */
#define USB_DESCRIPTOR_MAKE_TYPE_AND_INDEX( p1, p2 ) \
    ((USHORT)(((USHORT)(p1) << 8) | (p2))

/* USB endpoint types */
#define USB_ENDPOINT_TYPE_MASK          0x03
#define USB_ENDPOINT_TYPE_CONTROL       0x00
#define USB_ENDPOINT_TYPE_ISOCHRONOUS   0x01
#define USB_ENDPOINT_TYPE_BULK          0x02
#define USB_ENDPOINT_TYPE_INTERRUPT     0x03

/* USB configuration descriptor attributes */
#define USB_CONFIG_POWERED_MASK     0xC0
#define USB_CONFIG_BUS_POWERED      0x80
#define USB_CONFIG_SELF_POWERED     0x40
#define USB_CONFIG_REMOTE_WAKEUP    0x20

/* USB endpoint direction mask */
#define USB_ENDPOINT_DIRECTION_MASK 0x80

/* USB endpoint direction macros */
#define USB_ENDPOINT_DIRECTION_OUT( x ) (!((x) & USB_ENDPOINT_DIRECTION_MASK))
#define USB_ENDPOINT_DIRECTION_IN( x )  ((x) & USB_ENDPOINT_DIRECTION_MASK)

/* USB request codes */
#define USB_REQUEST_GET_STATUS          0x00
#define USB_REQUEST_CLEAR_FEATURE       0x01
#define USB_REQUEST_SET_FEATURE         0x03
#define USB_REQUEST_SET_ADDRESS         0x05
#define USB_REQUEST_GET_DESCRIPTOR      0x06
#define USB_REQUEST_SET_DESCRIPTOR      0x07
#define USB_REQUEST_GET_CONFIGURATION   0x08
#define USB_REQUEST_SET_CONFIGURATION   0x09
#define USB_REQUEST_GET_INTERFACE       0x0A
#define USB_REQUEST_SET_INTERFACE       0x0B
#define USB_REQUEST_SYNC_FRAME          0x0C

/* USB device classes */
#define USB_DEVICE_CLASS_AUDIO              0x01
#define USB_DEVICE_CLASS_COMMUNICATIONS     0x02
#define USB_DEVICE_CLASS_HUMAN_INTERFACE    0x03
#define USB_DEVICE_CLASS_MONITOR            0x04
#define USB_DEVICE_CLASS_PHYSICAL_INTERFACE 0x05
#define USB_DEVICE_CLASS_POWER              0x06
#define USB_DEVICE_CLASS_PRINTER            0x07
#define USB_DEVICE_CLASS_STORAGE            0x08
#define USB_DEVICE_CLASS_HUB                0x09
#define USB_DEVICE_CLASS_VENDOR_SPECIFIC    0xFF

/* USB features */
#define USB_FEATURE_ENDPOINT_STALL      0x0000
#define USB_FEATURE_REMOTE_WAKEUP       0x0001
#define USB_FEATURE_INTERFACE_POWER_D0  0x0002
#define USB_FEATURE_INTERFACE_POWER_D1  0x0003
#define USB_FEATURE_INTERFACE_POWER_D2  0x0004
#define USB_FEATURE_INTERFACE_POWER_D3  0x0005

/* USB support flags */
#define USB_SUPPORT_D0_COMMAND  0x01
#define USB_SUPPORT_D1_COMMAND  0x02
#define USB_SUPPORT_D2_COMMAND  0x04
#define USB_SUPPORT_D3_COMMAND  0x08
#define USB_SUPPORT_D0_WAKEUP   0x10
#define USB_SUPPORT_D1_WAKEUP   0x20

/* All structures in this file get one-byte packing. */
#include <pshpack1.h>

/* USB device descriptor */
typedef struct _USB_DEVICE_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    USHORT  bcdUSB;
    UCHAR   bDeviceClass;
    UCHAR   bDeviceSubClass;
    UCHAR   bDeviceProtocol;
    UCHAR   bMaxPacketSize0;
    USHORT  idVendor;
    USHORT  idProduct;
    USHORT  bcdDevice;
    UCHAR   iManufacturer;
    UCHAR   iProduct;
    UCHAR   iSerialNumber;
    UCHAR   bNumConfigurations;
} USB_DEVICE_DESCRIPTOR;
typedef USB_DEVICE_DESCRIPTOR   *PUSB_DEVICE_DESCRIPTOR;

/* USB endpoint descriptor */
typedef struct _USB_ENDPOINT_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    UCHAR   bEndpointAddress;
    UCHAR   bmAttributes;
    USHORT  wMaxPacketSize;
    UCHAR   bInterval;
} USB_ENDPOINT_DESCRIPTOR;
typedef USB_ENDPOINT_DESCRIPTOR *PUSB_ENDPOINT_DESCRIPTOR;

/* USB configuration descriptor */
typedef struct _USB_CONFIGURATION_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    USHORT  wTotalLength;
    UCHAR   bNumInterfaces;
    UCHAR   bConfigurationValue;
    UCHAR   iConfiguration;
    UCHAR   bmAttributes;
    UCHAR   MaxPower;
} USB_CONFIGURATION_DESCRIPTOR;
typedef USB_CONFIGURATION_DESCRIPTOR    *PUSB_CONFIGURATION_DESCRIPTOR;

/* USB interface descriptor */
typedef struct _USB_INTERFACE_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    UCHAR   bInterfaceNumber;
    UCHAR   bAlternateSetting;
    UCHAR   bNumEndpoints;
    UCHAR   bInterfaceClass;
    UCHAR   bInterfaceSubClass;
    UCHAR   bInterfaceProtocol;
    UCHAR   iInterface;
} USB_INTERFACE_DESCRIPTOR;
typedef USB_INTERFACE_DESCRIPTOR    *PUSB_INTERFACE_DESCRIPTOR;

/* USB string descriptor */
typedef struct _USB_STRING_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    WCHAR   bString[1];
} USB_STRING_DESCRIPTOR;
typedef USB_STRING_DESCRIPTOR   *PUSB_STRING_DESCRIPTOR;

/* USB common descriptor */
typedef struct _USB_COMMON_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
} USB_COMMON_DESCRIPTOR;
typedef USB_COMMON_DESCRIPTOR   *PUSB_COMMON_DESCRIPTOR;

/* USB hub descriptor */
typedef struct _USB_HUB_DESCRIPTOR {
    UCHAR   bDescriptorLength;
    UCHAR   bDescriptorType;
    UCHAR   bNumberOfPorts;
    USHORT  wHubCharacteristics;
    UCHAR   bPowerOnToPowerGood;
    UCHAR   bHubControlCurrent;
    UCHAR   bRemoveAndPowerMask[64];
} USB_HUB_DESCRIPTOR;
typedef USB_HUB_DESCRIPTOR  *PUSB_HUB_DESCRIPTOR;

/* USB configuration power descriptor */
typedef struct _USB_CONFIGURATION_POWER_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    UCHAR   SelfPowerConsumedD0[3];
    UCHAR   bPowerSummaryId;
    UCHAR   bBusPowerSavingD1;
    UCHAR   bSelfPowerSavingD1;
    UCHAR   bBusPowerSavingD2;
    UCHAR   bSelfPowerSavingD2;
    UCHAR   bBusPowerSavingD3;
    UCHAR   bSelfPowerSavindD3;
    USHORT  TransitionTimeFromD1;
    USHORT  TransitionTimeFromD2;
    USHORT  TransitionTimeFromD3;
} USB_CONFIGURATION_POWER_DESCRIPTOR;
typedef USB_CONFIGURATION_POWER_DESCRIPTOR  *PUSB_CONFIGURATION_POWER_DESCRIPTOR;

/* USB interface power descriptor */
typedef struct _USB_INTERFACE_POWER_DESCRIPTOR {
    UCHAR   bLength;
    UCHAR   bDescriptorType;
    UCHAR   bmCapabilitiesFlags;
    UCHAR   bBusPowerSavingD1;
    UCHAR   bSelfPowerSavingD1;
    UCHAR   bBusPowerSavingD2;
    UCHAR   bSelfPowerSavingD2;
    UCHAR   bBusPowerSavingD3;
    UCHAR   bSelfPowerSavingD3;
    USHORT  TransitionTimeFromD1;
    USHORT  TransitionTimeFromD2;
    USHORT  TransitionTimeFromD3;
} USB_INTERFACE_POWER_DESCRIPTOR;
typedef USB_INTERFACE_POWER_DESCRIPTOR  *PUSB_INTERFACE_POWER_DESCRIPTOR;

/* Revert to default packing. */
#include <poppack.h>

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __USB100_H__ */
