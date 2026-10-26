/*
 * Peek at 006004b4
 * undefined Peek(void)
 * Address ranges: 006004b4-006004d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Same Base Name  private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(void)  private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(void)const   Library: Visual Studio
 */

/* Library Function - Multiple Matches With Same Base Name
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)const 
   
   Library: Visual Studio */

undefined1 __fastcall Peek(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_005e7ad0();
    if (iVar1 != -1) {
      *(char *)((int)param_1 + 5) = (char)iVar1;
      goto LAB_006004cf;
    }
  }
  *param_1 = 0;
LAB_006004cf:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined1 *)((int)param_1 + 5);
}

