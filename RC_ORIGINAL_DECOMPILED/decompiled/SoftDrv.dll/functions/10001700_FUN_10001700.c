/*
 * FUN_10001700 at 10001700
 * undefined FUN_10001700(void)
 * Address ranges: 10001700-10001798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001700(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  param_1[1] = 0;
  *param_1 = 0;
  hModule = LoadLibraryA(s_ddraw_dll_1002106c);
  param_1[1] = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_DirectDrawCreate_10021058);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(0,&local_4,0);
      if (iVar2 == 0) {
        if (local_4 == (int *)0x0) goto LAB_1000178b;
        iVar2 = (**(code **)*local_4)(local_4,&DAT_100207d8,param_1);
        if (iVar2 == 0) {
          (**(code **)(*local_4 + 8))(local_4);
          return 1;
        }
      }
    }
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
    local_4 = (int *)0x0;
  }
LAB_1000178b:
  FUN_10001350(param_1);
  return 0;
}

