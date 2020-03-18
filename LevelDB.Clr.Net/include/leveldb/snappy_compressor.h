#pragma once

#include "compressor.h"
#ifdef SNAPPY

namespace LevelDB {
	public ref class SnappyCompressor : public Compressor 
	{
	public:

		static const char SERIALIZE_ID = 1;
        
        virtual ~SnappyCompressor() {}

		SnappyCompressor() :
			Compressor(SERIALIZE_ID) {

		}

		virtual void compressImpl(const char* input, size_t length, ::System::String& output) const override;

		virtual bool decompress(const char* input, size_t length, ::System::String& output) const override;
	};
}

#endif // SNAPPY