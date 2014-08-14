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

public:
	IFramePlaylist();
	virtual ~IFramePlaylist();
	void add_header(ConfigParams & config);
	void add_header(variant_stream_info &stream_info);
	void add_node(IndexBase *idx, VariantPlaylist *variant_playlist);
	void remove_node(IndexBase *idx);
	void add_footer();
	void finalize_playlist();
};

#endif /* IFRAMEPLAYLIST_H_ */
