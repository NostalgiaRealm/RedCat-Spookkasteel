/*
 * FUN_0048c574 at 0048c574
 * undefined __register FUN_0048c574(int * param_1, undefined4 * param_2)
 * Address ranges: 0048c574-0048c5e2;0048c690-0048c6ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48c40c slot 13 for TFKIntegerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48c40c slot 13 for
   TFKIntegerProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048c574(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  int local_44 [7];
  int local_28;
  VARIANT local_24;
  undefined1 local_9;
  int *local_8;
  
  local_28 = 0;
  local_44[0] = 0;
  local_44[2] = 0;
  local_44[1] = 0;
  pVVar3 = &local_24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar3 = (VARIANT *)((int)&pVVar3->n1 + 4);
  }
  puStack_154 = (undefined1 *)0x48c5a5;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_158 = &LAB_0048c6bb;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puStack_164 = &LAB_0048c5e3;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_160 = &stack0xfffffffc;
  puStack_154 = &stack0xfffffffc;
  uVar1 = FUN_0040514c(&local_24);
  local_9 = (**(code **)(*local_8 + 0x70))(local_8,uVar1);
  *in_FS_OFFSET = uStack_168;
  *in_FS_OFFSET = uStack_15c;
  puStack_154 = &LAB_0048c6c2;
  puStack_158 = (undefined1 *)0x48c6aa;
  FUN_00403dd4(local_44,3);
  puStack_158 = (undefined1 *)0x48c6b2;
  FUN_00403db0(&local_28);
  puStack_158 = (undefined1 *)0x48c6ba;
  FUN_00405bcc(&local_24);
  return;
}

