# JPlayer
A simple video player made with [raylib](https://www.raylib.com/) and the [ffmpeg](https://ffmpeg.org/about.html)
libraries 

## Features

- Local video playback
- YouTube video streaming
- Audio playback with volume control
- Video seeking
- Subtitle support for YouTube videos and local .srt files
- Multiple clock sync modes

## Build
**Dependencies**
- ffmpeg / libav
- raylib
- yt-dlp (optional, required for YouTube playback)

```
git clone --recurse-submodules https://github.com/jan-beukes/jplayer.git
cd jplayer
make BUILD_RAYLIB=TRUE VENDOR_FFMPEG=FALSE
```

## Usage
```
jplay <video file/url>
```
If yt-dlp is in PATH
```
jplay [-- OPTIONS] <youtube link>
```

## Controls

- **Space**: Pause/Resume playback
- **Up/Down arrows or Mouse wheel**: Adjust volume
- **Left/Right arrows**: Seek backward/forward by 10 seconds
- **M**: Toggle mute
- **S**: Switch between audio and video clock sync
- **T**: Toggle subtitles on/off
- **Double-click**: Toggle fullscreen

## Subtitle Support

The player automatically loads:
- .srt files with the same name as local video files
- Auto-generated subtitles from YouTube videos

Subtitles can be toggled on/off using the 'T' key during playback.
