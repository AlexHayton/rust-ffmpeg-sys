// Here until https://github.com/rust-lang/rust-bindgen/issues/2192 /
// https://github.com/rust-lang/rust-bindgen/issues/258 is fixed.
#include <libavutil/channel_layout.h>

#if (LIBAVUTIL_VERSION_MAJOR >= 57 && LIBAVUTIL_VERSION_MINOR >= 28) || LIBAVUTIL_VERSION_MAJOR >= 58

#undef AV_CH_FRONT_LEFT
#undef AV_CH_FRONT_RIGHT
#undef AV_CH_FRONT_CENTER
#undef AV_CH_LOW_FREQUENCY
#undef AV_CH_BACK_LEFT
#undef AV_CH_BACK_RIGHT
#undef AV_CH_FRONT_LEFT_OF_CENTER
#undef AV_CH_FRONT_RIGHT_OF_CENTER
#undef AV_CH_BACK_CENTER
#undef AV_CH_SIDE_LEFT
#undef AV_CH_SIDE_RIGHT
#undef AV_CH_TOP_CENTER
#undef AV_CH_TOP_FRONT_LEFT
#undef AV_CH_TOP_FRONT_CENTER
#undef AV_CH_TOP_FRONT_RIGHT
#undef AV_CH_TOP_BACK_LEFT
#undef AV_CH_TOP_BACK_CENTER
#undef AV_CH_TOP_BACK_RIGHT
#undef AV_CH_STEREO_LEFT
#undef AV_CH_STEREO_RIGHT
#undef AV_CH_WIDE_LEFT
#undef AV_CH_WIDE_RIGHT
#undef AV_CH_SURROUND_DIRECT_LEFT
#undef AV_CH_SURROUND_DIRECT_RIGHT
#undef AV_CH_LOW_FREQUENCY_2
#undef AV_CH_TOP_SIDE_LEFT
#undef AV_CH_TOP_SIDE_RIGHT
#undef AV_CH_BOTTOM_FRONT_CENTER
#undef AV_CH_BOTTOM_FRONT_LEFT
#undef AV_CH_BOTTOM_FRONT_RIGHT

const unsigned long long AV_CH_FRONT_LEFT = (1ULL << AV_CHAN_FRONT_LEFT);
const unsigned long long AV_CH_FRONT_RIGHT = (1ULL << AV_CHAN_FRONT_RIGHT);
const unsigned long long AV_CH_FRONT_CENTER =
    (1ULL << AV_CHAN_FRONT_CENTER);
const unsigned long long AV_CH_LOW_FREQUENCY =
    (1ULL << AV_CHAN_LOW_FREQUENCY);
const unsigned long long AV_CH_BACK_LEFT = (1ULL << AV_CHAN_BACK_LEFT);
const unsigned long long AV_CH_BACK_RIGHT = (1ULL << AV_CHAN_BACK_RIGHT);
const unsigned long long AV_CH_FRONT_LEFT_OF_CENTER =
    (1ULL << AV_CHAN_FRONT_LEFT_OF_CENTER);
const unsigned long long AV_CH_FRONT_RIGHT_OF_CENTER =
    (1ULL << AV_CHAN_FRONT_RIGHT_OF_CENTER);
const unsigned long long AV_CH_BACK_CENTER = (1ULL << AV_CHAN_BACK_CENTER);
const unsigned long long AV_CH_SIDE_LEFT = (1ULL << AV_CHAN_SIDE_LEFT);
const unsigned long long AV_CH_SIDE_RIGHT = (1ULL << AV_CHAN_SIDE_RIGHT);
const unsigned long long AV_CH_TOP_CENTER = (1ULL << AV_CHAN_TOP_CENTER);
const unsigned long long AV_CH_TOP_FRONT_LEFT =
    (1ULL << AV_CHAN_TOP_FRONT_LEFT);
const unsigned long long AV_CH_TOP_FRONT_CENTER =
    (1ULL << AV_CHAN_TOP_FRONT_CENTER);
const unsigned long long AV_CH_TOP_FRONT_RIGHT =
    (1ULL << AV_CHAN_TOP_FRONT_RIGHT);
