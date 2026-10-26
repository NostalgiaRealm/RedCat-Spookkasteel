/*
 * FUN_00403f98 at 00403f98
 * undefined __register FUN_00403f98(int * param_1, LPCWSTR param_2)
 * Address ranges: 00403f98-00403fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403f98(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  LPCWSTR pWVar2;
  
  uVar1 = 0;
  pWVar2 = param_2;
  if (param_2 != (LPCWSTR)0x0) {
    for (; *pWVar2 != L'\0'; pWVar2 = pWVar2 + 4) {
      if (pWVar2[1] == L'\0') {
LAB_00403fc1:
        pWVar2 = pWVar2 + 1;
        break;
      }
      if (pWVar2[2] == L'\0') {
LAB_00403fbe:
        pWVar2 = pWVar2 + 1;
        goto LAB_00403fc1;
      }
      if (pWVar2[3] == L'\0') {
        pWVar2 = pWVar2 + 1;
        goto LAB_00403fbe;
      }
    }
    uVar1 = (uint)((int)pWVar2 - (int)param_2) >> 1;
  }
  FUN_00403ec8(param_1,param_2,uVar1);
  return;
}

