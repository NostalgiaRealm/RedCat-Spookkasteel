/*
 * FUN_0040bd9b at 0040bd9b
 * undefined __cdecl FUN_0040bd9b(undefined4 param_1, undefined4 param_2)
 * Address ranges: 0040bd9b-0040be02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040bd9b(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  CHAR local_258 [512];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  _memset(&local_58,0,0x44);
  local_58.cb = 0x44;
  wsprintfA(local_258,s___s___s_00412efc,param_1,param_2);
  BVar1 = CreateProcessA((LPCSTR)0x0,local_258,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,&local_14);
  if (BVar1 != 0) {
    WaitForSingleObject(local_14.hProcess,0xffffffff);
  }
  return;
}