const unsigned long long AV_CH_TOP_BACK_LEFT =
    (1ULL << AV_CHAN_TOP_BACK_LEFT);
const unsigned long long AV_CH_TOP_BACK_CENTER =
    (1ULL << AV_CHAN_TOP_BACK_CENTER);
const unsigned long long AV_CH_TOP_BACK_RIGHT =
    (1ULL << AV_CHAN_TOP_BACK_RIGHT);
const unsigned long long AV_CH_STEREO_LEFT = (1ULL << AV_CHAN_STEREO_LEFT);
const unsigned long long AV_CH_STEREO_RIGHT =
    (1ULL << AV_CHAN_STEREO_RIGHT);
const unsigned long long AV_CH_WIDE_LEFT = (1ULL << AV_CHAN_WIDE_LEFT);
const unsigned long long AV_CH_WIDE_RIGHT = (1ULL << AV_CHAN_WIDE_RIGHT);
const unsigned long long AV_CH_SURROUND_DIRECT_LEFT =
    (1ULL << AV_CHAN_SURROUND_DIRECT_LEFT);
const unsigned long long AV_CH_SURROUND_DIRECT_RIGHT =
    (1ULL << AV_CHAN_SURROUND_DIRECT_RIGHT);
const unsigned long long AV_CH_LOW_FREQUENCY_2 =
    (1ULL << AV_CHAN_LOW_FREQUENCY_2);
const unsigned long long AV_CH_TOP_SIDE_LEFT =
    (1ULL << AV_CHAN_TOP_SIDE_LEFT);
const unsigned long long AV_CH_TOP_SIDE_RIGHT =
    (1ULL << AV_CHAN_TOP_SIDE_RIGHT);
const unsigned long long AV_CH_BOTTOM_FRONT_CENTER =
    (1ULL << AV_CHAN_BOTTOM_FRONT_CENTER);
const unsigned long long AV_CH_BOTTOM_FRONT_LEFT =
    (1ULL << AV_CHAN_BOTTOM_FRONT_LEFT);
const unsigned long long AV_CH_BOTTOM_FRONT_RIGHT =
    (1ULL << AV_CHAN_BOTTOM_FRONT_RIGHT);

#undef AV_CH_LAYOUT_MONO
#undef AV_CH_LAYOUT_STEREO
#undef AV_CH_LAYOUT_2POINT1
#undef AV_CH_LAYOUT_2_1
#undef AV_CH_LAYOUT_SURROUND
#undef AV_CH_LAYOUT_3POINT1
#undef AV_CH_LAYOUT_4POINT0
#undef AV_CH_LAYOUT_4POINT1
#undef AV_CH_LAYOUT_2_2
#undef AV_CH_LAYOUT_QUAD
#undef AV_CH_LAYOUT_5POINT0
#undef AV_CH_LAYOUT_5POINT1
#undef AV_CH_LAYOUT_5POINT0_BACK
#undef AV_CH_LAYOUT_5POINT1_BACK
#undef AV_CH_LAYOUT_6POINT0
#undef AV_CH_LAYOUT_6POINT0_FRONT
#undef AV_CH_LAYOUT_HEXAGONAL
#undef AV_CH_LAYOUT_6POINT1
#undef AV_CH_LAYOUT_6POINT1_BACK
#undef AV_CH_LAYOUT_6POINT1_FRONT
#undef AV_CH_LAYOUT_7POINT0
#undef AV_CH_LAYOUT_7POINT0_FRONT
#undef AV_CH_LAYOUT_7POINT1
#undef AV_CH_LAYOUT_7POINT1_WIDE
#undef AV_CH_LAYOUT_7POINT1_WIDE_BACK
#undef AV_CH_LAYOUT_OCTAGONAL
#undef AV_CH_LAYOUT_HEXADECAGONAL
#undef AV_CH_LAYOUT_STEREO_DOWNMIX
#undef AV_CH_LAYOUT_22POINT2

