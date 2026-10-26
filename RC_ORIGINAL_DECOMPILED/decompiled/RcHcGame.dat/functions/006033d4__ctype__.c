/*
 * ~ctype<> at 006033d4
 * undefined ~ctype<>(void)
 * Address ranges: 006033d4-006033f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Same Base Name  protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)  protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)
    protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall ~ctype<>(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_006517fc;
  if (param_1[5] != 0) {
    FUN_0060b25d(param_1[4]);
  }
  *param_1 = &PTR_FUN_006514cc;
  return;
}

