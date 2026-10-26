/*
 * FUN_0047fae4 at 0047fae4
 * LPSTR __register FUN_0047fae4(int param_1, LPCSTR param_2, LPSTR param_3, DWORD param_4)
 * Address ranges: 0047fae4-0047fb3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPSTR FUN_0047fae4(int param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = FUN_00404030((int)param_2);
  if (((int)param_4 < (int)DVar1) && (DVar1 = param_4, PTR_DAT_0057261c[8] != '\0')) {
    uVar2 = FUN_0040d830(param_2,param_4);
    if ((char)uVar2 == '\x01') {
      DVar1 = param_4 - 1;
    }
  }
  param_3[DVar1] = '\0';
  if (0 < (int)DVar1) {
    FUN_0047fb70(param_1,param_2,param_3,DVar1);
  }
  return param_3;
}

