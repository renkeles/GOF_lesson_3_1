#pragma once

class BombIterator
{
public:
	~BombIterator() {}
	BombIterator(BombIterator* index) : _index(index) {}

	BombIterator& operator=(const BombIterator& other) 
	{
		if (this != &other) 
		{
			_index = other._index;
		}
		return *this;
	}

	BombIterator& operator++() 
	{
		++_index;
		return *this;
	}

	BombIterator operator*() 
	{
		return *_index;
	}

	BombIterator* operator->() 
	{
		return _index;
	}

	bool operator==(const BombIterator& other) const 
	{
		return _index == other._index;
	}

	bool operator!=(const BombIterator& other) const 
	{
		return !(*this == other);
	}

private:
	BombIterator* _index;
};