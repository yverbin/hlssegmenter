/*
 * IFramePlaylist.h
 *
 *  Created on: Aug 6, 2014
 *      Author: satram
 */

#ifndef IFRAMEPLAYLIST_H_
#define IFRAMEPLAYLIST_H_

#include "segmenterCommon.h"

class IFramePlaylist : public PlaylistInterface
{

	Playlist playlist;

public:
	IFramePlaylist();
	virtual ~IFramePlaylist();
	void add_header(ConfigParams & config);
	void add_header(variant_stream_info &stream_info);
	void add_node();
	void remove_node();
	void publish_playlist();
	void add_footer();
};

#endif /* IFRAMEPLAYLIST_H_ */