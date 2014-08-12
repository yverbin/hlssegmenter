/*
 * segmenterCommon.h
 *
 *  Created on: Aug 6, 2014
 *      Author: satram
 */

#ifndef SEGMENTERCOMMON_H_
#define SEGMENTERCOMMON_H_

#include <cstdio>
#include <iostream>
#include <string>
#include <list>
#include <exception>
#include <map>
#include <algorithm>
#include <thread>
#include <sstream>

#include "log4c.h"

#include "Common.h"
#include <ParseTsStream.h>
#include <m3u8/Name.h>
#include <m3u8/Property.h>
#include <m3u8/Tag.h>
#include <m3u8/Section.h>
#include <m3u8/Playlist.h>

class ConfigParams;
struct variant_stream_info;
class VariantPlaylist;
class PlaylistInterface;
class IFramePlaylist;
class MasterPlaylist;
class MediaPlaylist;
class HlsPlaylistGenerator;
class IFrameIndex;
class Segmenter;

#include "ConfigParams.h"
#include "PlaylistInterface.h"
#include "VariantPlaylist.h"
#include "HlsPlaylistGenerator.h"
#include "IFrameIndex.h"
#include "Segmenter.h"

#endif /* SEGMENTERCOMMON_H_ */
