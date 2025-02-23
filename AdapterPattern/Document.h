#ifndef __DOCUMENT_H_
#define __DOCUMENT_H_

class Document
{
  public: 
	virtual ~Document() = default;
	virtual int exportToJSON() const = 0;
	virtual int serialize() const = 0;
};

#endif

