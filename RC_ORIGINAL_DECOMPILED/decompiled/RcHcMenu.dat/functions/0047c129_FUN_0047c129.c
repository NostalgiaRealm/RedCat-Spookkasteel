/*
 * FUN_0047c129 at 0047c129
 * HMODULE __register FUN_0047c129(void)
 * Address ranges: 0047c129-0047c202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HMODULE FUN_0047c129(void)

{
  bool bVar1;
  UINT uMode;
  undefined3 extraout_var;
  HMODULE pHVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int in_stack_00000004;
  LPCSTR in_stack_00000008;
  CHAR local_314 [260];
  CHAR local_210 [520];
  LPSTR local_8;
  
  uMode = SetErrorMode(0x8000);
  if (in_stack_00000004 == 0) {
    FUN_0047bf44();
  }
  FUN_0047bf6c();
  bVar1 = FUN_0047bfd9();
  if ((((CONCAT31(extraout_var,bVar1) == 0) ||
       (pHVar2 = LoadLibraryA(local_314), pHVar2 == (HMODULE)0x0)) &&
      ((uVar3 = FUN_0047c00b(), (short)uVar3 != 0 ||
       ((DVar4 = SearchPathA(local_210,in_stack_00000008,(LPCSTR)0x0,0x104,local_314,&local_8),
        DVar4 == 0 || (pHVar2 = LoadLibraryA(local_314), pHVar2 == (HMODULE)0x0)))))) &&
     (pHVar2 = LoadLibraryA(in_stack_00000008), pHVar2 == (HMODULE)0x0)) {
    GetLastError();
  }
  SetErrorMode(uMode);
  return pHVar2;
}

