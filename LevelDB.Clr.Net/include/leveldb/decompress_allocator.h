#pragma once

#ifndef LEVELDB_DECOMPRESS_ALLOCATOR_H_
#define LEVELDB_DECOMPRESS_ALLOCATOR_H_

#include <mutex>
#include <vector>
#include <string>

namespace LevelDB {
	public ref class DecompressAllocator {
	public:
		virtual ~DecompressAllocator();

		virtual System::String get();
		virtual void release(System::String&& string);

		virtual void prune();

	protected:
		std::mutex mutex;
		std::vector<System::String> stack;
	};
}

#endif