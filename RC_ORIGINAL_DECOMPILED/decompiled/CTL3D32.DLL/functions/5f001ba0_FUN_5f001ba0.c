/*
 * FUN_5f001ba0 at 5f001ba0
 * undefined __cdecl FUN_5f001ba0(HWND param_1, ushort param_2, undefined4 param_3)
 * Address ranges: 5f001ba0-5f001c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f001ba0(HWND param_1,ushort param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  int local_4;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_5f002e40(param_1,param_2,0,param_3);
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar1 == (HANDLE)0x0) {
    local_4 = 0x29a;
    SendMessageW(param_1,0x1944,0,(LPARAM)&local_4);
    if (local_4 == 0x29a) {
      SendMessageW(param_1,0x1943,0,(LPARAM)&local_4);
      if (local_4 == 0x29a) {
        RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
        FUN_5f002e40(param_1,param_2,0,param_3);
      }
    }
  }
  return;
}

