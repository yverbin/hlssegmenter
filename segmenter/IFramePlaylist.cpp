/*
 * IFramePlaylist.cpp
 *
 *  Created on: Aug 6, 2014
 *      Author: satram
 */

#include "IFramePlaylist.h"

IFramePlaylist::IFramePlaylist() {
	// TODO Auto-generated constructor stub

}

IFramePlaylist::~IFramePlaylist() {
	// TODO Auto-generated destructor stub
}


void IFramePlaylist::add_header(ConfigParams & config)
{
}

void IFramePlaylist::add_node(IFrameIndex *index, VariantPlaylist *variant_playlist)
{
	std::ostringstream oss;
	oss << "node-" << index->total_pkt_count;
	Section node(oss.str());
	double duration = (double)index->idr_duration / 1000.0;
	node.add_tag("INF", duration);
	oss.str("");
	oss << index->idr_size << "@" << index->idr_start_offset;
	node.add_tag("BYTERANGE", oss.str());
	node.set_path(variant_playlist->transcoded_output_url);
	node.set_locator(variant_playlist->transcoded_output_filename);
	playlist.add_section(node);
}



void IFramePlaylist::add_header(variant_stream_info &stream_info)
{
	if (stream_info.generate_iframe_url)
	{
		Section header("header");
		header.add_tag("M3U");
		header.add_tag("VERSION", 4);
		header.add_tag("I-FRAMES-ONLY");
		playlist.add_section(header);
	}
}

void IFramePlaylist::add_footer()
{

}

void IFramePlaylist::remove_node()
{
}


