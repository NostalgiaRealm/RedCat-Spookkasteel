/*
 * exception::~exception at 0060b3ec
 * void __thiscall ~exception(exception * this)
 * Address ranges: 0060b3ec-0060b401
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual __thiscall exception::~exception(void)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_00651bc0;
  if (*(int *)(this + 8) != 0) {
    FUN_005fe5f0(*(undefined4 *)(this + 4));
  }
  return;
}

