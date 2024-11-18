#include "Videos/video-objects.h"

/*
480 x 240
round RGB: 128

Start frame: 4970
Frame count: 1
Frame step: 10
FPS: 30

with https://imageresizer.com/png-compressor/
*/

namespace {

std::vector< std::vector< std::vector<int> > > video = {};

std::vector< std::vector<uint8_t> > videoBuffer = {{137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,224,0,0,0,240,4,3,0,0,0,42,91,170,137,0,0,0,4,103,
65,77,65,0,0,177,143,11,252,97,5,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,15,80,76,84,69,1,1,1,255,
255,255,202,202,202,138,138,138,72,72,72,45,92,58,164,0,0,11,103,73,68,65,84,120,218,237,157,105,150,
163,44,23,128,249,34,11,120,213,44,32,160,11,192,97,1,36,178,255,53,125,144,161,203,56,229,2,23,145,84,
229,156,62,167,127,116,117,229,241,206,3,72,114,132,143,32,22,159,38,143,250,33,8,255,71,105,195,75,78,
233,3,91,9,152,208,228,129,11,98,247,105,82,7,174,45,129,175,169,3,11,75,224,91,226,192,133,180,4,206,
18,7,46,45,121,9,101,105,3,219,154,48,33,137,3,11,107,224,38,105,96,107,19,254,133,192,183,164,129,203,
223,6,92,253,73,248,79,194,127,18,254,3,254,83,233,239,146,112,243,219,36,156,120,166,213,255,178,226,
193,30,56,110,83,11,161,60,252,109,13,0,107,35,78,93,194,133,250,93,97,201,193,136,179,180,129,237,141,
152,38,14,108,111,196,60,109,96,135,192,164,88,202,192,46,201,22,25,88,194,192,165,125,227,146,144,88,
66,198,0,46,106,233,66,204,147,5,118,210,105,109,201,77,178,192,69,239,70,204,82,5,206,75,229,2,28,37,
3,193,1,206,123,39,224,24,73,38,18,48,119,35,142,160,212,72,192,133,155,223,138,32,98,36,224,188,232,
18,17,49,22,176,171,82,223,146,5,46,220,136,179,100,129,117,250,161,82,208,105,68,224,188,114,145,241,
53,97,96,109,199,246,190,250,148,50,176,246,213,234,232,70,140,11,172,227,177,45,50,77,27,216,232,117,
215,43,27,205,110,82,7,214,200,92,203,89,29,212,107,145,32,255,43,175,224,238,43,93,224,130,155,15,227,
188,179,82,233,100,129,11,73,9,81,84,169,99,7,98,60,224,218,173,36,78,23,88,252,50,224,66,254,50,224,
146,252,50,224,122,119,224,170,235,218,20,129,93,51,45,179,62,228,208,218,38,177,77,216,185,32,190,151,
102,67,180,38,158,43,175,71,181,116,239,27,178,56,192,238,188,238,77,173,66,56,121,0,18,153,215,217,132,
31,188,246,253,3,20,96,225,206,235,106,194,69,77,226,1,155,223,77,29,129,7,199,223,217,147,120,192,119,
133,30,196,174,26,253,228,149,246,46,0,233,236,97,198,250,221,124,52,103,47,94,229,240,192,112,142,226,
233,4,96,41,241,24,100,0,1,151,100,120,61,92,233,224,2,112,128,7,206,234,165,245,36,129,47,224,81,68,
208,2,182,207,45,17,128,245,115,86,67,215,47,57,164,79,203,31,141,155,135,244,241,241,8,171,135,221,208,
45,54,58,180,158,127,8,208,89,238,9,236,240,192,16,156,22,231,69,39,137,92,204,161,182,199,198,14,223,
183,24,91,137,67,177,132,18,135,217,226,140,229,190,122,182,189,165,215,184,133,132,151,6,185,240,98,
21,15,243,201,225,243,235,20,2,51,143,30,61,63,10,216,229,123,244,81,195,148,135,83,247,164,90,54,170,
105,48,242,202,130,177,17,111,198,63,178,86,157,249,180,109,24,96,46,39,242,101,111,85,156,181,78,23,
124,158,91,209,30,170,28,6,182,87,230,51,235,138,160,53,0,234,85,217,109,16,103,171,197,189,246,251,67,
203,214,27,42,183,109,92,37,21,53,233,61,165,29,11,212,226,153,96,141,101,183,62,40,127,215,105,254,250,
188,38,23,170,123,201,185,130,235,134,25,230,109,120,54,188,54,109,191,46,59,19,182,222,214,165,213,146,
160,30,174,126,226,253,134,246,233,156,105,15,1,46,120,245,158,17,204,92,27,94,35,190,218,18,1,255,247,
212,169,22,27,251,183,0,147,109,40,201,203,27,243,123,62,57,174,63,233,10,176,214,229,247,248,72,91,22,
172,107,57,117,91,217,194,151,209,62,164,229,108,204,214,110,69,182,31,173,124,191,238,135,214,115,255,
94,220,93,242,100,138,183,180,147,141,56,76,155,68,220,22,144,33,102,108,100,122,29,95,243,110,195,187,
246,156,196,244,113,22,139,227,217,91,208,190,244,204,145,110,175,188,223,77,254,253,159,64,183,23,41,
159,214,253,139,184,116,200,3,3,87,86,121,148,198,27,56,200,149,207,246,126,234,247,238,236,202,182,246,
74,230,137,57,16,159,228,30,31,146,191,234,221,161,112,112,231,83,187,252,236,205,31,90,101,53,1,129,
149,213,201,149,10,220,22,122,239,115,172,242,174,228,173,1,129,59,238,254,195,219,159,118,228,173,22,
127,78,245,207,104,16,22,216,167,227,108,51,139,251,209,156,21,241,110,61,107,68,224,179,71,181,107,35,
224,140,21,230,39,116,61,212,171,181,147,111,58,222,135,7,190,120,84,187,54,2,206,116,229,199,231,89,
198,187,78,15,107,196,136,192,194,189,99,101,101,193,242,94,247,125,60,7,182,66,28,16,216,194,136,157,
167,233,155,196,44,44,112,33,167,143,29,110,196,50,0,48,29,218,192,192,125,91,57,26,113,169,130,16,135,
6,102,83,205,4,111,6,243,10,5,88,78,254,122,13,108,195,51,83,132,175,156,212,179,194,223,65,160,183,103,
159,65,235,242,163,131,215,4,7,22,142,129,169,232,116,232,196,80,224,194,112,242,61,250,210,47,223,35,
221,2,83,69,168,240,227,5,231,237,152,192,58,154,246,110,129,169,84,153,240,243,200,224,16,136,11,60,
233,180,129,3,211,185,31,36,186,63,222,5,248,189,61,9,49,226,187,104,202,170,218,67,157,177,129,75,57,
221,109,249,108,196,226,209,88,244,136,75,212,238,194,8,84,224,249,183,97,159,253,28,89,158,166,195,51,
72,187,47,137,9,92,59,12,68,125,51,14,235,251,64,2,3,159,194,2,15,246,87,99,96,2,235,200,50,77,138,63,
26,241,197,203,57,179,60,38,176,14,195,115,107,252,244,149,254,243,0,190,241,118,54,239,222,25,152,207,
6,254,87,196,202,127,38,97,106,124,116,199,98,1,107,39,61,79,167,79,86,227,25,183,176,196,35,197,225,
179,169,7,237,250,60,61,193,248,40,27,91,70,157,45,81,163,162,210,194,136,5,10,176,149,179,70,6,174,166,
245,195,118,118,137,4,108,19,141,113,129,13,108,12,96,139,234,1,125,92,154,149,112,35,238,9,214,7,238,
184,16,123,90,15,224,211,116,196,20,40,38,205,98,242,254,18,238,159,42,44,192,77,0,68,96,176,167,198,
109,196,75,83,46,212,208,250,161,196,227,133,23,137,168,192,89,47,201,108,103,184,217,103,222,0,21,49,
230,228,129,180,58,42,177,105,250,180,234,65,49,77,24,30,140,241,128,75,73,153,249,51,111,79,175,212,
232,200,3,165,1,38,98,68,96,242,2,46,23,151,203,66,228,209,14,197,34,230,38,94,118,255,179,152,79,44,
204,228,145,53,154,144,189,129,205,122,92,253,0,174,33,201,16,54,48,189,237,14,76,90,241,200,36,151,89,
166,166,220,99,171,244,206,78,75,140,82,231,26,18,43,177,69,188,55,176,28,69,221,53,150,247,25,53,46,
49,221,57,14,63,191,61,123,121,48,136,24,42,76,224,108,103,224,242,253,49,247,160,210,21,211,140,129,
179,89,196,91,30,104,215,255,0,175,171,235,216,119,33,42,53,116,250,142,118,200,67,59,104,94,141,244,
106,125,90,68,71,178,168,228,206,38,140,121,173,69,147,159,199,229,126,13,234,200,160,229,151,208,225,
59,42,112,61,238,202,110,157,194,27,221,30,94,239,26,148,240,128,77,38,157,139,55,207,177,69,252,147,
37,32,165,212,64,31,141,120,20,239,1,252,230,57,96,196,229,158,62,26,245,236,97,83,201,73,181,191,121,
182,244,101,200,229,174,26,141,40,225,37,87,9,33,174,247,244,209,120,192,253,178,171,156,156,73,155,16,
55,104,189,105,248,170,50,22,176,88,251,189,91,145,214,28,227,65,201,61,44,22,119,177,110,91,18,171,13,
187,205,3,196,45,138,70,219,92,171,133,7,172,212,202,131,230,155,206,26,67,163,109,238,183,193,187,79,
171,173,214,52,107,235,254,120,42,247,21,48,22,240,189,131,183,62,86,65,173,3,189,4,140,5,108,154,89,
245,70,62,139,87,36,248,196,96,84,224,97,146,88,230,22,17,121,167,172,18,19,88,144,86,251,173,235,150,
149,135,18,178,229,205,135,104,119,226,221,140,223,218,110,92,7,33,166,81,86,15,205,145,117,245,49,252,
243,16,106,109,123,249,9,14,240,25,152,239,224,11,217,250,190,37,28,224,11,180,233,128,78,28,227,138,
184,127,61,105,200,47,71,246,214,49,110,76,123,148,180,38,99,186,194,134,110,126,66,166,30,30,26,13,248,
76,178,110,86,253,175,19,123,157,216,81,30,30,26,13,88,167,28,58,204,130,213,203,75,173,123,31,3,70,2,
190,167,28,165,141,61,185,171,117,118,246,49,96,44,96,163,205,149,213,13,119,165,171,144,111,53,245,81,
104,164,87,121,154,103,93,219,41,152,171,90,55,245,77,250,240,162,0,159,31,45,218,171,213,15,213,142,
97,168,96,98,113,188,190,47,48,81,157,180,185,228,192,225,53,69,143,207,41,103,143,44,199,249,226,113,
12,224,139,173,11,113,111,220,93,159,186,49,180,121,68,96,97,53,205,242,106,69,179,167,66,177,60,62,176,
133,207,114,22,48,125,232,135,207,219,154,177,238,151,182,185,226,192,93,192,8,239,27,67,0,214,81,105,
232,45,94,5,230,209,137,62,29,2,248,252,179,145,22,186,120,104,14,1,108,96,5,252,188,191,220,179,24,12,
2,44,238,91,240,87,43,15,151,50,176,22,25,43,192,105,71,233,83,13,99,188,35,17,7,24,94,42,121,205,206,
110,135,0,174,200,125,172,180,131,70,163,188,34,145,32,248,44,211,223,129,62,124,153,62,176,176,250,46,
62,192,244,16,192,118,121,86,65,146,151,112,109,21,48,188,86,118,80,94,206,76,252,53,90,41,9,246,89,117,
242,192,133,32,3,239,161,17,210,43,10,91,206,69,67,1,63,118,44,51,27,7,23,51,239,240,6,126,54,240,178,
240,22,124,24,224,44,7,151,14,158,27,59,167,35,0,223,55,134,129,153,180,239,106,203,97,128,11,224,219,
248,124,87,178,110,71,0,22,240,118,135,247,218,236,245,24,192,96,119,226,61,25,110,142,3,12,26,133,203,
111,0,126,80,128,178,122,255,45,210,35,0,151,240,20,72,124,5,112,173,125,150,4,153,48,194,94,244,17,128,
5,201,56,44,237,64,56,218,112,4,96,179,129,39,64,219,157,245,87,0,223,215,13,97,121,22,194,34,248,1,226,
176,201,177,10,80,157,138,113,180,225,0,153,214,115,47,124,39,224,3,228,210,240,177,18,198,113,172,3,
148,135,23,66,149,4,61,249,250,43,128,11,248,142,37,202,105,157,163,0,183,251,56,105,135,87,194,7,2,110,
246,2,142,222,151,46,225,15,30,101,79,250,26,27,216,92,116,160,118,139,74,7,0,190,232,76,26,182,54,140,
3,252,191,216,192,186,116,40,202,29,129,79,241,129,111,38,217,130,0,147,175,0,54,99,225,82,82,190,23,
48,61,2,112,5,115,90,223,1,108,114,142,26,212,224,193,1,38,241,129,135,78,238,24,150,162,47,166,193,167,
152,72,18,142,12,252,164,24,246,3,190,30,2,184,101,96,101,72,31,88,2,111,27,68,146,112,228,109,218,242,
254,94,7,216,233,146,72,71,43,113,129,207,26,182,135,1,35,73,56,242,130,184,46,150,218,51,240,206,129,
175,0,190,16,202,75,224,126,156,252,18,224,22,25,152,202,208,185,165,15,176,208,176,53,112,93,12,216,
226,185,137,208,171,105,126,192,25,19,192,51,68,64,224,230,28,186,141,231,41,97,157,74,195,128,47,208,
163,133,50,112,110,233,7,12,95,8,188,64,157,146,56,60,48,166,132,111,159,58,246,215,47,147,112,251,41,
69,57,2,48,44,181,188,128,203,63,113,100,96,106,94,106,5,170,150,206,224,89,74,125,104,224,174,3,190,
251,231,12,115,210,249,135,157,234,216,192,170,229,18,6,92,130,37,156,31,25,152,242,28,19,248,145,72,
213,71,6,110,25,62,112,249,219,128,183,116,58,46,176,169,135,141,74,67,222,10,83,88,0,215,7,6,190,105,
167,165,240,90,30,15,224,13,63,29,23,248,169,166,3,30,112,243,169,180,250,82,224,101,157,86,209,129,159,
16,176,247,254,72,11,224,229,26,177,139,14,252,132,192,7,94,206,188,219,248,192,198,214,36,16,88,0,203,
195,213,32,70,181,127,140,13,108,22,241,84,8,224,165,127,77,205,53,75,241,129,135,30,88,61,128,128,79,
63,17,111,161,27,18,31,184,212,229,82,5,124,229,32,168,32,254,215,119,94,112,91,153,249,47,226,3,15,21,
240,5,124,255,217,53,218,47,11,61,233,250,48,192,144,64,12,43,136,55,226,182,217,204,142,220,196,187,
3,119,152,192,163,190,179,88,108,225,178,216,192,100,80,64,224,210,18,184,92,168,44,4,2,240,255,1,180,
25,97,142,178,204,241,123,0,0,0,0,73,69,78,68,174,66,96,130,
}};

}

VideoInfo badApple_image(30, 10, &::videoBuffer);