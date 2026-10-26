/*
 * FUN_00435bbc at 00435bbc
 * undefined __register FUN_00435bbc(int param_1, undefined4 * param_2)
 * Address ranges: 00435bbc-00435bfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435bbc(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)*param_2,param_2[1],
                           param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0,
                           (HINSTANCE)param_2[0xd],(LPVOID)param_2[8]);
  *(HWND *)(param_1 + 0x14c) = pHVar1;
  return;
}

