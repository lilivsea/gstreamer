


#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "webrtc-enumtypes.h"

#include "dtlstransport.h" 
#include "icetransport.h" 
#include "rtptransceiver.h" 
#include "webrtc_fwd.h"

/* enumerations from "webrtc_fwd.h" */
GType
gst_webrtc_dtls_transport_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_DTLS_TRANSPORT_STATE_NEW, "GST_WEBRTC_DTLS_TRANSPORT_STATE_NEW", "new" },
      { GST_WEBRTC_DTLS_TRANSPORT_STATE_CLOSED, "GST_WEBRTC_DTLS_TRANSPORT_STATE_CLOSED", "closed" },
      { GST_WEBRTC_DTLS_TRANSPORT_STATE_FAILED, "GST_WEBRTC_DTLS_TRANSPORT_STATE_FAILED", "failed" },
      { GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTING, "GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTING", "connecting" },
      { GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTED, "GST_WEBRTC_DTLS_TRANSPORT_STATE_CONNECTED", "connected" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCDTLSTransportState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_ice_gathering_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_ICE_GATHERING_STATE_NEW, "GST_WEBRTC_ICE_GATHERING_STATE_NEW", "new" },
      { GST_WEBRTC_ICE_GATHERING_STATE_GATHERING, "GST_WEBRTC_ICE_GATHERING_STATE_GATHERING", "gathering" },
      { GST_WEBRTC_ICE_GATHERING_STATE_COMPLETE, "GST_WEBRTC_ICE_GATHERING_STATE_COMPLETE", "complete" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCICEGatheringState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_ice_connection_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_ICE_CONNECTION_STATE_NEW, "GST_WEBRTC_ICE_CONNECTION_STATE_NEW", "new" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_CHECKING, "GST_WEBRTC_ICE_CONNECTION_STATE_CHECKING", "checking" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_CONNECTED, "GST_WEBRTC_ICE_CONNECTION_STATE_CONNECTED", "connected" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_COMPLETED, "GST_WEBRTC_ICE_CONNECTION_STATE_COMPLETED", "completed" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_FAILED, "GST_WEBRTC_ICE_CONNECTION_STATE_FAILED", "failed" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_DISCONNECTED, "GST_WEBRTC_ICE_CONNECTION_STATE_DISCONNECTED", "disconnected" },
      { GST_WEBRTC_ICE_CONNECTION_STATE_CLOSED, "GST_WEBRTC_ICE_CONNECTION_STATE_CLOSED", "closed" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCICEConnectionState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_signaling_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_SIGNALING_STATE_STABLE, "GST_WEBRTC_SIGNALING_STATE_STABLE", "stable" },
      { GST_WEBRTC_SIGNALING_STATE_CLOSED, "GST_WEBRTC_SIGNALING_STATE_CLOSED", "closed" },
      { GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_OFFER, "GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_OFFER", "have-local-offer" },
      { GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_OFFER, "GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_OFFER", "have-remote-offer" },
      { GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_PRANSWER, "GST_WEBRTC_SIGNALING_STATE_HAVE_LOCAL_PRANSWER", "have-local-pranswer" },
      { GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_PRANSWER, "GST_WEBRTC_SIGNALING_STATE_HAVE_REMOTE_PRANSWER", "have-remote-pranswer" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCSignalingState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_peer_connection_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_PEER_CONNECTION_STATE_NEW, "GST_WEBRTC_PEER_CONNECTION_STATE_NEW", "new" },
      { GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTING, "GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTING", "connecting" },
      { GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTED, "GST_WEBRTC_PEER_CONNECTION_STATE_CONNECTED", "connected" },
      { GST_WEBRTC_PEER_CONNECTION_STATE_DISCONNECTED, "GST_WEBRTC_PEER_CONNECTION_STATE_DISCONNECTED", "disconnected" },
      { GST_WEBRTC_PEER_CONNECTION_STATE_FAILED, "GST_WEBRTC_PEER_CONNECTION_STATE_FAILED", "failed" },
      { GST_WEBRTC_PEER_CONNECTION_STATE_CLOSED, "GST_WEBRTC_PEER_CONNECTION_STATE_CLOSED", "closed" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCPeerConnectionState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_ice_role_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_ICE_ROLE_CONTROLLED, "GST_WEBRTC_ICE_ROLE_CONTROLLED", "controlled" },
      { GST_WEBRTC_ICE_ROLE_CONTROLLING, "GST_WEBRTC_ICE_ROLE_CONTROLLING", "controlling" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCICERole", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_ice_component_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_ICE_COMPONENT_RTP, "GST_WEBRTC_ICE_COMPONENT_RTP", "rtp" },
      { GST_WEBRTC_ICE_COMPONENT_RTCP, "GST_WEBRTC_ICE_COMPONENT_RTCP", "rtcp" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCICEComponent", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_sdp_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_SDP_TYPE_OFFER, "GST_WEBRTC_SDP_TYPE_OFFER", "offer" },
      { GST_WEBRTC_SDP_TYPE_PRANSWER, "GST_WEBRTC_SDP_TYPE_PRANSWER", "pranswer" },
      { GST_WEBRTC_SDP_TYPE_ANSWER, "GST_WEBRTC_SDP_TYPE_ANSWER", "answer" },
      { GST_WEBRTC_SDP_TYPE_ROLLBACK, "GST_WEBRTC_SDP_TYPE_ROLLBACK", "rollback" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCSDPType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_rtp_transceiver_direction_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_NONE, "GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_NONE", "none" },
      { GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_INACTIVE, "GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_INACTIVE", "inactive" },
      { GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDONLY, "GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDONLY", "sendonly" },
      { GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_RECVONLY, "GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_RECVONLY", "recvonly" },
      { GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDRECV, "GST_WEBRTC_RTP_TRANSCEIVER_DIRECTION_SENDRECV", "sendrecv" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCRTPTransceiverDirection", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_dtls_setup_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_DTLS_SETUP_NONE, "GST_WEBRTC_DTLS_SETUP_NONE", "none" },
      { GST_WEBRTC_DTLS_SETUP_ACTPASS, "GST_WEBRTC_DTLS_SETUP_ACTPASS", "actpass" },
      { GST_WEBRTC_DTLS_SETUP_ACTIVE, "GST_WEBRTC_DTLS_SETUP_ACTIVE", "active" },
      { GST_WEBRTC_DTLS_SETUP_PASSIVE, "GST_WEBRTC_DTLS_SETUP_PASSIVE", "passive" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCDTLSSetup", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_stats_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_STATS_CODEC, "GST_WEBRTC_STATS_CODEC", "codec" },
      { GST_WEBRTC_STATS_INBOUND_RTP, "GST_WEBRTC_STATS_INBOUND_RTP", "inbound-rtp" },
      { GST_WEBRTC_STATS_OUTBOUND_RTP, "GST_WEBRTC_STATS_OUTBOUND_RTP", "outbound-rtp" },
      { GST_WEBRTC_STATS_REMOTE_INBOUND_RTP, "GST_WEBRTC_STATS_REMOTE_INBOUND_RTP", "remote-inbound-rtp" },
      { GST_WEBRTC_STATS_REMOTE_OUTBOUND_RTP, "GST_WEBRTC_STATS_REMOTE_OUTBOUND_RTP", "remote-outbound-rtp" },
      { GST_WEBRTC_STATS_CSRC, "GST_WEBRTC_STATS_CSRC", "csrc" },
      { GST_WEBRTC_STATS_PEER_CONNECTION, "GST_WEBRTC_STATS_PEER_CONNECTION", "peer-connection" },
      { GST_WEBRTC_STATS_DATA_CHANNEL, "GST_WEBRTC_STATS_DATA_CHANNEL", "data-channel" },
      { GST_WEBRTC_STATS_STREAM, "GST_WEBRTC_STATS_STREAM", "stream" },
      { GST_WEBRTC_STATS_TRANSPORT, "GST_WEBRTC_STATS_TRANSPORT", "transport" },
      { GST_WEBRTC_STATS_CANDIDATE_PAIR, "GST_WEBRTC_STATS_CANDIDATE_PAIR", "candidate-pair" },
      { GST_WEBRTC_STATS_LOCAL_CANDIDATE, "GST_WEBRTC_STATS_LOCAL_CANDIDATE", "local-candidate" },
      { GST_WEBRTC_STATS_REMOTE_CANDIDATE, "GST_WEBRTC_STATS_REMOTE_CANDIDATE", "remote-candidate" },
      { GST_WEBRTC_STATS_CERTIFICATE, "GST_WEBRTC_STATS_CERTIFICATE", "certificate" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCStatsType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_fec_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_FEC_TYPE_NONE, "GST_WEBRTC_FEC_TYPE_NONE", "none" },
      { GST_WEBRTC_FEC_TYPE_ULP_RED, "GST_WEBRTC_FEC_TYPE_ULP_RED", "ulp-red" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCFECType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_sctp_transport_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_SCTP_TRANSPORT_STATE_NEW, "GST_WEBRTC_SCTP_TRANSPORT_STATE_NEW", "new" },
      { GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTING, "GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTING", "connecting" },
      { GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTED, "GST_WEBRTC_SCTP_TRANSPORT_STATE_CONNECTED", "connected" },
      { GST_WEBRTC_SCTP_TRANSPORT_STATE_CLOSED, "GST_WEBRTC_SCTP_TRANSPORT_STATE_CLOSED", "closed" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCSCTPTransportState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_priority_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_PRIORITY_TYPE_VERY_LOW, "GST_WEBRTC_PRIORITY_TYPE_VERY_LOW", "very-low" },
      { GST_WEBRTC_PRIORITY_TYPE_LOW, "GST_WEBRTC_PRIORITY_TYPE_LOW", "low" },
      { GST_WEBRTC_PRIORITY_TYPE_MEDIUM, "GST_WEBRTC_PRIORITY_TYPE_MEDIUM", "medium" },
      { GST_WEBRTC_PRIORITY_TYPE_HIGH, "GST_WEBRTC_PRIORITY_TYPE_HIGH", "high" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCPriorityType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_data_channel_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_DATA_CHANNEL_STATE_NEW, "GST_WEBRTC_DATA_CHANNEL_STATE_NEW", "new" },
      { GST_WEBRTC_DATA_CHANNEL_STATE_CONNECTING, "GST_WEBRTC_DATA_CHANNEL_STATE_CONNECTING", "connecting" },
      { GST_WEBRTC_DATA_CHANNEL_STATE_OPEN, "GST_WEBRTC_DATA_CHANNEL_STATE_OPEN", "open" },
      { GST_WEBRTC_DATA_CHANNEL_STATE_CLOSING, "GST_WEBRTC_DATA_CHANNEL_STATE_CLOSING", "closing" },
      { GST_WEBRTC_DATA_CHANNEL_STATE_CLOSED, "GST_WEBRTC_DATA_CHANNEL_STATE_CLOSED", "closed" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCDataChannelState", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_bundle_policy_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_BUNDLE_POLICY_NONE, "GST_WEBRTC_BUNDLE_POLICY_NONE", "none" },
      { GST_WEBRTC_BUNDLE_POLICY_BALANCED, "GST_WEBRTC_BUNDLE_POLICY_BALANCED", "balanced" },
      { GST_WEBRTC_BUNDLE_POLICY_MAX_COMPAT, "GST_WEBRTC_BUNDLE_POLICY_MAX_COMPAT", "max-compat" },
      { GST_WEBRTC_BUNDLE_POLICY_MAX_BUNDLE, "GST_WEBRTC_BUNDLE_POLICY_MAX_BUNDLE", "max-bundle" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCBundlePolicy", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_webrtc_ice_transport_policy_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_WEBRTC_ICE_TRANSPORT_POLICY_ALL, "GST_WEBRTC_ICE_TRANSPORT_POLICY_ALL", "all" },
      { GST_WEBRTC_ICE_TRANSPORT_POLICY_RELAY, "GST_WEBRTC_ICE_TRANSPORT_POLICY_RELAY", "relay" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstWebRTCICETransportPolicy", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}



