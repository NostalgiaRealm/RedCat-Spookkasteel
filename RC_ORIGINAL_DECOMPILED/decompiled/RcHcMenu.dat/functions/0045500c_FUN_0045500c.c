/*
 * FUN_0045500c at 0045500c
 * undefined4 __register FUN_0045500c(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 0045500c-00455071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4530ac slot 13 for TImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4530ac slot 13 for TImage.
   Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0045500c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    iVar1 = FUN_0041f428(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
    iVar1 = FUN_0041f440(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
  }
  if ((*(char *)(param_1 + 0x4b) == '\0') || ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2)) {
    uVar2 = FUN_0041f428(*(int *)(param_1 + 0x128));
    *param_2 = uVar2;
  }
  if (*(byte *)(param_1 + 0x4b) < 3) {
    uVar2 = FUN_0041f440(*(int *)(param_1 + 0x128));
    *param_3 = uVar2;
  }
  return uVar3;
}

