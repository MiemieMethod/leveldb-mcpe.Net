
#pragma once

#include "leveldb/compressor.h"

namespace LevelDB {

	public ref class ZopfliCompressor : public Compressor 
	{
	public:
		static const int SERIALIZE_ID = 2; //Same as ZLib since it is a replacement

		ZopfliCompressor() : Compressor(SERIALIZE_ID) {}

        virtual ~ZopfliCompressor() {}

		virtual void compressImpl(const char* input, size_t length, ::System::String& output) const override;

		virtual bool decompress(const char* input, size_t length, ::System::String &output) const override;

	private:
	};
}