APRIORI DXE {
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF QcomPkg/Drivers/IortDtDxe/IortDtDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/EnvDxe/EnvDxeEnhanced.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF QcomPkg/Drivers/RamManagerDxe/RamManagerDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/MailboxDxe/MailboxDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/QcomScmiDxe/QcomScmiDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/CalibrationDxe/CalibrationDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/elden/QcomPkg/Drivers/TzDxe/ScmDxeCompat.inf
  INF Binaries/elden/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/QupDxe/QupDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/elden/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF Binaries/elden/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Binaries/elden/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/elden/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif
  INF Binaries/elden/QcomPkg/Drivers/FvUtilsDxe/FvUtilsEnhancedDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/HSUartDxe/HSUartDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/elden/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/elden/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/elden/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/elden/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF Binaries/elden/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
  INF Binaries/elden/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
  INF Binaries/elden/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/RscDxe/RscDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/RmVmDxe/RmVmDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/QRKSDxe/QRKSDxe.inf
  INF Binaries/elden/QcomPkg/Drivers/BoardIdDxe/BoardIdDxe.inf
}
