#include "IntegerStackItem.h"

IntegerStackItem::IntegerStackItem(unsigned char * data, int size) :IStackItem(EStackItemType::Integer),
Value(new BigInteger(data, size)) {}

IntegerStackItem::IntegerStackItem(int value) : IStackItem(EStackItemType::Integer),
Value(new BigInteger(value)) {}

IntegerStackItem::IntegerStackItem(BigInteger *value, bool copyPointer) : IStackItem(EStackItemType::Integer),
Value(copyPointer ? new BigInteger(value) : value) {}

IntegerStackItem::~IntegerStackItem()
{
	if (this->Value = NULL)return;

	delete(this->Value);
	this->Value = NULL;
}

bool IntegerStackItem::GetBoolean()
{
	// TODO: Check this
	// return value != BigInteger.Zero;

	int ret = 0;
	if (this->Value->ToInt32(ret)) return ret > 0;

	return false;
}

BigInteger* IntegerStackItem::GetBigInteger()
{
	return this->Value->Clone();
}

bool IntegerStackItem::GetInt32(int &ret)
{
	return this->Value->ToInt32(ret);
}

int IntegerStackItem::ReadByteArray(unsigned char * output, int sourceIndex, int count)
{
	if (sourceIndex != 0)
	{
		return -1;
	}

	return this->Value->ToByteArray(output, count);
}

int IntegerStackItem::ReadByteArraySize()
{
	return this->Value->ToByteArraySize();
}

IStackItem* IntegerStackItem::Clone()
{
	return new IntegerStackItem(this->Value, false);
}

// Serialize

int IntegerStackItem::Serialize(unsigned char * data, int length)
{
	return this->Value->ToByteArray(data, length);
}

int IntegerStackItem::GetSerializedSize()
{
	return this->Value->ToByteArraySize();
}