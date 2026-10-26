/*
 * FUN_005ccf30 at 005ccf30
 * undefined FUN_005ccf30(void)
 * Address ranges: 005ccf30-005ccfbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005ccf30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_2;
  local_8 = param_1;
  iVar1 = FUN_005cd0a0(0,&local_8,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_005cc600();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = 1;
    iVar3 = FUN_005ccde0(iVar2,iVar1);
    if (iVar3 != 0) {
      FUN_005cd320();
      iVar1 = 0;
      iVar3 = FUN_005cc7f0(iVar2);
      if (iVar3 != 0) {
        return iVar2;
      }
    }
    FUN_005cc630(iVar2);
  }
  if (iVar1 != 0) {
    FUN_005cd320();
  }
  return 0;
}

