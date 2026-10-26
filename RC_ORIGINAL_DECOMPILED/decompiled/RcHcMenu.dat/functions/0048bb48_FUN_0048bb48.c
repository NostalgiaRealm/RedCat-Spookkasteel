/*
 * FUN_0048bb48 at 0048bb48
 * undefined __register FUN_0048bb48(int * param_1, undefined4 * param_2)
 * Address ranges: 0048bb48-0048bbb6;0048bc66-0048bc90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 13 for TIntegerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 13 for
   TIntegerProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048bb48(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int local_40 [7];
  VARIANT local_24;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_10 = 0;
  pVVar3 = &local_24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar3 = (VARIANT *)((int)&pVVar3->n1 + 4);
  }
  puStack_150 = (undefined1 *)0x48bb79;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_154 = &LAB_0048bc91;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  puStack_160 = &LAB_0048bbb7;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_15c = &stack0xfffffffc;
  puStack_150 = &stack0xfffffffc;
  uVar1 = FUN_0040514c(&local_24);
  local_9 = (**(code **)(*local_8 + 0x74))(local_8,uVar1);
  *in_FS_OFFSET = uStack_164;
  *in_FS_OFFSET = uStack_158;
  puStack_150 = &LAB_0048bc98;
  puStack_154 = (undefined1 *)0x48bc80;
  FUN_00403dd4(local_40,3);
  puStack_154 = (undefined1 *)0x48bc88;
  FUN_00405bcc(&local_24);
  puStack_154 = (undefined1 *)0x48bc90;
  FUN_00403db0(&local_10);
  return;
}

