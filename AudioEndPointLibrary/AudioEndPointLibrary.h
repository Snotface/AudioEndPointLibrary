#include "AudioDevice.h"
#include <list>
#include "DefSoundDeviceState.h"

// This class is exported from the AudioEndPointLibrary.dll
namespace AudioEndPoint {
	typedef std::unique_ptr<AudioDevice> AudioDevicePtr;
	typedef std::list<AudioDevicePtr> AudioDeviceList;
	typedef std::unique_ptr<AudioDeviceList> AudioDeviceListPtr;

	class AUDIOENDPOINTLIBRARY_API CAudioEndPointLibrary {
		CAudioEndPointLibrary(void);
	public:
		static AudioDeviceListPtr GetPlaybackDevices(DefSound::EDeviceState state);
		static AudioDeviceListPtr GetRecordingDevices(DefSound::EDeviceState state);
	};
}
