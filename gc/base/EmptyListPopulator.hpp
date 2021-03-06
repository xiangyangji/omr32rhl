/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 1991, 2015
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 ******************************************************************************/

#if !defined(EMPTYLISTPOPULATOR_HPP_)
#define EMPTYLISTPOPULATOR_HPP_

#include "ObjectHeapBufferedIteratorPopulator.hpp"

struct GC_ObjectHeapBufferedIteratorState;
class MM_HeapRegionDescriptor;

class MM_EmptyListPopulator : public MM_ObjectHeapBufferedIteratorPopulator 
{
public:
	MM_EmptyListPopulator() : MM_ObjectHeapBufferedIteratorPopulator()
	{
		_typeId = __FUNCTION__;
	}
	
	virtual void initializeObjectHeapBufferedIteratorState(MM_HeapRegionDescriptor* region, GC_ObjectHeapBufferedIteratorState* state) const;
	virtual uintptr_t populateObjectHeapBufferedIteratorCache(omrobjectptr_t* cache, uintptr_t count, GC_ObjectHeapBufferedIteratorState* state) const;
	virtual void advance(uintptr_t size, GC_ObjectHeapBufferedIteratorState* state) const;
	virtual void reset(MM_HeapRegionDescriptor* region, GC_ObjectHeapBufferedIteratorState* state, void* base, void* top) const;
};
#endif /*EMPTYLISTPOPULATOR_HPP_*/
