/*
 * FUN_005cfc10 at 005cfc10
 * undefined FUN_005cfc10(void)
 * Address ranges: 005cfc10-005cfcab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cfc10(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_10 [16];
  
  iVar1 = *(int *)(param_2 + 4) + 0x24;
  if (*(int *)(param_2 + 0x84) != 0) {
    FUN_005b5c90(param_2 + 8);
    FUN_005b5920();
    FUN_005b3000(iVar1);
    FUN_005b3470(iVar1);
    return;
  }
  FUN_005b5c90(local_10);
  FUN_005b5c90(param_2 + 8);
  FUN_005b5920();
  FUN_005b3470(iVar1);
  FUN_005b3470(iVar1);
  return;
}

