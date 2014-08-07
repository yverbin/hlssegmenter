/*
 * ConfigParams.h
 *
 *  Created on: Aug 6, 2014
 *      Author: satram
 */

#ifndef CONFIGPARAMS_H_
#define CONFIGPARAMS_H_

#include "segmenterCommon.h"



struct video_codec_info
{
	VIDEO_STREAM_TYPE codec;
	std::string profile;
	double level;
};

struct audio_codec_info
{
	AUDIO_STREAM_TYPE codec;
	std::string subtype;
};

enum hls_playlist_type
{
	live,
	event,
	vod
};

struct variant_stream_info
{
	std::string id;
	int bandwidth;
	bool generate_iframe_url;
	video_codec_info vid;
	audio_codec_info aud;

	hls_playlist_type playlist_type;
	double segment_duration;
	int sliding_window_duration;
	MediaPlaylist *mediaUrl;

	IFramePlaylist *iframeUrl;
};


class ConfigParams {

	std::list<variant_stream_info> variant_streams;

public:
	ConfigParams();
	virtual ~ConfigParams();
	void add_variant(variant_stream_info &var);
	void remove_variant(std::string id);

	friend class MasterPlaylist;
	friend class IFramePlaylist;
	friend class HlsPlaylistGenerator;

};

#endif /* CONFIGPARAMS_H_ */