/*
 * FUN_0043aaec at 0043aaec
 * undefined4 __register FUN_0043aaec(int param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0043aaec-0043aaff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 0 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 0 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0043aaec(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                   *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x4b)) + -1;
  bVar1 = (byte)iVar2;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1 - 2);
  if (bVar1 < 2) {
    *param_3 = *param_3 + 0xc;
    return uVar3;
  }
  param_3[1] = param_3[1] + 0xc;
  return uVar3;
}

