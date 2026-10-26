/*
 * Peek at 006055b7
 * undefined Peek(void)
 * Address ranges: 006055b7-006055dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Same Base Name  private: unsigned short __thiscall std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >::_Peek(void)  private: wchar_t __thiscall std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >::_Peek(void)  Library: Visual Studio 2003 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    private: unsigned short __thiscall std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >::_Peek(void)
    private: wchar_t __thiscall std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t>
   >::_Peek(void)
   
   Library: Visual Studio 2003 Release */

undefined2 __fastcall Peek(int *param_1)

{
  short sVar1;
  
  if (*param_1 != 0) {
    sVar1 = FUN_006055de();
    if (sVar1 != -1) {
      *(short *)((int)param_1 + 6) = sVar1;
      goto LAB_006055d4;
    }
  }
  *param_1 = 0;
LAB_006055d4:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined2 *)((int)param_1 + 6);
}

