#include <IOKit/IOLib.h>
#include <IOKit/usb/IOUSBDevice.h>
#include <IOKit/usb/IOUSBInterface.h>
#include <IOKit/usb/IOUSBInterfaceUserClient.h> 
#include <IOKit/usb/IOUSBPipe.h>
#include <IOKit/usb/IOUSBPipeUserClient.h>
#include <IOKit/usb/IOUSBUserClient.h>
#include <IOKit/usb/IOUSBDeviceUserClient.h>
#include <IOKit/usb/IOUSBFamily.h>
#include <IOKit/usb/IOUSBHostFamily.h>
#include <IOKit/usb/IOUSBHostInterface.h>
#include <IOKit/usb/IOUSBHostPipe.h>
#include <IOKit/usb/IOUSBHostDevice.h>
#include <IOKit/usb/IOUSBHostInterfaceUserClient.h>
#include <IOKit/usb/IOUSBHostPipeUserClient.h>
#include <IOKit/usb/IOUSBHostUserClient.h>
#include <IOKit/usb/IOUSBHostDeviceUserClient.h>    
#include <IOKit/usb/USB.h>
#include <IOKit/usb/USBHub.h>
#include <IOKit/usb/USBHIDDevice.h>
#include <IOKit/usb/USBHIDDriver.h>
#include <IOKit/usb/USBHIDElement.h>
#include <IOKit/usb/USBHIDQueue.h>
#include <IOKit/usb/USBHIDReportHandler.h>
#include <IOKit/usb/USBHIDElementContainer.h>
#include <IOKit/usb/USBHIDElementCollection.h>
#include <IOKit/usb/USBHIDElementValue.h>
#include <IOKit/usb/USBHIDElementValueQueue.h>
#include <IOKit/usb/USBHIDElementValueTranslation.h>
#include <IOKit/usb/USBHIDElementValueTranslationTable.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSet.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollection.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetContainer.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollectionContainer.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollectionContainer.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollectionContainer.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollectionContainer.h>
#include <IOKit/usb/USBHIDElementValueTranslationTableSetCollectionContainer.h>

class com_example_driver_MyDriver : public IOUSBDevice {
    OSDeclareDefaultStructors(com_example_driver_MyDriver)

public:
    virtual bool start(IOService *provider) override;
    virtual void stop(IOService *provider) override;
};

OSDefineMetaClassAndStructors(com_example_driver_MyDriver, IOUSBDevice)

bool com_example_driver_MyDriver::start(IOService *provider) {
    if (!IOUSBDevice::start(provider)) {
        return false;
    }
    IOLog("MyDriver::start\n");
    return true;
}

void com_example_driver_MyDriver::stop(IOService *provider) {
    IOLog("MyDriver::stop\n");
    IOUSBDevice::stop(provider);
}
