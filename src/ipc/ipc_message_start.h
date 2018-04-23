// Copyright 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MESSAGE_START_H_
#define IPC_IPC_MESSAGE_START_H_

#include "content/common/lg/content_message_macros.h"

// Used by IPC_BEGIN_MESSAGES so that each message class starts from a unique
// base.  Messages have unique IDs across channels in order for the IPC logging
// code to figure out the message class from its ID.
enum IPCMessageStart {
  AutomationMsgStart = 0,
  FrameMsgStart,
  PageMsgStart,
  ViewMsgStart,
  InputMsgStart,
  PluginMsgStart,
  PluginProcessMsgStart,
  ProfileImportMsgStart,
  TestMsgStart,
  DevToolsMsgStart,
  WorkerMsgStart,
  NaClMsgStart,
  UtilityMsgStart,
  GpuChannelMsgStart,
  GpuMsgStart,
  MediaMsgStart,
  ServiceMsgStart,
  PpapiMsgStart,
  FirefoxImporterUnittestMsgStart,
  FileUtilitiesMsgStart,
  DatabaseMsgStart,
  DOMStorageMsgStart,
  IndexedDBMsgStart,
  SpeechRecognitionMsgStart,
  AutofillMsgStart,
  SafeBrowsingMsgStart,
  P2PMsgStart,
  ResourceMsgStart,
  FileSystemMsgStart,
  ChildProcessMsgStart,
  ClipboardMsgStart,
  BlobMsgStart,
  AppCacheMsgStart,
  DeviceLightMsgStart,
  DeviceMotionMsgStart,
  DeviceOrientationMsgStart,
  AudioMsgStart,
  MidiMsgStart,
  ChromeMsgStart,
  DragMsgStart,
  PrintMsgStart,
  SpellCheckMsgStart,
  ExtensionMsgStart,
  VideoCaptureMsgStart,
  QuotaMsgStart,
  TextInputClientMsgStart,
  ChromeUtilityMsgStart,
  MediaStreamMsgStart,
  ChromeBenchmarkingMsgStart,
  JavaBridgeMsgStart,
  GamepadMsgStart,
  ShellMsgStart,
  AccessibilityMsgStart,
  PrefetchMsgStart,
  PrerenderMsgStart,
  ChromotingMsgStart,
  BrowserPluginMsgStart,
  AndroidWebViewMsgStart,
  MetroViewerMsgStart,
  CCMsgStart,
  MediaPlayerMsgStart,
  TracingMsgStart,
  PeerConnectionTrackerMsgStart,
  VisitedLinkMsgStart,
  AppShimMsgStart,
  WebRtcLoggingMsgStart,
  TtsMsgStart,
  WebSocketMsgStart,
  NaClHostMsgStart,
  WebRTCIdentityMsgStart,
  PowerMonitorMsgStart,
  EncryptedMediaMsgStart,
  CacheStorageMsgStart,
  ServiceWorkerMsgStart,
  MessagePortMsgStart,
  EmbeddedWorkerMsgStart,
  EmbeddedWorkerContextMsgStart,
  CastMsgStart,
  CdmMsgStart,
  ScreenOrientationMsgStart,
  MediaStreamTrackMetricsHostMsgStart,
  ChromeExtensionMsgStart,
  TranslateMsgStart,
  PushMessagingMsgStart,
  GinJavaBridgeMsgStart,
  ChromeUtilityPrintingMsgStart,
  AecDumpMsgStart,
  OzoneGpuMsgStart,
  ChromeUtilityExtensionsMsgStart,
  PlatformNotificationMsgStart,
  PDFMsgStart,
  ManifestManagerMsgStart,
  ExtensionUtilityMsgStart,
  LayoutTestMsgStart,
  NetworkHintsMsgStart,
  BluetoothMsgStart,
  CastMediaMsgStart,
  AwMessagePortMsgStart,
  SyncCompositorMsgStart,
  ExtensionsGuestViewMsgStart,
  GuestViewMsgStart,
  // Note: CastCryptoMsgStart and CastChannelMsgStart reserved for Chromecast
  // internal code. Contact gunsch@ before changing/removing.
  CastCryptoMsgStart,
  CastChannelMsgStart,
  DataReductionProxyStart,
  ContentSettingsMsgStart,
  ChromeAppBannerMsgStart,
  AttachmentBrokerMsgStart,
  RenderProcessMsgStart,
  PageLoadMetricsMsgStart,
  MemoryMsgStart,
  MediaSessionMsgStart,
  IPCTestMsgStart,
  ArcInstanceMsgStart,
  ArcInstanceHostMsgStart,
  DistillerMsgStart,
  ArcCameraMsgStart,
  DWriteFontProxyMsgStart,
  MediaPlayerDelegateMsgStart,
  SurfaceViewManagerMsgStart,
  ExtensionWorkerMsgStart,
  SubresourceFilterMsgStart,
#if defined(USE_INJECTIONS)
  BrowserControlMsgStart,
  InjectionMsgStart,
#endif
#if defined(OS_WEBOS)
  WebOSViewMsgStart,
#endif
  LgContentMsgStart,
  LastIPCMsgStart  // Must come last.
};

#endif  // IPC_IPC_MESSAGE_START_H_