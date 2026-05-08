##
#
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = elden
  PLATFORM_GUID                  = 55FB3B06-4F46-4221-ADF6-624C0C6C99BB
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/eldenPkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = eldenPkg/elden.fdf
  USE_CUSTOM_DISPLAY_DRIVER      = 0

  #
  # 0 = SM8750-AB
  # 1 = SM8750-3-AB
  # 2 = SM8750-AC
  #
  SOC_TYPE                       = 0

!include PakalaPkg/PakalaPkg.dsc.inc

[PcdsFixedAtBuild]
  #
  # DDR Memory
  #
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000

  #
  # UEFI Stack
  #
  gArmPlatformTokenSpaceGuid.PcdCPUCoresStackBase|0xA760D000
  gArmPlatformTokenSpaceGuid.PcdCPUCorePrimaryStackSize|0x00040000

  #
  # SMBIOS
  #
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"Lenovo"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Legion Y700 Gen 4"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"elden"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"TB322FC"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosBoardModel|"TB322FC"

  #
  # Simple Frame Buffer
  #
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferWidth|1904
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferHeight|3040
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferColorDepth|36

  #
  # Platform PEI
  #
  gQcomPkgTokenSpaceGuid.PcdPlatformType|"LA"
  gQcomPkgTokenSpaceGuid.PcdDtbExtensionAddr|0xA703C0E8
  gQcomPkgTokenSpaceGuid.PcdSchedulerInterfaceAddr|0xA703CE48

  #
  # Storage
  #
  gQcomPkgTokenSpaceGuid.PcdInitCardSlot|TRUE

[LibraryClasses]
  #
  # Memory Libraries
  #
  MemoryMapLib|eldenPkg/Library/MemoryMapLib/MemoryMapLib.inf

  #
  # QCOM Libraries
  #
  ConfigurationMapLib|eldenPkg/Library/ConfigurationMapLib/ConfigurationMapLib.inf