const unsigned long long AV_CH_LAYOUT_MONO = (AV_CH_FRONT_CENTER);
const unsigned long long AV_CH_LAYOUT_STEREO =
    (AV_CH_FRONT_LEFT | AV_CH_FRONT_RIGHT);
const unsigned long long AV_CH_LAYOUT_2POINT1 =
    (AV_CH_LAYOUT_STEREO | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_2_1 =
    (AV_CH_LAYOUT_STEREO | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_SURROUND =
    (AV_CH_LAYOUT_STEREO | AV_CH_FRONT_CENTER);
const unsigned long long AV_CH_LAYOUT_3POINT1 =
    (AV_CH_LAYOUT_SURROUND | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_4POINT0 =
    (AV_CH_LAYOUT_SURROUND | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_4POINT1 =
    (AV_CH_LAYOUT_4POINT0 | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_2_2 =
    (AV_CH_LAYOUT_STEREO | AV_CH_SIDE_LEFT | AV_CH_SIDE_RIGHT);
const unsigned long long AV_CH_LAYOUT_QUAD =
    (AV_CH_LAYOUT_STEREO | AV_CH_BACK_LEFT | AV_CH_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_5POINT0 =
    (AV_CH_LAYOUT_SURROUND | AV_CH_SIDE_LEFT | AV_CH_SIDE_RIGHT);
const unsigned long long AV_CH_LAYOUT_5POINT1 =
    (AV_CH_LAYOUT_5POINT0 | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_5POINT0_BACK =
    (AV_CH_LAYOUT_SURROUND | AV_CH_BACK_LEFT | AV_CH_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_5POINT1_BACK =
    (AV_CH_LAYOUT_5POINT0_BACK | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_6POINT0 =
    (AV_CH_LAYOUT_5POINT0 | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_6POINT0_FRONT =
    (AV_CH_LAYOUT_2_2 | AV_CH_FRONT_LEFT_OF_CENTER |
     AV_CH_FRONT_RIGHT_OF_CENTER);
const unsigned long long AV_CH_LAYOUT_HEXAGONAL =
    (AV_CH_LAYOUT_5POINT0_BACK | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_6POINT1 =
    (AV_CH_LAYOUT_5POINT1 | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_6POINT1_BACK =
    (AV_CH_LAYOUT_5POINT1_BACK | AV_CH_BACK_CENTER);
const unsigned long long AV_CH_LAYOUT_6POINT1_FRONT =
    (AV_CH_LAYOUT_6POINT0_FRONT | AV_CH_LOW_FREQUENCY);
const unsigned long long AV_CH_LAYOUT_7POINT0 =
    (AV_CH_LAYOUT_5POINT0 | AV_CH_BACK_LEFT | AV_CH_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_7POINT0_FRONT =
    (AV_CH_LAYOUT_5POINT0 | AV_CH_FRONT_LEFT_OF_CENTER |
     AV_CH_FRONT_RIGHT_OF_CENTER);
const unsigned long long AV_CH_LAYOUT_7POINT1 =
    (AV_CH_LAYOUT_5POINT1 | AV_CH_BACK_LEFT | AV_CH_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_7POINT1_WIDE =
    (AV_CH_LAYOUT_5POINT1 | AV_CH_FRONT_LEFT_OF_CENTER |
     AV_CH_FRONT_RIGHT_OF_CENTER);
const unsigned long long AV_CH_LAYOUT_7POINT1_WIDE_BACK =
    (AV_CH_LAYOUT_5POINT1_BACK | AV_CH_FRONT_LEFT_OF_CENTER |
     AV_CH_FRONT_RIGHT_OF_CENTER);
const unsigned long long AV_CH_LAYOUT_OCTAGONAL =
    (AV_CH_LAYOUT_5POINT0 | AV_CH_BACK_LEFT | AV_CH_BACK_CENTER |
     AV_CH_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_HEXADECAGONAL =
    (AV_CH_LAYOUT_OCTAGONAL | AV_CH_WIDE_LEFT | AV_CH_WIDE_RIGHT |
     AV_CH_TOP_BACK_LEFT | AV_CH_TOP_BACK_RIGHT | AV_CH_TOP_BACK_CENTER |
     AV_CH_TOP_FRONT_CENTER | AV_CH_TOP_FRONT_LEFT | AV_CH_TOP_FRONT_RIGHT);
const unsigned long long AV_CH_LAYOUT_STEREO_DOWNMIX =
    (AV_CH_STEREO_LEFT | AV_CH_STEREO_RIGHT);
const unsigned long long AV_CH_LAYOUT_22POINT2 =
    (AV_CH_LAYOUT_5POINT1_BACK | AV_CH_FRONT_LEFT_OF_CENTER |
     AV_CH_FRONT_RIGHT_OF_CENTER | AV_CH_BACK_CENTER | AV_CH_LOW_FREQUENCY_2 |
     AV_CH_SIDE_LEFT | AV_CH_SIDE_RIGHT | AV_CH_TOP_FRONT_LEFT |
     AV_CH_TOP_FRONT_RIGHT | AV_CH_TOP_FRONT_CENTER | AV_CH_TOP_CENTER |
     AV_CH_TOP_BACK_LEFT | AV_CH_TOP_BACK_RIGHT | AV_CH_TOP_SIDE_LEFT |
     AV_CH_TOP_SIDE_RIGHT | AV_CH_TOP_BACK_CENTER | AV_CH_BOTTOM_FRONT_CENTER |
     AV_CH_BOTTOM_FRONT_LEFT | AV_CH_BOTTOM_FRONT_RIGHT);
#endif

#if (LIBAVUTIL_VERSION_MAJOR >= 58 && LIBAVUTIL_VERSION_MINOR >= 29) || LIBAVUTIL_VERSION_MAJOR >= 59

#undef AV_CH_LAYOUT_3POINT1POINT2
#undef AV_CH_LAYOUT_5POINT1POINT2_BACK
#undef AV_CH_LAYOUT_5POINT1POINT4_BACK
#undef AV_CH_LAYOUT_7POINT1POINT2
#undef AV_CH_LAYOUT_7POINT1POINT4_BACK

const unsigned long long AV_CH_LAYOUT_3POINT1POINT2 =
    (AV_CH_LAYOUT_3POINT1 | AV_CH_TOP_FRONT_LEFT | AV_CH_TOP_FRONT_RIGHT);
const unsigned long long AV_CH_LAYOUT_5POINT1POINT2_BACK =
    (AV_CH_LAYOUT_5POINT1_BACK | AV_CH_TOP_FRONT_LEFT | AV_CH_TOP_FRONT_RIGHT);
const unsigned long long AV_CH_LAYOUT_5POINT1POINT4_BACK =
    (AV_CH_LAYOUT_5POINT1POINT2_BACK | AV_CH_TOP_BACK_LEFT | AV_CH_TOP_BACK_RIGHT);
const unsigned long long AV_CH_LAYOUT_7POINT1POINT2 =
    (AV_CH_LAYOUT_7POINT1 | AV_CH_TOP_FRONT_LEFT | AV_CH_TOP_FRONT_RIGHT);
const unsigned long long AV_CH_LAYOUT_7POINT1POINT4_BACK =
    (AV_CH_LAYOUT_7POINT1POINT2 | AV_CH_TOP_BACK_LEFT | AV_CH_TOP_BACK_RIGHT);

#endif

#if (LIBAVUTIL_VERSION_MAJOR >= 59)

#undef AV_CH_LAYOUT_7POINT2POINT3
#undef AV_CH_LAYOUT_9POINT1POINT4_BACK

const unsigned long long AV_CH_LAYOUT_7POINT2POINT3 =
    (AV_CH_LAYOUT_7POINT1POINT2 | AV_CH_TOP_BACK_CENTER | AV_CH_LOW_FREQUENCY_2);
const unsigned long long AV_CH_LAYOUT_9POINT1POINT4_BACK =
    (AV_CH_LAYOUT_7POINT1POINT4_BACK | AV_CH_FRONT_LEFT_OF_CENTER | AV_CH_FRONT_RIGHT_OF_CENTER);

#endif
